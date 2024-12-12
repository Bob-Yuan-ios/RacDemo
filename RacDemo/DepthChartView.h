//
//  DepthChartView.h
//  RacDemo
//
//  Created by Bob on 2024/12/5.
//

#import <UIKit/UIKit.h>
#import "DepthData.h"

NS_ASSUME_NONNULL_BEGIN

@interface DepthChartView : UIView

@property (nonatomic, strong) NSArray<DepthData *> *bids; // 买单
@property (nonatomic, strong) NSArray<DepthData *> *asks; // 卖单

- (void)reloadData; // 重新加载绘制深度图

@end

NS_ASSUME_NONNULL_END
