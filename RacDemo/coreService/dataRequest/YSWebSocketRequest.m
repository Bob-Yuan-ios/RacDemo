//
//  YSWebSocketRequest.m
//  RacDemo
//
//  Created by Bob on 2023/1/3.
//

#import "YSWebSocketRequest.h"
#import <SocketRocket.h>

#define MAX_REPEAT_CONNECT_NUMBER     2
#define REPEAT_CONNECT_INTERVAL       3

#define HTTP_RESPONE_TIME_INTERVAL    10
#define SOCKET_PING_TIME_INTERVAL     15
#define SOCKET_CONNECT_TIME_INTERVAL  30

typedef NS_ENUM(NSUInteger, WebSocketConnectState){
    WebSocketConnectStateInit,
    WebSocketConnectStateConnecting, // 连接中
    WebSocketConnectStateConnection, // 连接上
    WebSocketConnectStateDisConnection, // 断开连接
    WebSocketConnectStateClosed,        // 关闭连接
    WebSocketConnectStateEnd
};


@interface YSWebSocketRequest ()<SRWebSocketDelegate>

@property (nonatomic, assign) NSUInteger reConnectCnt;

@property (nonatomic, assign) WebSocketConnectState connectState;

@property (nonatomic, copy) NSMutableString *server;
@property (nonatomic, copy) NSMutableString *port;

@property (nonatomic, strong) SRWebSocket *socket;

@property (nonatomic, strong) dispatch_source_t pingTimer;
@property (nonatomic, strong) dispatch_source_t connectTimer;

@property (nonatomic, copy) void(^connectFailureBlock)(void);
@property (nonatomic, copy) void(^reciveDataBlock)(id data);

@end

@implementation YSWebSocketRequest
 
- (id)initWithServer:(NSString *)server port:(NSString *)port
          reviceData:(void(^)(id data))dataBlock
      connectFailure:(void(^)(void))failureBlock{
    self = [super init];
    if (self) {
        _port = [port mutableCopy];
        _server = [server mutableCopy];
        _connectState = WebSocketConnectStateInit;
        
        _reciveDataBlock = dataBlock;
        _connectFailureBlock = failureBlock;
        
        //从后台到前台直接触发一次心跳
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(ping)
                                                     name:NSExtensionHostDidBecomeActiveNotification
                                                   object:nil];
    }
    return self;
}

#pragma mark 连接/断开 方法
- (void)connectWebSocket{
    
    if (self.socket) return;
    
    _connectState = WebSocketConnectStateConnecting;
    
    NSURL *requestUrl = [NSURL URLWithString:[NSString stringWithFormat:@"ws://%@:%@", _server, _port]];
    NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:requestUrl];
    
    // 设置相关参数
    request.timeoutInterval = HTTP_RESPONE_TIME_INTERVAL;
    [request setValue:@"token_id=;session_id=" forHTTPHeaderField:@"Cookie"];
    
    _socket = [[SRWebSocket alloc] initWithURLRequest:request];
    _socket.delegate = self;
    
    [_socket open];
}

- (void)disconnectWebSocket{
        
    [self stopConnection];
    [self stopPing];
    
    [self.socket close];
    self.socket = nil;
}

- (void)refreshConnectWebSocket{
    _reConnectCnt = 0;
    [self connectWebSocket];
}

#pragma mark 定时器相关方法
- (void)startConnect{
    _connectTimer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, dispatch_queue_create(0, 0));
    if (_connectTimer) {
        dispatch_source_set_timer(_connectTimer, dispatch_walltime(NULL, 0), SOCKET_CONNECT_TIME_INTERVAL * NSEC_PER_SEC,
                                  1ull * NSEC_PER_SEC);
        dispatch_source_set_event_handler( _connectTimer, ^{
            [self connection];
        });
        dispatch_resume(_connectTimer);
    }
}

- (void)connection{
    if (WebSocketConnectStateConnection == _connectState) {
        DSLog(@"连接成功");
        // 减少资源占用
        [self stopConnection];
        return;
    }
    
    if (WebSocketConnectStateConnecting != _connectState) {
        DSLog(@"断开链接");
        if (MAX_REPEAT_CONNECT_NUMBER >= _reConnectCnt) {
            // 没有大于重连次数，可以重连
            [self connectWebSocket];
        }else{
            // 大于重连次数，回调给上层处理
            [self disconnectWebSocket];
            if (_connectFailureBlock) _connectFailureBlock();
        }
    }
}

- (void)stopConnection{
    dispatch_suspend(_connectTimer);
    _connectTimer = nil;
}


- (void)startPing{
    _pingTimer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, dispatch_queue_create(0, 0));
    if (_pingTimer) {
        dispatch_source_set_timer(_pingTimer, dispatch_walltime(NULL, 0), SOCKET_PING_TIME_INTERVAL * NSEC_PER_SEC, 1ull * NSEC_PER_SEC);
        dispatch_source_set_event_handler( _pingTimer, ^{
            [self ping];
        });
        dispatch_resume(_pingTimer);
    }
}

- (void)ping{
    if (WebSocketConnectStateConnection == _connectState) {
        [self.socket sendPing:[@"PingTag" dataUsingEncoding:NSUTF8StringEncoding] error:nil];
    }
}

- (void)stopPing{
    dispatch_suspend(_pingTimer);
    _pingTimer = nil;
}

#pragma mark websocket delegate method
- (void)webSocketDidOpen:(SRWebSocket *)webSocket{
    DSLog(@"连接成功");
    _reConnectCnt = 0;
    _connectState = WebSocketConnectStateConnection;
    
    [self stopConnection];
    [self startPing];
}

- (void)webSocket:(SRWebSocket *)webSocket didFailWithError:(NSError *)error{
    ESLog(@"连接失败");
    [_socket close];
    _socket = nil;
    
    _connectState = WebSocketConnectStateDisConnection;
    [self stopPing];
    [self startConnect];
}

- (void)webSocket:(SRWebSocket *)webSocket didReceivePingWithData:(NSData *)data{
    NSString *reply = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    DSLog(@"心跳数据:%@", reply);
}

- (void)webSocket:(SRWebSocket *)webSocket didReceiveMessage:(nonnull id)message{
    DSLog(@"接收数据:%@", message);
    if(_reciveDataBlock) _reciveDataBlock(message);
}

- (void)webSocket:(SRWebSocket *)webSocket didCloseWithCode:(NSInteger)code
           reason:(NSString *)reason wasClean:(BOOL)wasClean{
    WSLog(@"连接关闭");
    _connectState = WebSocketConnectStateClosed;
}
 
@end
