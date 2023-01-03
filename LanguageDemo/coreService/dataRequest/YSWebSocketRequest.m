//
//  YSWebSocketRequest.m
//  LanguageDemo
//
//  Created by Bob on 2023/1/3.
//

#import "YSWebSocketRequest.h"
#import <SocketRocket.h>


@interface YSWebSocketRequest ()<SRWebSocketDelegate>
{
    int _index;
    NSTimer *heartBeat;
    NSTimeInterval reConnectTime;
}

@property (nonatomic, strong) SRWebSocket *socket;

@end

@implementation YSWebSocketRequest

+ (YSWebSocketRequest *)instance{
    static YSWebSocketRequest *instance = nil;
    dispatch_once_t predicate;
    dispatch_once(&predicate, ^{
        instance = [[YSWebSocketRequest alloc] init];
    });
    return instance;
}

- (void)webSocketOpenWithUrlString:(NSString *)urlStr{
    
    if (self.socket) return;
    if (!urlStr) return;
    
    NSURLRequest *request = [NSURLRequest requestWithURL:[NSURL URLWithString:urlStr]];
    self.socket = [[SRWebSocket alloc] initWithURLRequest:request];
    self.socket.delegate = self;
    [self.socket open];
}

- (void)webSocketClose{
    if (!self.socket) return;
    
    [self.socket close];
    self.socket = nil;
}


- (void)webSocketDidOpen:(SRWebSocket *)webSocket{
    DSLog(@"连接成功...");
    reConnectTime = 0;
    // 开启心跳
}

#pragma mark websocket delegate method
- (void)webSocket:(SRWebSocket *)webSocket didFailWithError:(NSError *)error{
    ESLog(@"webSocket连接失败");
    _socket = nil;
}

- (void)webSocket:(SRWebSocket *)webSocket didReceivePingWithData:(NSData *)data{
    NSString *reply = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    DSLog(@"心跳数据%@", reply);
}

- (void)webSocket:(SRWebSocket *)webSocket didReceiveMessage:(nonnull id)message{
    DSLog(@"接收数据:%@", message);
}

- (void)webSocket:(SRWebSocket *)webSocket didCloseWithCode:(NSInteger)code
           reason:(NSString *)reason wasClean:(BOOL)wasClean{
    WSLog(@"webSocket连接关闭");
}


@end
