//
//  YSBaseTableView.h
//  RacDemo
//
//  Created by Bob on 2024/11/29.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSBaseTableView : UIView

- (void)reloadDataSection:(NSArray *)section row:(NSArray *)row;

@end

NS_ASSUME_NONNULL_END
