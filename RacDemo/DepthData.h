//
//  DepthData.h
//  RacDemo
//
//  Created by Bob on 2024/12/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DepthData : NSObject

@property (nonatomic, assign) CGFloat price;
@property (nonatomic, assign) CGFloat amount;
@property (nonatomic, assign) CGFloat cumulativeAmount; // 累积数量


@end

NS_ASSUME_NONNULL_END
