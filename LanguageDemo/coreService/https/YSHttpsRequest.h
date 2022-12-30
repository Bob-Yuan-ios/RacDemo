//
//  YSHttpsRequest.h
//  LanguageDemo
//
//  Created by Bob on 2022/12/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSHttpsRequest : NSObject


/// GET请求
/// @param urlStr 请求地址
/// @param params 参数
/// @param headers 请求头
/// @param successBlock 成功回调
/// @param failureBlock 失败回调
- (void)doGetRequestWithUrlStr:(NSString *)urlStr
                        params:(NSDictionary *)params
                       headers:(NSDictionary *)headers
                       success:(void (^)(NSDictionary *responseObject))successBlock
                       failure:(void (^)(NSError *error))failureBlock;


/// POST请求
/// @param urlStr 请求地址
/// @param params 参数
/// @param headers 请求头
/// @param successBlock 成功回调
/// @param failureBlock 失败回调
- (void)doPostRequestWithUrlStr:(NSString *)urlStr
                         params:(NSDictionary *)params
                        headers:(NSDictionary *)headers
                        success:(void (^)(NSDictionary *responseObject))successBlock
                        failure:(void (^)(NSError *error))failureBlock;


/// 上传文件
/// @param urlStr 上传地址
/// @param path 文件路径
- (void)uploadFile:(NSString *)urlStr filePath:(NSString *)path;


/// 下载文件
/// @param urlStr 下载地址
- (void)downloadFile:(NSString *)urlStr;

@end

NS_ASSUME_NONNULL_END
