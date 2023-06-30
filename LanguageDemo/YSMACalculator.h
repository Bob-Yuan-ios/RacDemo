//
//  YSMACalculator.h
//  LanguageDemo
//
//  Created by Bob on 2023/6/29.
//

#import <Foundation/Foundation.h>
#import "YSKLineDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSMACalculator : NSObject

+ (NSMutableArray *)getMA:(YSMACDConfig *)config klineData:(NSArray <YSKLineDataModel *> *)dataList;

@end

NS_ASSUME_NONNULL_END
