//
//  YSKLineDataModel.m
//  LanguageDemo
//
//  Created by Bob on 2023/6/29.
//

#import "YSKLineDataModel.h"
#import "MJExtension.h"

@implementation YSKLineDataModel


@end

@implementation YSMACDConfig

- (instancetype)init{
    self = [super init];
    if(self){
        
        _avgPeriod = @"9";
        _longPeriod = @"26";
        _shortPeriod = @"12";

        _difIndex = 0;
        _deaIndex = 1;
        _macdIndex = 2;
        
        _kPeriod = @"9";
        _dPeriod = @"3";
        _jPeriod = @"3";

        _kIndex = 0;
        _dIndex = 1;
        _jIndex = 2;
        
        _maPeriodArr = [@[@(5), @(10), @(20), @(30)] mutableCopy];
    }
    return self;
}

/*
 "day": "2022-06-13 10:30:00",
 "open": "13.010",
 "high": "13.100",
 "low": "12.860",
 "close": "12.990",
 "volume": "813739"
 @property (nonatomic, copy) NSString *close;
 @property (nonatomic, copy) NSString *low;
 @property (nonatomic, copy) NSString *high;
 @property (nonatomic, copy) NSString *open;
 @property (nonatomic, copy) NSString *uiTime;
 */


@end
