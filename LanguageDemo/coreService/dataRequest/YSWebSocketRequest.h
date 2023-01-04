//
//  YSWebSocketRequest.h
//  LanguageDemo
//
//  Created by Bob on 2023/1/3.
//  按一条Socket处理

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSWebSocketRequest : NSObject


///  初始化WebSocket
/// @param server 服务器地址
/// @param port 端口
/// @param dataBlock        返回数据
/// @param failureBlock 连接失败回调
- (id)initWithServer:(NSString *)server port:(NSString *)port
          reviceData:(void(^)(id data))dataBlock
      connectFailure:(void(^)(void))failureBlock;

/// 连接webSocket
- (void)refreshConnectWebSocket;

/// 断开webSocket
- (void)disconnectWebSocket;

@end

NS_ASSUME_NONNULL_END
