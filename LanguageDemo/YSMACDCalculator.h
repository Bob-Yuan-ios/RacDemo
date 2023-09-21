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

/// 计算MACD各节点元素值
/// - Parameters:
///   - config: MACD配置
///   - dataList: 数据源
///   - startIndex: 要计算数据的开始位置
///   - a: 结果回调
+ (void)getMACD:(YSMACDConfig *)config
      klineData:(NSArray <YSKLineDataModel *> *)dataList
     startIndex:(NSInteger)startIndex
         result:(void(^)(NSMutableArray *resultArr, CGFloat minValue, CGFloat maxValue))a;

/// 获取范围内的最大值/最小值
/// - Parameters:
///   - dataList: 数据源
///   - startIndex: 起始位置
///   - elementCount: 元素个数
///   - a: 成功回调
///   - b: 失败回头
+ (void)getKlineRangeData:(NSArray *)dataList
               startIndex:(NSInteger)startIndex
             elementCount:(NSInteger)elementCount
                   result:(void(^)(CGFloat minValue, CGFloat maxValue))a
                  failure:(void(^)(void))b;

@end

NS_ASSUME_NONNULL_END
