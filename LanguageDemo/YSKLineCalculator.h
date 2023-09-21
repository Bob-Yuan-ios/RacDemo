//
//  YSKLineCalculator.h
//  LanguageDemo
//
//  Created by Bob on 2023/9/15.
//

#import <Foundation/Foundation.h>
#import "YSKLineDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSKLineCalculator : NSObject

+ (void)getKLineRange:(NSArray<YSKLineDataModel *> *)dataList
           startIndex:(NSInteger)startIndex
         elementCount:(NSInteger)elementCount
               result:(void(^)(CGFloat minValue, CGFloat maxValue))b;

@end

NS_ASSUME_NONNULL_END
