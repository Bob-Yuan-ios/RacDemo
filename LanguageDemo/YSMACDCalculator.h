//
//  YSMACDCalculator.h
//  LanguageDemo
//
//  Created by Bob on 2023/6/29.
//

#import <Foundation/Foundation.h>
#import "YSKLineDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSMACDCalculator : NSObject

+ (void)getMACD:(YSMACDConfig *)config klineData:(NSArray <YSKLineDataModel *> *)dataList result:(void(^)(NSMutableArray *resultArr, CGFloat minValue, CGFloat maxValue))a;

@end

NS_ASSUME_NONNULL_END
