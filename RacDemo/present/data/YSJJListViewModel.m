//
//  YSJJListViewModel.m
//  RacDemo
//
//  Created by Bob on 2023/8/21.
//

#import "YSJJListViewModel.h"

NSString *baseApi = @"https://data.10jqka.com.cn/dataapi";

@interface YSJJListViewModel ()

@property (nonatomic, strong) AFHTTPSessionManager *sessionManager;

@end

@implementation YSJJListViewModel

- (instancetype)init{
    self = [super init];
    if(self){
        
    }
    return self;
}



- (NSString *)convertStringToHex:(NSString *)str{
    if (!str || [str length] == 0) {
        return @"";
    }
    NSData *data = [str dataUsingEncoding:NSUTF8StringEncoding];

    NSMutableString *string = [[NSMutableString alloc] initWithCapacity:[data length]];

    [data enumerateByteRangesUsingBlock:^(const void *bytes, NSRange byteRange, BOOL *stop) {
        unsigned char *dataBytes = (unsigned char*)bytes;
        for (NSInteger i = 0; i < byteRange.length; i++) {
            NSString *hexStr = [NSString stringWithFormat:@"%x", (dataBytes[i]) & 0xff];
            if ([hexStr length] == 2) {
                [string appendString:hexStr];
            } else {
                [string appendFormat:@"0%@", hexStr];
            }
        }
    }];

    return string;
}


- (NSString *)getDateStr{

    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    NSString  *dateStr = [[formatter stringFromDate:[NSDate new]]
                          stringByReplacingOccurrencesOfString:@"-" withString:@""];
    return dateStr;
}

- (long)getTimeStamp{
    long timeStamp = [[NSDate new] timeIntervalSince1970] * 1000;
    return timeStamp;
}

- (RACCommand *)blockTopCommand{
    if(!_blockTopCommand){
        _blockTopCommand = [[RACCommand alloc] initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {
            return [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
                                
                NSString *dateStr = [self getDateStr];
                long timeStamp = [self getTimeStamp];
                
                NSString *urlStr = [NSString stringWithFormat:@"%@/limit_up/block_top",baseApi];
                NSDictionary *params = @{@"filter":@"HS,GEM2STAR",
                                         @"date":dateStr,
                                         @"order_field":@"330324",
                                         @"order_type":@(0),
                                         @"_":@(timeStamp)};
                         
                [self.sessionManager GET:urlStr parameters:params headers:nil progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
                    
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
                
                NSString *dateStr = [self getDateStr];
                long timeStamp = [self getTimeStamp];
                
                NSString *urlStr = [NSString stringWithFormat:@"%@/limit_up/limit_up_pool",baseApi];
                NSDictionary *params = @{@"page":@(1),
                                         @"limit":@(70),
                                         @"field":@"199112,10,9001,9002,330329,133971,3475914,330325,9004",
                                         @"filter":@"HS,GEM2STAR",
                                         @"date":dateStr,
                                         @"order_field":@"330324",
                                         @"order_type":@(0),
                                         @"_":@(timeStamp)};
                            
                [self.sessionManager GET:urlStr parameters:params headers:nil progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
                    
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
