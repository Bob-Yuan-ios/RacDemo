//
//  YSRSICalculator.h
//  LanguageDemo
//
//  Created by Bob on 2023/6/29.
//

#import <Foundation/Foundation.h>
#import "YSKLineDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSRSICalculator : NSObject

+ (NSMutableArray *)getRSI:(NSArray <YSKLineDataModel *> *)dataList period:(NSInteger)period;

@end


NS_ASSUME_NONNULL_END
