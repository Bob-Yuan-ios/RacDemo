//
//  YSKLineCalculator.m
//  LanguageDemo
//
//  Created by Bob on 2023/9/15.
//

#import "YSKLineCalculator.h"

@implementation YSKLineCalculator

+ (void)getKLineRange:(NSArray<YSKLineDataModel *> *)dataList
           startIndex:(NSInteger)startIndex
         elementCount:(NSInteger)elementCount
               result:(void(^)(CGFloat minValue, CGFloat maxValue))b{
    
    if(dataList.count < startIndex + elementCount) {
        NSLog(@"数据异常==(%@) < (%@) + (%@)", @(dataList.count), @(startIndex), @(elementCount));
        return;
    }
    
    __block CGFloat min = dataList[startIndex].low.doubleValue;
    __block CGFloat max = dataList[startIndex].high.doubleValue;
    
    NSArray *subList = [dataList subarrayWithRange:NSMakeRange(startIndex, elementCount)];
    [subList enumerateObjectsUsingBlock:^(YSKLineDataModel * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        min = MIN(min, obj.low.doubleValue);
        max = MAX(max, obj.high.doubleValue);
    }];
    
    if(b) b(min, max);
}

@end
