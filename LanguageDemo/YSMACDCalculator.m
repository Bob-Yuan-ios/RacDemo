//
//  YSMACDCalculator.m
//  LanguageDemo
//
//  Created by Bob on 2023/6/29.
//

#import "YSMACDCalculator.h"

@implementation YSMACDCalculator

+ (CGFloat)calEma:(CGFloat)close period:(NSUInteger)period preEma:(CGFloat)preEma{
    return  (2 * close)/(period + 1) + preEma * (period - 1)/(period + 1);
}

+ (CGFloat)calDif:(CGFloat)emaShort emaLong:(CGFloat)emaLong{
    return emaShort - emaLong;
}

+ (CGFloat)calDea:(CGFloat)dif period:(NSUInteger)period preDea:(CGFloat)preDea{
    return (double)2.f/(period + 1) * dif + (double)(period - 1)/(double)(period + 1) * preDea;
}

+ (void)getMACD:(YSMACDConfig *)config klineData:(NSArray <YSKLineDataModel *> *)dataList   startIndex:(NSInteger)startIndex result:(void(^)(NSMutableArray *resultArr, CGFloat minValue, CGFloat maxValue))a{
    
    NSMutableArray *resultArr = [@[[@[] mutableCopy], [@[] mutableCopy], [@[] mutableCopy]] mutableCopy];
    
    NSUInteger periodLong  = config.longPeriod.intValue;
    NSUInteger periodShort = config.shortPeriod.intValue;
    NSUInteger periodAvg   = config.avgPeriod.intValue;
    
    NSUInteger difIndex  = config.difIndex;
    NSUInteger deaIndex  = config.deaIndex;
    NSUInteger macdIndex = config.macdIndex;
    
    CGFloat emaLong  = 0;
    CGFloat emaShort = 0;
    
    CGFloat dif  = 0;
    CGFloat dea  = 0;
    CGFloat macd = 0;
    
    CGFloat min = 0;
    CGFloat max = 0;
    
    for(int i = 0; i < dataList.count; i++){
        
        CGFloat close = dataList[i].close.doubleValue;
        if(0 == i){
            emaLong  = close;
            emaShort = close;
        }else{
            emaLong  = [self calEma:close period:periodLong preEma:emaLong];
            emaShort = [self calEma:close period:periodShort preEma:emaShort];
            
            dif  = [self calDif:emaShort emaLong:emaLong];
            dea  = [self calDea:dif period:periodAvg preDea:dea];
            macd = 2 * (dif - dea);
        }
        
        min = MIN( dif, MIN(dea, MIN(min, macd)));
        max = MAX( dif, MAX(dea, MAX(max, macd)));
        
        [resultArr[difIndex] addObject:[NSString stringWithFormat:@"%.3lf", dif]];
        [resultArr[deaIndex] addObject:[NSString stringWithFormat:@"%.3lf", dea]];
        [resultArr[macdIndex] addObject:[NSString stringWithFormat:@"%.3lf", macd]];
    }
        
    a(resultArr, min, max);
}


+ (void)getKlineRangeData:(NSArray *)dataList
               startIndex:(NSInteger)startIndex
             elementCount:(NSInteger)elementCount
                   result:(void(^)( CGFloat minValue, CGFloat maxValue))a{
    
    if(![dataList isKindOfClass:[NSArray class]] || 3 != dataList.count){
        NSLog(@"### 子数组个数不满足要求...");
        return;
    }
    
    NSArray *difArr  = dataList[0];
    NSArray *deaArr  = dataList[1];
    NSArray *macdArr = dataList[2];
    
    if(difArr.count < (startIndex + elementCount) ||
       deaArr.count < (startIndex + elementCount) ||
       macdArr.count < (startIndex + elementCount)) {
        NSLog(@"### 数组元素个数长度不够...");
        return;
    }
    
    CGFloat min = 0;
    CGFloat max = 0;
    for(NSInteger i = startIndex; i < (startIndex + elementCount); i++){
        
        CGFloat dif  = [difArr[i] doubleValue];
        CGFloat dea  = [deaArr[i] doubleValue];
        CGFloat macd = [macdArr[i] doubleValue];

        min = MIN( dif, MIN(dea, MIN(min, macd)));
        max = MAX( dif, MAX(dea, MAX(max, macd)));
    }
    
    NSLog(@"min === (%@) --- max === (%@)", @(min), @(max));
    a(min, max);
}

@end
