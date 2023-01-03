//
//  YSHttpManager.h
//  LanguageDemo
//
//  Created by Bob on 2022/12/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSHttpManager : NSObject

/// GET请求
/// @param urlStr 请求地址
/// @param params 参数
/// @param successBlock 成功回调
/// @param failureBlock 失败回调
- (void)doGetRequestWithUrlStr:(NSString *)urlStr
                        params:(NSDictionary *)params
                       success:(void (^)(NSDictionary *responseObject))successBlock
                       failure:(void (^)(NSError *error))failureBlock;

/// POST请求
/// @param urlStr 请求地址
/// @param params 参数
/// @param successBlock 成功回调
/// @param failureBlock 失败回调
- (void)doPostRequestWithUrlStr:(NSString *)urlStr
                         params:(NSDictionary *)params
                        success:(void (^)(NSDictionary *responseObject))successBlock
                        failure:(void (^)(NSError *error))failureBlock;
@end

NS_ASSUME_NONNULL_END
