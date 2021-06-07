//
//  GTTKYCModel.m
//  LanguageDemo
//
//  Created by Bob on 2021/5/27.

#import "GTTKYCModel.h"
#import  <AFNetworking/AFNetworking.h>
#import <IdensicMobileSDK/IdensicMobileSDK.h>

#import "NSString+AES256.h"
#import "NSString+SHA256.h"

#ifdef SERVERPRD
NSString *baseUrl = @"https://api.sumsub.com";
#else
NSString *baseUrl = @"https://test-api.sumsub.com";
#endif
 
#define AESCodeKey @"GTS2GWAPP1234578"

typedef void(^VerifyBlock)(BOOL isApproved);

VerifyBlock verifyBlock = nil;

@interface GTTKYCModel ()

@end

@implementation GTTKYCModel

#pragma mark 启动第三方kycSDK前 用户数据初始化验证

static bool isKyc = NO;
+ (void)startKYCWithUserId:(nonnull NSString *)_userId
                  appToken:(nonnull NSString *)_appToken
                 secretKey:(nonnull NSString *)_secretKey
                  flowName:(nonnull NSString *)_flowName
              supportEmail:(nonnull NSString *)_supportEmail
                   mainNav:(nonnull UINavigationController *)nav
         verificationBlock:(nullable void (^)(BOOL isApproved))_verify{
    
    verifyBlock = _verify;
    NSLog(@"调用方法...");
    if (isKyc) return;
    isKyc = YES;
    
    
#if DEBUG
//   userId = @"demo-user-yts8nuxc";
    _userId = _userId.length ? _userId : @"demo-user-j3m353av";
#endif
 
#if DEBUG
    _flowName  = _flowName.length  ? _flowName  :  @"msdk-basic-kyc";
    _secretKey = _secretKey.length ? _secretKey :  @"dD2FMhsGWA7KwcWUdWh7VP6B7PjgYaYk";
    _appToken  = _appToken.length  ? _appToken  :  @"tst:b0oYQRScZxrg2FNALQT2MzYY.vglqjKlEYCWPpqrOmrTOVbiqzj3TE7ni";
#else
    _appToken  = [_appToken aes256_decrypt:AESCodeKey];
    _secretKey = [_secretKey aes256_decrypt:AESCodeKey];
#endif
    
    NSString *_accessToken = [GTTKYCModel getKycAccessTokenWithUserId:_userId];

    if (_accessToken && 0 != _accessToken.length) {
        
        [GTTKYCModel launchKycWithUserId:_userId
                                appToken:_appToken
                               secretKey:_secretKey
                             accessToken:_accessToken
                                flowName:_flowName
                            supportEmail:_supportEmail
                                 mainNav:nav];
    }else{
        
        [GTTKYCModel postTokenWithUserId:_userId
                                appToken:_appToken
                               secretKey:_secretKey
                            successBlock:^(NSString *accessToken) {
            
            [GTTKYCModel launchKycWithUserId:_userId
                                    appToken:_appToken
                                   secretKey:_secretKey
                                 accessToken:accessToken
                                    flowName:_flowName
                                supportEmail:_supportEmail
                                     mainNav:nav];
        } failureBlock:nil];
    }
}

#pragma mark 启动kycsdk
/// 通过userId appToken accessToken调用SDK
/// @param userId sdk平台注册的userId
/// @param appToken 接口认证token
/// @param secretKey secretKey
/// @param accessToken 平台认证
/// @param flowName 平台认证
/// @param supportEmail 平台认证
/// @param nav 当前导航控制器
+ (void)launchKycWithUserId:(NSString *)userId
                   appToken:(NSString *)appToken
                  secretKey:(NSString *)secretKey
                accessToken:(NSString *)accessToken
                   flowName:(NSString *)flowName
               supportEmail:(NSString *)supportEmail
                    mainNav:(UINavigationController *)nav{

    /*
     zh       Chinese Simplified
     zh-tw    Chinese Traditional
     en       English
     vi       Vietnamese
     ja       Japanese
     ko       Korean
    */
    
    SNSMobileSDK *_sdk = [SNSMobileSDK setupWithBaseUrl:baseUrl
                                               flowName:flowName
                                            accessToken:accessToken
                                                 locale:@""
                                           supportEmail:supportEmail];

    BOOL sdkReady = [_sdk isReady];
    NSLog(@"sdk init success = (%@)...", @(sdkReady));

    if (!sdkReady) return;
    
    // token过期
    [_sdk tokenExpirationHandler:^(void (^ _Nonnull onComplete)(NSString * _Nullable)) {
        [GTTKYCModel postTokenWithUserId:userId appToken:appToken secretKey:secretKey
                            successBlock:^(NSString *accessToken) {
            if (accessToken.length) onComplete(accessToken);
        } failureBlock:nil];
    }];

    // 审核最终结果(webHook)
    // 审核结果回调 是否需要调用接口
    [_sdk verificationHandler:^(BOOL isApproved) {
        NSLog(@"verification status is:(%@)", @(isApproved));
        if (verifyBlock) verifyBlock(isApproved);
    }];

    
//    // 审核过程状态(webHook) sdk初始化成功之后，会主动下发一次
//    [_sdk onStatusDidChange:^(SNSMobileSDK * _Nonnull sdk, SNSMobileSDKStatus prevStatus) {
//        NSLog(@"approved status is:(%@)", @(prevStatus));
//    }];
//
//
//    // 操作反馈
//    [_sdk actionResultHandler:^(SNSMobileSDK * _Nonnull sdk, SNSActionResult * _Nonnull result, void (^ _Nonnull onComplete)(SNSActionResultHandlerReaction)) {
//        ;
//    }];
//
//    // 操作事件
//    [_sdk onEvent:^(SNSMobileSDK * _Nonnull sdk, SNSEvent * _Nonnull event) {
//
//        NSLog(@"event information is:(%@)", @(sdk.status));
//    }];
    
    // 页面消失
    [_sdk dismissHandler:^(SNSMobileSDK * _Nonnull sdk, UINavigationController * _Nonnull mainVC) {
        
        isKyc = NO;
        [_sdk.mainVC dismissViewControllerAnimated:YES completion:nil];
    }];
    
    [nav presentViewController:_sdk.mainVC animated:YES completion:nil];
}

 
#pragma mark https请求
/// 调用第三方接口 刷新accessToken
/// @param userId 当前用户
/// @param appToken appToken
/// @param secretKey secretKey
/// @param success 成功回调
/// @param failure 失败回调
+ (void)postTokenWithUserId:(NSString *)userId
                   appToken:(NSString *)appToken
                  secretKey:(NSString *)secretKey
               successBlock:(nullable void (^)(NSString *accessToken))success
               failureBlock:(nullable void (^)(NSError *error))failure{
    
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];

    NSTimeInterval ts = [[NSDate date] timeIntervalSince1970];
    NSString *tsStr = [NSString stringWithFormat:@"%0.f", ts];
    
    NSString *_path = [NSString stringWithFormat:@"/resources/accessTokens?userId=%@&ttlInSecs=600", userId];
    NSString *content = [NSString stringWithFormat:@"%@POST%@", tsStr, _path];
    NSString *sigParams = [NSString hmacSHA256WithSecret:secretKey content:content];

    NSDictionary *headers = @{
        @"X-App-Access-Ts":  tsStr,
        @"X-App-Access-Sig": sigParams,
        @"X-App-Token":      appToken
    };
    
    NSString *path = [NSString stringWithFormat:@"%@%@", baseUrl, _path];
    path = [path stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]];
    
    [manager POST:path parameters:nil headers:headers progress:nil
          success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        
            NSLog(@"postToken responseWithObject...:%@", responseObject);
            if ([responseObject isKindOfClass:[NSDictionary class]] &&
                [responseObject objectForKey:@"token"]) {
                
                NSString *accessToken = [responseObject objectForKey:@"token"];
                [GTTKYCModel saveKycAccessToken:accessToken withUserId:userId];
                
                success(accessToken);
            }else{
                NSError *err = [NSError errorWithDomain:@"" code:-1 userInfo:@{@"msg": @"数据错误"}];
                failure(err);
            }
        
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSLog(@"errorInformation...:%@", error.userInfo);
        failure(error);
    }];
}


#pragma mark 缓存用于kyc使用的accesssToken
/// 用户accesssToken
/// @param userId 当前用户ID
+ (NSString *)getKycAccessTokenWithUserId:(NSString *)userId{
    NSString *kycToken = [[NSUserDefaults standardUserDefaults] valueForKey:[NSString stringWithFormat:@"kycToken-%@", userId]];
    return kycToken ? kycToken : @"";
}

+ (void)saveKycAccessToken:(NSString *)kycToken withUserId:(NSString *)userId{
    [[NSUserDefaults standardUserDefaults] setValue:kycToken forKey:[NSString stringWithFormat:@"kycToken-%@", userId]];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

@end
 
