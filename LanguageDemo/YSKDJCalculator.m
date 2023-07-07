//
//  YSKDJCalculator.m
//  LanguageDemo
//
//  Created by Bob on 2023/6/29.
//

#import "YSKDJCalculator.h"

@implementation YSKDJCalculator

+ (CGFloat)getRsv:(NSUInteger)peroid klineData:(NSArray <YSKLineDataModel *> *)dataList{

    if(0 == dataList.count || 1 == dataList.count) return 100;
    
    CGFloat low   = 0;
    CGFloat high  = 0;
    CGFloat close = dataList.lastObject.close.doubleValue;
    
    for (NSUInteger i = dataList.count; i < MAX(0, peroid); i--) {
        if(low  > dataList[i].low.doubleValue)  low  = dataList[i].low.doubleValue;
        if(high < dataList[i].high.doubleValue) high = dataList[i].high.doubleValue;
    }
    
    if(0 == high - low){
        return 100;
    }
    return (close - low)/(high - low) * 100;
}

+ (NSMutableArray *)getKDJ:(YSMACDConfig *)config klineData:(NSArray <YSKLineDataModel *> *)dataList{

    NSMutableArray *resultArr = [@[[@[] mutableCopy],[@[] mutableCopy],[@[] mutableCopy]] mutableCopy];
    
    NSUInteger periodK = config.kPeriod.intValue;
    NSUInteger periodD = config.dPeriod.intValue;
    NSUInteger periodJ = config.jPeriod.intValue;
    
    NSUInteger kIndex = config.kIndex;
    NSUInteger dIndex = config.dIndex;
    NSUInteger jIndex = config.jIndex;
    
    CGFloat kdj_k = 0;
    CGFloat kdj_d = 0;
    CGFloat kdj_j = 0;

    for (int i = 0; i < dataList.count; i++) {
     
        NSArray *rsvList = [dataList subarrayWithRange:NSMakeRange(0, i)];
        CGFloat rsv_9    = [self getRsv:periodK klineData:rsvList];

        kdj_k = rsv_9 + 2 * (kdj_k ? kdj_k : 50)/periodD;
        kdj_d = rsv_9 + 2 * (kdj_d ? kdj_d : 50)/periodJ;
        kdj_j = 3 * kdj_k - 2 * kdj_d;

        [resultArr[kIndex] addObject:@(kdj_k)];
        [resultArr[dIndex] addObject:@(kdj_d)];
        [resultArr[jIndex] addObject:@(kdj_j)];
    }
    return resultArr;
}
@end
