//
//  YSKDJCalculator.h
//  LanguageDemo
//
//  Created by Bob on 2023/6/29.
//

#import <Foundation/Foundation.h>
#import "YSKLineDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSKDJCalculator : NSObject


/// 计算KDJ
/// - Parameters:
///   - config: KDJ配置
///   - dataList: 数据源
+ (NSMutableArray *)getKDJ:(YSKDJConfig *)config klineData:(NSArray <YSKLineDataModel *> *)dataList;

@end

NS_ASSUME_NONNULL_END
