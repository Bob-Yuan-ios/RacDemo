//
//  YSListModel.h
//  RacDemo
//
//  Created by Bob on 2023/8/21.
//

#import <Foundation/Foundation.h>
#import <MJExtension/MJExtension.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSJJModel : NSObject

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *reason_type;

@property (nonatomic, copy) NSString *limit_up_type;

@property (nonatomic, copy) NSString *high_days;

@end


@interface YSStockModel : NSObject

@property (nonatomic, copy) NSString *first_limit_up_time;
@property (nonatomic, copy) NSString *code;

@property (nonatomic, copy) NSString *reason_type;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *high_days;

@property (nonatomic, copy) NSString *change_tag;

@end

@interface YSBlockTopModel : NSObject

@property (nonatomic, strong) NSArray<YSStockModel *> *stock_list;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *high;

@end

NS_ASSUME_NONNULL_END
