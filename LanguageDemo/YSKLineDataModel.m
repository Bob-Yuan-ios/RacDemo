//
//  YSKLineDataModel.m
//  LanguageDemo
//
//  Created by Bob on 2023/6/29.
//

#import "YSKLineDataModel.h"
#import "MJExtension.h"

@implementation YSKLineDataModel

- (NSString *)description{
  
    return [NSString stringWithFormat:@"{\nclose:%@\n_low:%@\n_high:%@\n_open:%@\n_day:%@\n}",
            _close, _low, _high, _open, _day];
}

@end

@implementation YSMACDConfig

- (instancetype)init{
    self = [super init];
    if(self){
        
        _avgPeriod   = @"9";
        _longPeriod  = @"26";
        _shortPeriod = @"12";

        _difIndex  = 0;
        _deaIndex  = 1;
        _macdIndex = 2;
        
        _maPeriodArr = [@[@(5), @(10), @(20), @(30)] mutableCopy];
    }
    return self;
}

@end
 
@implementation YSKDJConfig

- (instancetype)init{
    self = [super init];
    if(self){
        _kPeriod = @"9";
        _dPeriod = @"3";
        _jPeriod = @"3";

        _kIndex = 0;
        _dIndex = 1;
        _jIndex = 2;
    }
    return self;
}

@end
