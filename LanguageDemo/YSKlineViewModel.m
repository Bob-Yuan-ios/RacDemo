//
//  YSKlineViewModel.m
//  LanguageDemo
//
//  Created by Bob on 2023/6/30.
//

#import "YSKlineViewModel.h"
#import "YSHttpsRequest.h"
#import "YSMACDCalculator.h"
#import "NSObject+MJKeyValue.h"


@interface YSKlineViewModel ()

@property (nonatomic, strong) RACSignal *lineDataSignal;

@end

@implementation YSKlineViewModel

- (RACSignal *)lineDataSignal{
    if(!_lineDataSignal){
        
        YSWeakSelf(self);
        _lineDataSignal = [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
            YSStronSelf(self);

            NSString *urlStr = [NSString stringWithFormat:@"http://money.finance.sina.com.cn/quotes_service/api/json_v2.php/CN_MarketData.getKLineData?symbol=sz002096&scale=60&ma=no&datalen=%lu", self.count];
            NSLog(@"urlStr is..(%@)", urlStr);
            
            [[YSHttpsRequest alloc] doGetRequestWithUrlStr:urlStr params:@{} headers:@{}
                                                   success:^(NSDictionary * _Nonnull responseObject) {

                NSArray *klineValue = [YSKLineDataModel mj_objectArrayWithKeyValuesArray:responseObject];
                [subscriber sendNext:RACTuplePack(klineValue)];
                [subscriber sendCompleted];

            } failure:^(NSError * _Nonnull error) {

                NSLog(@"error information is:%@", error.userInfo);
                [subscriber sendError:error];
            }];

            return nil;
        }];
    }
    return _lineDataSignal;
}

- (RACCommand *)lineDataCommond{
    if(!_lineDataCommond){
        
        YSWeakSelf(self);
        _lineDataCommond = [[RACCommand alloc] initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {
            YSStronSelf(self);
            return self.lineDataSignal;
        }];
    }
    return _lineDataCommond;
}



@end
