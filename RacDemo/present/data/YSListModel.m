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


+ (NSString *)getHMSStr:(long)timeStamp{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"HH:mm:ss"];
    return [formatter stringFromDate:[NSDate dateWithTimeIntervalSince1970:timeStamp]];
}

- (NSString *)description{
    
    NSDate *firstDate = [NSDate dateWithTimeIntervalSince1970:_first_limit_up_time.doubleValue];
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"HH:mm:ss"];
    NSString *first = [formatter stringFromDate:firstDate];
    
    NSDate *lastDate = [NSDate dateWithTimeIntervalSince1970:_last_limit_up_time.doubleValue];
    NSString *last = [formatter stringFromDate:lastDate];

    return [NSString stringWithFormat:@"%@\t%@\t%@\t%@\n%@\n",
            _name,
            _reason_type,
            first,
            last,
            _reason_info];
}

@end

@implementation YSBlockTopModel

+ (NSDictionary *)mj_objectClassInArray{
    return @{@"stock_list": [YSStockModel class]};
}
@end
