//
//  YSMACalculator.m
//  LanguageDemo
//
//  Created by Bob on 2023/6/29.
//

#import "YSMACalculator.h"

@implementation YSMACalculator

+ (NSMutableArray *)getMA:(YSMACDConfig *)config klineData:(NSArray <YSKLineDataModel *> *)dataList{

    NSMutableArray *resultArr = [NSMutableArray new];
    for (NSInteger idx = 0; idx < config.maPeriodArr.count; idx++){
        [resultArr addObject:@[]];
    }
    
    for (NSUInteger i = dataList.count; i >= 0; i--) {
        
        for (NSInteger idx = 0; idx < config.maPeriodArr.count; idx++){
            
            NSInteger period = [config.maPeriodArr[idx] intValue];
            if(period < i){
                NSArray *arr = [dataList subarrayWithRange:NSMakeRange(i - period, period)];
                [resultArr addObject:[arr valueForKeyPath:@"@avg.close"]];
            }
        }
    }
    
    return resultArr;
}
@end
