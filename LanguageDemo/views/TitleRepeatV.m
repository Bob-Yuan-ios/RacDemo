//
//  TitleRepeatV.m
//  LanguageDemo
//
//  Created by Bob on 2021/7/30.
//

#import "TitleRepeatV.h"

@interface TitleRepeatV ()

@property (nonatomic, strong) UILabel *topLbl;
@property (nonatomic, strong) UILabel *centerLbl;

@property (nonatomic, strong) NSMutableArray *arr;


@property (nonatomic, strong) NSMutableArray *accountArr;
@property (nonatomic, strong) NSMutableArray *amountArr;
@property (nonatomic, strong) NSMutableArray *productArr;
@property (nonatomic, strong) NSMutableArray *directionArr;

@property (nonatomic, strong) NSDictionary *dic;

@end

@implementation TitleRepeatV
 
- (instancetype)initWithFrame:(CGRect)frame{
    
    self = [super initWithFrame:frame];
    if (self) {
        
        _arr = [@[@"1", @"2", @"3", @"4", @"5", @"6", @"7"] mutableCopy];
        [self setDataSource];

//        self.topLbl.alpha = 1;
//        self.centerLbl.alpha = 0;
 
        [self topLbl];
        [self centerLbl];
        
        NSTimer *timer =  [NSTimer scheduledTimerWithTimeInterval:2.0
                                          target:self
                                        selector:@selector(test)
                                        userInfo:nil
                                         repeats:YES];
        [timer fire];
    }
    return self;
}

- (void)test{
    NSInteger action = arc4random() % 2;
    if (0 == action) {
        [self refreshWithClosePosition];
    }else{
        [self refreshWithOpenPosition];
    }
}

 
- (void)refreshWithOpenPosition{
    NSMutableString *lastContent = [@"" mutableCopy];

    NSInteger randCnt = _accountArr.count;
    NSInteger showAccount =  arc4random() % randCnt;
    [lastContent appendString:[_accountArr objectAtIndex:showAccount]];

    NSString *directionStr = [_directionArr objectAtIndex:arc4random() % 2];
    randCnt = _productArr.count;
    NSInteger showAmount =  arc4random() % randCnt;
    [lastContent appendFormat:@"用户, %@ %@", directionStr, [_productArr objectAtIndex:showAmount]];
    
    [self refreshFrame:lastContent];

    [_accountArr removeObjectAtIndex:showAccount];
    if (0 == _accountArr.count) {
        [_accountArr addObjectsFromArray:[_dic objectForKey:@"account"]];
    }
    
    [_productArr removeObjectAtIndex:showAmount];
    if (0 == _productArr.count) {
        [_productArr addObjectsFromArray:[_dic objectForKey:@"amount"]];
    }
}

- (void)refreshWithClosePosition{
    
    NSMutableString *lastContent = [@"恭喜 " mutableCopy];

    NSInteger randCnt = _accountArr.count;
    NSInteger showAccount =  arc4random() % randCnt;
    [lastContent appendString:[_accountArr objectAtIndex:showAccount]];

    randCnt = _amountArr.count;
    NSInteger showAmount =  arc4random() % randCnt;
    [lastContent appendFormat:@"用户,盈利:%@", [_amountArr objectAtIndex:showAmount]];
    
    [self refreshFrame:lastContent];

    [_accountArr removeObjectAtIndex:showAccount];
    if (0 == _accountArr.count) {
        [_accountArr addObjectsFromArray:[_dic objectForKey:@"account"]];
    }
    
    [_amountArr removeObjectAtIndex:showAmount];
    if (0 == _amountArr.count) {
        [_amountArr addObjectsFromArray:[_dic objectForKey:@"amount"]];
    }
}

- (void)setDataSource{
    NSString *infoPlist = [[NSBundle mainBundle] pathForResource:@"dealNotice" ofType:@"plist"];
    _dic = [[NSDictionary alloc] initWithContentsOfFile:infoPlist];
    
    _accountArr = [[_dic objectForKey:@"account"] mutableCopy];
    _amountArr = [[_dic objectForKey:@"amount"] mutableCopy];
    
    _directionArr = [[_dic objectForKey:@"direction"] mutableCopy];
    _productArr = [[_dic objectForKey:@"product"] mutableCopy];
}

- (void)refreshFrame:(NSString *)lastContent{
 
//    [UIView animateWithDuration:.5f animations:^{
//
//        CGRect frame1 = self.topLbl.frame;
//        CGRect frame2 = self.centerLbl.frame;
//
//        if (frame1.origin.y == 11) {
//
//            frame1.origin.y = 11;
//            self.centerLbl.frame = frame1;
//            self.centerLbl.alpha = 1;
//            self.centerLbl.text = lastContent;
//
//            frame1.origin.y = -18;
//            self.topLbl.frame = frame1;
//            self.topLbl.alpha = 0;
//
//            return;
//        }
//
//        if (frame2.origin.y == 11) {
//            frame1.origin.y = 11;
//            self.topLbl.frame = frame1;
//            self.topLbl.alpha = 1;
//            self.topLbl.text = lastContent;
//
//            frame1.origin.y = -18;
//            self.centerLbl.frame = frame1;
//            self.centerLbl.alpha = 0;
//
//            return;
//        }
//
//    } completion:^(BOOL finished) {
//
//        CGRect frame1 = self.topLbl.frame;
//        CGRect frame = CGRectMake(15, 40, 345, 18);
//
//        (frame1.origin.y == 11)  ?  (self.centerLbl.frame = frame) : (self.topLbl.frame = frame);
//
//    }];
    
    if (_topLbl.frame.origin.y == 0) {
        _topLbl.frame = CGRectMake(15, 40, 345, 0);
    }else{
        _centerLbl.frame = CGRectMake(15, 40, 345, 0);
    }
    
    [UIView animateWithDuration:.5f animations:^{
        if (_topLbl.frame.origin.y == 0) {
            _centerLbl.frame = CGRectMake(15, 0, 345, 40);
            _centerLbl.text = lastContent;
        }else{
            _topLbl.frame = CGRectMake(15, 0, 345, 40);
            _topLbl.text = lastContent;
        }
    }];
}

#pragma mark --
- (UILabel *)topLbl{
    if (!_topLbl) {
        _topLbl = [UILabel new];
        [self addSubview:_topLbl];
        _topLbl.frame = CGRectMake(15, 0, 345, 40);
        _topLbl.textAlignment = NSTextAlignmentLeft;
        _topLbl.font = [UIFont systemFontOfSize:12];
    }
    return _topLbl;
}

- (UILabel *)centerLbl{
    if (!_centerLbl) {
        _centerLbl = [UILabel new];
        [self addSubview:_centerLbl];
        
        _centerLbl.frame = CGRectMake(15, 40, 345, 0);
        _centerLbl.textAlignment = NSTextAlignmentLeft;
        _centerLbl.font = [UIFont systemFontOfSize:12];
    }
    return _centerLbl;
}
 
@end
 
 
