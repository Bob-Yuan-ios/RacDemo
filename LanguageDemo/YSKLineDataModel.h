//
//  YSKLineDataModel.h
//  LanguageDemo
//
//  Created by Bob on 2023/6/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSKLineDataModel : NSObject

@property (nonatomic, copy) NSString *close;
@property (nonatomic, copy) NSString *low;
@property (nonatomic, copy) NSString *high;
@property (nonatomic, copy) NSString *open;
@property (nonatomic, copy) NSString *day;

@end

@interface YSMACDConfig : NSObject

/// 长周期
@property (nonatomic, copy) NSString *longPeriod;

/// 短周期
@property (nonatomic, copy) NSString *shortPeriod;

/// 平滑周期
@property (nonatomic, copy) NSString *avgPeriod;

/// 二维数组保存dif索引
@property (nonatomic, assign) NSUInteger difIndex;

/// 二维数组保存dea索引
@property (nonatomic, assign) NSUInteger deaIndex;

/// 二维数组保存macd索引
@property (nonatomic, assign) NSUInteger macdIndex;

@property (nonatomic, strong) NSMutableArray *maPeriodArr;


@end

@interface YSKDJConfig : NSObject

@property (nonatomic, copy) NSString *kPeriod;
@property (nonatomic, copy) NSString *dPeriod;
@property (nonatomic, copy) NSString *jPeriod;

@property (nonatomic, assign) NSUInteger kIndex;
@property (nonatomic, assign) NSUInteger dIndex;
@property (nonatomic, assign) NSUInteger jIndex;

@end

NS_ASSUME_NONNULL_END
