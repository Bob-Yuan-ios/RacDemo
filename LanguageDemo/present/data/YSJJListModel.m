//
//  YSJJListModel.m
//  LanguageDemo
//
//  Created by Bob on 2023/8/21.
//

#import "YSJJListModel.h"
#import <AFNetworking/AFNetworking.h>

@interface YSJJListModel ()

@property (nonatomic, strong) AFHTTPSessionManager *sessionManager;

@end

@implementation YSJJListModel

- (instancetype)init{
    self = [super init];
    if(self){
        
    }
    return self;
}

- (RACCommand *)blockTopCommand{
    if(!_blockTopCommand){
        _blockTopCommand = [[RACCommand alloc] initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {
            return [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
                
//            https://data.10jqka.com.cn/dataapi/limit_up/block_top?filter=HS,GEM2STAR&date=20231121
                
                NSString *urlStr = @"https://data.10jqka.com.cn/dataapi/limit_up/block_top";
                NSDictionary *params = @{@"filter":@"HS,GEM2STAR",
                                         @"date":@"20231121",
                                         @"order_field":@"330324",
                                         @"order_type":@(0),
                                         @"_":@(1699044639733)};
                NSDictionary *header = @{@"Cookie": @"userid=225906646; u_name=mx_225906646; escapename=mx_225906646; user_status=0; user=MDpteF8yMjU5MDY2NDY6Ok5vbmU6NTAwOjIzNTkwNjY0Njo3LDExMTExMTExMTExLDQwOzQ0LDExLDQwOzYsMSw0MDs1LDEsNDA7MSwxMDEsNDA7MiwxLDQwOzMsMSw0MDs1LDEsNDA7OCwwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMSw0MDsxMDIsMSw0MDoyNDo6OjIyNTkwNjY0NjoxNzAwMDEwNTY3Ojo6MTQyNzU4OTg0MDo2MDQ4MDA6MDoxM2YxZDg5MmRjOThiMzUxM2Q0M2MyMGE3Zjc5YmUyNzQ6OjA%3D; ticket=092653e0baf249daa2037536e09749d9; isEdit=%7B%22type%22%3A%22limit_up_pool%22%2C%22change%22%3A%22no%22%2C%22data%22%3A%5B%229001%22%2C%22330325%22%2C%223475914%22%2C%22133971%22%2C%22330329%22%2C%22330323%22%2C%229002%22%2C%22199112%22%2C%2210%22%2C%22330324%22%2C%22133970%22%2C%221968584%22%2C%229003%22%5D%7D; hxmPid=free_ztjj; v=A9EfAqhVUL18RbypD8IFmzII4dZrPkUi77bpxLNmzdi3Hv4M-45VgH8C-YVA"};
                         
                [self.sessionManager GET:urlStr parameters:params headers:header progress:^(NSProgress * _Nonnull downloadProgress) {
                    ;
                } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
                    
                    if([responseObject isKindOfClass:[NSDictionary class]]){
                        NSDictionary *resDic = (NSDictionary *)responseObject;
                        if([resDic.allKeys containsObject:@"data"]){
                            NSArray *dataArr = [resDic objectForKey:@"data"];
                            if(dataArr && [dataArr isKindOfClass:[NSArray class]]){
                                NSArray<YSBlockTopModel *> *infoList = [YSBlockTopModel mj_objectArrayWithKeyValuesArray:dataArr];
                                [subscriber sendNext:infoList];
                                [subscriber sendCompleted];
                                return;
                            }
                        }
                    }
                    
                    [subscriber sendError:nil];
                    return;
                    
                } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
                    
                    NSLog(@"#######error...(%@)", error.userInfo);
                    [subscriber sendError:error];
                    return;
                }];
                
                return nil;
            }];
        }];
    }
    return _blockTopCommand;
}

- (RACCommand *)jjCommand{
    if(!_jjCommand){
        _jjCommand = [[RACCommand alloc] initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {
            return [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
                
                NSString *urlStr = @"https://data.10jqka.com.cn/dataapi/limit_up/limit_up_pool";
                NSDictionary *params = @{@"page":@(1),
                                         @"limit":@(70),
                                         @"field":@"199112,10,9001,9002,330329,133971,3475914,330325,9004",
                                         @"filter":@"HS,GEM2STAR",
                                         @"date":@"20231103",
                                         @"order_field":@"330324",
                                         @"order_type":@(0),
                                         @"_":@(1699044639733)};
                NSDictionary *header = @{@"Cookie": @"v=A5q-qQPrqnlqzibVemWdOCz17Uq5yx6lkE-SSaQTRi34FzX1jFtutWDf4lB3; hxmPid=free_ztjj; escapename=mt_678051780; ticket=5dfd0f7bdb75e7878d776d4a4a2e1a9c; u_name=mt_678051780; user=MDptdF82NzgwNTE3ODA6Ok5vbmU6NTAwOjY4ODA1MTc4MDo3LDExMTExMTExMTExLDQwOzQ0LDExLDQwOzYsMSw0MDs1LDEsNDA7MSwxMDEsNDA7MiwxLDQwOzMsMSw0MDs1LDEsNDA7OCwwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMSw0MDsxMDIsMSw0MDo6Ojo2NzgwNTE3ODA6MTY5MzIzMjQ1OTo6OjE2ODQ0NzIyODA6MjY3ODQwMDowOjE4YmMxOTUwZDFhODNjMDU4OGRkOWUxZjMzNmFmZDVkNTo6MA%3D%3D; user_status=0; userid=678051780"};
                            
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
