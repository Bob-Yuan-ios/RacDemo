//
//  YSListModel.m
//  RacDemo
//
//  Created by Bob on 2023/8/21.
//

#import "YSListModel.h"

@implementation YSJJModel


- (NSString *)description{
    return [NSString stringWithFormat:@"\t%@\t%@\t%@\t%@\t", _name, _reason_type, _limit_up_type, _high_days];
}
@end


@implementation YSStockModel

- (NSString *)description{
    NSDate *date = [NSDate dateWithTimeIntervalSince1970:_first_limit_up_time.doubleValue];
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"HH:MM:SS"];
    return [NSString stringWithFormat:@"\t%@\t%@\t%@\t", _name, _reason_type, [formatter stringFromDate:date]];
}

@end

@implementation YSBlockTopModel

+ (NSDictionary *)mj_objectClassInArray{
    return @{@"stock_list": [YSStockModel class]};
}
@end
