//
//  GTTKYC.m
//  LanguageDemo
//
//  Created by Bob on 2021/5/27.
//  使用过程中 需要在sdk平台注册账号 获取FlowName userId bearerToken accessToken
//  accessToken 存在过期的可能 需要实现过期回调
//  bearerToken 接口认证

#import "GTTKYC.h"
#import  <AFNetworking/AFNetworking.h>
#import <IdensicMobileSDK/IdensicMobileSDK.h>

#import "NSString+SHA256.h"

@interface GTTKYC ()

@end

@implementation GTTKYC

#pragma mark SDK初始化和SDK启动

static bool isKyc = NO;
+ (void)startKYCWithMainNav:(UINavigationController *)nav customId:(NSString *)customId{
    
    if (isKyc) return;
    isKyc = YES;
    
    //先调用接口 获取 userId bearerToken accessToken
#if DEBUG
    NSString *userId = @"demo-user-yts8nuxc";
#else
    NSString *userId = [GTTKYC getKycUserId];
#endif
    
    if (userId && 0 != userId.length) {
        // 已经创建过账号
#if DEBUG
        NSString *bearerToken = @"qacHG3E2+QzxuBB5/KaSCLaYl1bZkND7NfSkx7EuoGS3lRaJu5rWJQ==";
#else
        NSString *bearerToken = [GTTKYC getKycBearTokenWithUserId:userId];
#endif
        
        if (bearerToken && 0 != bearerToken.length) {
            [GTTKYC loggedKycSDKWithUserId:userId bearerToken:bearerToken accessToken:@"" mainNav:nav];
        }else{
            // 没有bearerToken 先通过接口获取 然后验证bearerToken 成功则继续后面的流程 失败的提示错误
            isKyc = NO;
        }
        
    }else{
        // 没有创建账号 先通过接口创建账号 然后验证bearerToken 成功则继续后面的流程 失败的提示错误
        isKyc = NO;
    }
}


/// 通过userId bearerToken accessToken 启动SDK
/// @param userId sdk平台注册的userId
/// @param bearerToken 接口认证
/// @param accessToken 平台认证
/// @param nav 当前导航控制器
+ (void)loggedKycSDKWithUserId:(NSString *)userId
                   bearerToken:(NSString *)bearerToken
                   accessToken:(NSString *)accessToken
                       mainNav:(UINavigationController *)nav{
    
    [GTTKYC getLoggedInWithBearerToken:bearerToken successBlock:^(id  _Nullable responseObject) {
        
        NSString *_accessToken = accessToken;
        _accessToken = _accessToken.length ? _accessToken : [GTTKYC getKycAccessTokenWithUserId:userId];
        if (_accessToken && 0 != _accessToken.length) {
            
            [GTTKYC launchKycWithUserId:userId bearerToken:bearerToken accessToken:accessToken mainNav:nav];
        }else{
            
            //没有缓存accessToken，调用接口 刷新accessToken
            [GTTKYC refreshTokenWithUserId:userId bearerToken:bearerToken mainNav:nav];
        }
        
    } failureBlock:^(NSError *error) {
        
        NSLog(@"### 需要调用管理后台接口， 获取最新的bearerToken ###");
        isKyc = NO;
    }];
}


/// 启动SDK
/// @param userId sdk平台注册的userId
/// @param bearerToken 接口认证token
/// @param accessToken 平台认证
/// @param nav 当前导航控制器
+ (void)launchKycWithUserId:(NSString *)userId
                bearerToken:(NSString *)bearerToken
                accessToken:(NSString *)accessToken
                    mainNav:(UINavigationController *)nav{

    //SKBRPqmfWlIVHggS57W91Wdp
    //flowName 应该也是通过配置获取
    //userId accessToken 后台创建
    //@"support@your-company.com", supportEmail用于页面显示
    SNSMobileSDK *_sdk = [SNSMobileSDK setupWithBaseUrl:@"https://test-api.sumsub.com"
                                               flowName:@"msdk-basic-kyc"
                                            accessToken:accessToken
                                                 locale:@""
                                           supportEmail:@""];

    BOOL sdkReady = [_sdk isReady];
    NSLog(@"sdk init success = (%@)...", @(sdkReady));

    if (!sdkReady) return;
    NSLog(@"start kyc information...");
    
    // token过期
    [_sdk tokenExpirationHandler:^(void (^ _Nonnull onComplete)(NSString * _Nullable)) {
        NSLog(@"token 过期...");
        [GTTKYC postTokenWithUserId:userId bearerToken:bearerToken successBlock:^(id  _Nullable responseObject) {
            
            NSDictionary *dicInfo = (NSDictionary *)responseObject;
            NSString *accessToken = [dicInfo objectForKey:@"token"];
            if (!accessToken) accessToken = @"";
            [GTTKYC saveKycToken:accessToken withUserId:userId];
            
            onComplete(accessToken);
        } failureBlock:^(NSError *error) {
            ;
        }];
        
    }];

    // 审核过程状态(webHook) sdk初始化成功之后，会主动下发一次
    [_sdk onStatusDidChange:^(SNSMobileSDK * _Nonnull sdk, SNSMobileSDKStatus prevStatus) {
        NSLog(@"approved status is:(%@)", @(prevStatus));
    }];

    // 审核最终结果(webHook):  审核结果回调 是否需要调用接口
    [_sdk verificationHandler:^(BOOL isApproved) {
       NSLog(@"verification status is:(%@)", @(isApproved));
    }];

    // 操作反馈
    [_sdk actionResultHandler:^(SNSMobileSDK * _Nonnull sdk, SNSActionResult * _Nonnull result, void (^ _Nonnull onComplete)(SNSActionResultHandlerReaction)) {
        ;
    }];
    
    [_sdk onEvent:^(SNSMobileSDK * _Nonnull sdk, SNSEvent * _Nonnull event) {
        NSLog(@"event information is:(%@)", @(sdk.status));
    }];
    
    [_sdk dismissHandler:^(SNSMobileSDK * _Nonnull sdk, UINavigationController * _Nonnull mainVC) {
        isKyc = NO;
        [_sdk.mainVC dismissViewControllerAnimated:YES completion:nil];
    }];
    
    [nav presentViewController:_sdk.mainVC animated:YES completion:nil];
}



/// accessToken为空时 先调用sdk平台接口刷新accessToken 之后启动SDK
/// @param userId sdk平台注册的userId
/// @param bearerToken 接口认证token
/// @param nav 当前导航控制器
+ (void)refreshTokenWithUserId:(NSString *)userId
                   bearerToken:(NSString *)bearerToken
                       mainNav:(UINavigationController *)nav{

    [GTTKYC postTokenWithUserId:userId bearerToken:bearerToken successBlock:^(id  _Nullable responseObject) {
        
        if ([responseObject isKindOfClass:[NSDictionary class]]) {
            NSDictionary *dicInfo = (NSDictionary *)responseObject;
            NSString *accessToken = [dicInfo objectForKey:@"token"];
            if (!accessToken) accessToken = @"";
            [GTTKYC saveKycToken:accessToken withUserId:userId];
            
            [GTTKYC launchKycWithUserId:userId bearerToken:bearerToken accessToken:accessToken mainNav:nav];
        }else{
            isKyc = NO;
        }
        
    } failureBlock:^(NSError *error) {
        
        isKyc = NO;
    }];
}


#pragma mark https请求
#pragma mark 看是否需要客户端实现管理userId applicantId accessToken bearToken

/// 验证当前的bearerToken是否已授权
/// @param localeBearToken bearerToken
/// @param success 已经授权对应的回调（{@"loggedIn"： @“1”}）
/// @param failure 失败回调
+ (void)getLoggedInWithBearerToken:(NSString *)localeBearToken
                      successBlock:(nullable void (^)(id _Nullable responseObject))success
                      failureBlock:(nullable void (^)(NSError *error))failure{
    
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
    NSString *comBearerToken = [NSString stringWithFormat:@"Bearer %@", localeBearToken];
    NSDictionary *headers = @{@"Authorization": comBearerToken};

    NSString *path = @"https://test-api.sumsub.com/resources/auth/-/isLoggedIn";
    [manager GET:path parameters:nil headers:headers progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        NSLog(@"getLoggedIn responseWithObject...:%@", responseObject);
        if ([responseObject isKindOfClass:[NSDictionary class]] &&
            [responseObject valueForKey:@"loggedIn"] &&
            1 == [[responseObject valueForKey:@"loggedIn"] intValue]) {
            success(responseObject);
        }else{
            NSError *err = [NSError errorWithDomain:@"" code:-1 userInfo:@{@"msg": @"没有授权或者数据异常"}];
            failure(err);
        }
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        failure(error);
    }];
}

+ (void)postTokenWithUserId:(NSString *)userId bearerToken:(NSString *)localeBearToken
               successBlock:(nullable void (^)(id _Nullable responseObject))success
               failureBlock:(nullable void (^)(NSError *error))failure{
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];

//    NSString *comBearerToken = [NSString stringWithFormat:@"Bearer %@", localeBearToken];
//    NSDictionary *headers = @{@"Authorization": comBearerToken};
    
    //(ts + httpMethod.name() + path)
    NSTimeInterval ts = [[NSDate date] timeIntervalSince1970];
    NSString *tsStr = [NSString stringWithFormat:@"%0.f", ts];
    
    NSString *content = [NSString stringWithFormat:@"%@POST/resources/accessTokens?userId=%@&ttlInSecs=600", tsStr, userId];
    
    NSString *appToken = [NSString hmacSHA256WithSecret:@"dD2FMhsGWA7KwcWUdWh7VP6B7PjgYaYk" content:content];
    
//    NSDictionary *headers = @{@"Authorization": comBearerToken};
    NSDictionary *headers = @{
        @"X-App-Token":      localeBearToken,
        @"X-App-Access-Sig": appToken,
        @"X-App-Access-Ts":  tsStr
    };
    
    NSString *path = [NSString stringWithFormat:@"https://test-api.sumsub.com/resources/accessTokens?userId=%@&ttlInSecs=600", userId];
    path = [path stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]];
    
    [manager POST:path parameters:nil headers:headers progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        NSLog(@"postToken responseWithObject...:%@", responseObject);
        if ([responseObject isKindOfClass:[NSDictionary class]] && [responseObject objectForKey:@"token"]) {
            success(responseObject);
        }else{
            NSError *err = [NSError errorWithDomain:@"" code:-1 userInfo:@{@"msg": @"数据错误"}];
            failure(err);
        }
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSLog(@"errorInformation...:%@", error.userInfo);
        failure(error);
    }];
}


#pragma mark 缓存用于kyc使用的userID和accesssToken
#warning -123 为 -统一账号ID
+ (NSString *)getKycUserId{
    NSString *kycUserId = [[NSUserDefaults standardUserDefaults] valueForKey:@"kycUserId-123"];
    return kycUserId ? kycUserId : @"";
}

+ (void)saveKycUserId:(NSString *)userId{
    [[NSUserDefaults standardUserDefaults] setValue:userId forKey:@"kycUserId-123"];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

+ (NSString *)getKycAccessTokenWithUserId:(NSString *)userId{
    NSString *kycToken = [[NSUserDefaults standardUserDefaults] valueForKey:[NSString stringWithFormat:@"kycToken-%@", userId]];
    return kycToken ? kycToken : @"";
}

+ (void)saveKycToken:(NSString *)kycToken withUserId:(NSString *)userId{
    [[NSUserDefaults standardUserDefaults] setValue:kycToken forKey:[NSString stringWithFormat:@"kycToken-%@", userId]];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

/// 接口认证Token
/// @param userId  当前用户ID
+ (NSString *)getKycBearTokenWithUserId:(NSString *)userId{
    NSString *bearToken = [[NSUserDefaults standardUserDefaults] valueForKey:[NSString stringWithFormat:@"kycBearToken-%@", userId]];
    return bearToken ? bearToken : @"";
}

+ (void)saveKycBearToken:(NSString *)bearToken withUserId:(NSString *)userId{
    [[NSUserDefaults standardUserDefaults] setValue:bearToken forKey:[NSString stringWithFormat:@"kycBearToken-%@", userId]];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

@end
 
