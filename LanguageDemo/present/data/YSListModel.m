//
//  YSListModel.m
//  LanguageDemo
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

@end

@implementation YSBlockTopModel

+ (NSDictionary *)mj_objectClassInArray{
    return @{@"stock_list": [YSStockModel class]};
}
@end
