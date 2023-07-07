//
//  YSRSICalculator.m
//  LanguageDemo
//
//  Created by Bob on 2023/6/29.
//

#import "YSRSICalculator.h"

@implementation YSRSICalculator

+ (CGFloat)calculatorSMA:(CGFloat)price period:(NSInteger)period preSMA:(CGFloat)preSMA{
    if(0 == period) return 0;
    return (price + (period - 1) * preSMA)/ period;
}

+ (NSMutableArray *)getRSI:(NSArray <YSKLineDataModel *> *)dataList period:(NSInteger)period{
    
    NSMutableArray *result = [@[@(0)] mutableCopy];

    CGFloat preGain = 0;
    CGFloat preLoss = 0;
    for (int i = 1; i < dataList.count; i++) {

        CGFloat dif     = dataList[i].close.doubleValue - dataList[i - 1].close.doubleValue;
                preGain = [YSRSICalculator calculatorSMA:MAX(dif, 0) period:period preSMA:preGain];
                preLoss = [YSRSICalculator calculatorSMA:ABS(dif) period:period preSMA:preLoss];

        if(i >= period){
            [result addObject:@(preGain/preLoss * 100)];
        }else{
            [result addObject:@(0)];
        }
    }
    
    return result;
}
@end
