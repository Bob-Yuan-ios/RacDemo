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
