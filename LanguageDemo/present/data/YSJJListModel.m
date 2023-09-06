//
//  YSJJListModel.m
//  LanguageDemo
//
//  Created by Bob on 2023/8/21.
//

#import "YSJJListModel.h"
#import <AFNetworking/AFNetworking.h>

@interface YSJJListModel ()

@property (nonatomic, strong) RACSignal *jjSignal;
@property (nonatomic, strong) AFHTTPSessionManager *sessionManager;

@end

@implementation YSJJListModel

- (instancetype)init{
    self = [super init];
    if(self){
        
    }
    return self;
}

- (RACSignal *)jjSignal{
    if(!_jjSignal){
        _jjSignal = [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
            
            NSString *urlStr = @"https://data.10jqka.com.cn/dataapi/limit_up/limit_up_pool";
            NSDictionary *params = @{@"page":@(1),
                                     @"limit":@(35),
                                     @"field":@"199112,10,9001,9002,330329,133971,3475914,330325,9004",
                                     @"filter":@"HS,GEM2STAR",
                                     @"date":@"20230828",
                                     @"order_field":@"330324",
                                     @"order_type":@(0),
                                     @"_":@(1693233728381)};
            NSDictionary *header = @{@"Cookie": @"v=A5q-qQPrqnlqzibVemWdOCz17Uq5yx6lkE-SSaQTRi34FzX1jFtutWDf4lB3; hxmPid=free_ztjj; escapename=mt_678051780; ticket=5dfd0f7bdb75e7878d776d4a4a2e1a9c; u_name=mt_678051780; user=MDptdF82NzgwNTE3ODA6Ok5vbmU6NTAwOjY4ODA1MTc4MDo3LDExMTExMTExMTExLDQwOzQ0LDExLDQwOzYsMSw0MDs1LDEsNDA7MSwxMDEsNDA7MiwxLDQwOzMsMSw0MDs1LDEsNDA7OCwwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMSw0MDsxMDIsMSw0MDo6Ojo2NzgwNTE3ODA6MTY5MzIzMjQ1OTo6OjE2ODQ0NzIyODA6MjY3ODQwMDowOjE4YmMxOTUwZDFhODNjMDU4OGRkOWUxZjMzNmFmZDVkNTo6MA%3D%3D; user_status=0; userid=678051780"};
            
//
            
            [self.sessionManager GET:urlStr parameters:params headers:header progress:^(NSProgress * _Nonnull downloadProgress) {
                ;
            } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
                
                if([responseObject isKindOfClass:[NSDictionary class]]){
                    NSDictionary *resDic = (NSDictionary *)responseObject;
                    if([resDic.allKeys containsObject:@"data"]){
                        NSDictionary *dataDic = (NSDictionary *)[resDic objectForKey:@"data"];
                        NSArray *infoArr = [dataDic objectForKey:@"info"];
                        if(infoArr && [infoArr isKindOfClass:[NSArray class]]){
                            NSArray<YSJJModel *> *infoList = [YSJJModel mj_objectArrayWithKeyValuesArray:infoArr];
                            [subscriber sendNext:infoList];
                            [subscriber sendCompleted];
                            return;
                        }
                    }
                }
                
                [subscriber sendError:nil];
            } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
                
                NSLog(@"#######error...(%@)", error.userInfo);
                [subscriber sendError:error];
                return;
            }];
            
            return nil;
        }];
    }
    return _jjSignal;
}

- (RACCommand *)jjCommand{
    if(!_jjCommand){
        _jjCommand = [[RACCommand alloc] initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {
            return self.jjSignal;
        }];
    }
    return _jjCommand;
}

- (AFHTTPSessionManager *)sessionManager{
    if (!_sessionManager) {
        _sessionManager = [AFHTTPSessionManager manager];
        
        [_sessionManager.requestSerializer willChangeValueForKey:@"timeoutInterval"];
        _sessionManager.requestSerializer.timeoutInterval = 30.f;
        [_sessionManager.requestSerializer didChangeValueForKey:@"timeoutInterval"];

        NSSet *types = [[NSSet alloc] initWithObjects:@"application/xml", @"application/json", @"text/plain", @"text/xml", @"text/html", nil];
        _sessionManager.responseSerializer.acceptableContentTypes = types;
    }
    return _sessionManager;
}
@end
