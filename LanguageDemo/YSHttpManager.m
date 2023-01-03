//
//  YSHttpManager.m
//  LanguageDemo
//
//  Created by Bob on 2022/12/30.
//

#import "YSHttpManager.h"
#import "YSHttpsRequest.h"

@interface YSHttpManager ()

@property (nonatomic, strong) YSHttpsRequest *httpRequest;

@end

@implementation YSHttpManager

// 组装https请求头
- (NSDictionary *)compactHeader{
    return  @{};
}

- (void)doGetRequestWithUrlStr:(NSString *)urlStr
                        params:(NSDictionary *)params
                       success:(void (^)(NSDictionary *responseObject))successBlock
                       failure:(void (^)(NSError *error))failureBlock{
    
    [self.httpRequest doGetRequestWithUrlStr:urlStr params:params headers:[self compactHeader]
                                     success:^(NSDictionary * _Nonnull responseObject) {
    
    } failure:^(NSError * _Nonnull error) {
        
    }];
}

- (void)doPostRequestWithUrlStr:(NSString *)urlStr
                         params:(NSDictionary *)params
                        success:(void (^)(NSDictionary *responseObject))successBlock
                        failure:(void (^)(NSError *error))failureBlock{
    
    [self.httpRequest doPostRequestWithUrlStr:urlStr params:params headers:[self compactHeader]
                                      success:^(NSDictionary * _Nonnull responseObject) {
        
    } failure:^(NSError * _Nonnull error) {
        
    }];
}


// 数据拦截层


@end
