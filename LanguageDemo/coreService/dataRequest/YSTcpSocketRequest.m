//
//  YSTcpSocketRequest.m
//  LanguageDemo
//
//  Created by Bob on 2023/1/5.
//

#import "YSTcpSocketRequest.h"
#import <netinet/in.h>
#import <arpa/inet.h>
#import <ifaddrs.h>

#import "GCDAsyncSocket.h"

@interface YSTcpSocketRequest ()<GCDAsyncSocketDelegate>
{
    GCDAsyncSocket *_tcpSocket;
    NSString *_loc_ipAdr, *_loc_port, *_des_ipAdr, *_des_port;
}

@end

@implementation YSTcpSocketRequest

- (id)init{
    self = [super init];
    if (self) {
        _loc_ipAdr = [self getIPAddress];
        _loc_port = @"10001";
        
        _des_ipAdr = @"127.0.0.1";
        _des_port = @"10000";
        
        _tcpSocket = [[GCDAsyncSocket alloc] initWithDelegate:self delegateQueue:dispatch_get_main_queue()];
        NSError *error;
        [_tcpSocket connectToHost:_des_port onPort:_des_ipAdr.integerValue error:&error];
        if (error) {
            ESLog(@"socket连接失败");
        }else{
            DSLog(@"可以发送数据");
            [_tcpSocket writeData:[@"Hello World" dataUsingEncoding:NSUTF8StringEncoding] withTimeout:30 tag:0];
        }
    }
    return self;
}

- (NSString *)getIPAddress{
    NSString *ip_address = @"";
    
    struct ifaddrs *interfaces = NULL;
    struct ifaddrs *temp_addre = NULL;
    
    int success = 0;
    success = getifaddrs(&interfaces);
    if (0 == success) {
        temp_addre = interfaces;
        while (temp_addre != NULL) {
            if (temp_addre->ifa_addr->sa_family == AF_INET) {
                if ([[NSString stringWithUTF8String:temp_addre->ifa_name] isEqualToString:@"en0"]) {
                    char *temp = inet_ntoa(((struct sockaddr_in *)temp_addre->ifa_addr)->sin_addr);
                    ip_address = [NSString stringWithUTF8String:temp];
                }
            }
            temp_addre = temp_addre->ifa_next;
        }
    }
    freeifaddrs(interfaces);
    
    return ip_address;
}

#pragma mark delegate method
- (void)socket:(GCDAsyncSocket *)sock didConnectToHost:(NSString *)host port:(uint16_t)port{
    DSLog(@"连接成功");
    [_tcpSocket readDataWithTimeout:-1 tag:0];
}

-  (void)socketDidDisconnect:(GCDAsyncSocket *)sock withError:(NSError *)err{
    WSLog(@"断开连接");
}

- (void)socket:(GCDAsyncSocket *)sock didReadData:(NSData *)data withTag:(long)tag{
    DSLog(@"接收数据");
    [_tcpSocket readDataWithTimeout:-1 tag:0];
    
    NSString *str = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    DSLog(@"%@", str);
}

- (void)socket:(GCDAsyncSocket *)sock didWriteDataWithTag:(long)tag{
    DSLog(@"发送数据");
}

@end
