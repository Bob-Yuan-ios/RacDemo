//
//  LDHomeTableView.h
//  CF_GTS2
//
//  Created by Bob on 2021/12/29.
//  Copyright © 2021 gw. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LDHomeViewModel.h"
#import <Masonry/Masonry.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDHomeTableView : UITableView

@property (nonatomic, copy) void(^selectedRowBlock)(NSInteger row);

- (void)configViewModel:(LDHomeViewModel *)model;

@end


@interface LDHomeTableViewCell : UITableViewCell

@property (nonatomic, strong) LDHomeModel *model;

@end

NS_ASSUME_NONNULL_END
