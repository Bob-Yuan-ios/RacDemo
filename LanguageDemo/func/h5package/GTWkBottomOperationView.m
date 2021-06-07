//
//  GTWkBottomOperationView.m
//  LanguageDemo
//
//  Created by Bob on 2021/5/11.
//

#import "GTWkBottomOperationView.h"
#import <Masonry/Masonry.h>

@interface GTWkBottomOperationView ()

@property (nonatomic, assign) CGFloat btnWidth;

@end

@implementation GTWkBottomOperationView

- (id)initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if (self) {
        _btnWidth = [[UIScreen mainScreen] bounds].size.width/4.0;
        
        [self loadFirstBtn];
        [self loadSecondBtn];
        [self loadThirdBtn];
        [self loadForthBtn];
    }
    return self;
}

 

- (void)loadFirstBtn{
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [self addSubview:btn];
    btn.backgroundColor = [UIColor yellowColor];
    [btn addTarget:self action:@selector(responseToFirst) forControlEvents:UIControlEventTouchUpInside];
    
    [btn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.bottom.mas_equalTo(self);
        make.left.mas_equalTo(self);
        make.width.mas_equalTo(@(_btnWidth));
    }];
}

- (void)loadSecondBtn{
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [self addSubview:btn];
    btn.backgroundColor = [UIColor orangeColor];
    [btn addTarget:self action:@selector(responseToSecond) forControlEvents:UIControlEventTouchUpInside];
    
    [btn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.bottom.mas_equalTo(self);
        make.left.mas_offset(@(_btnWidth));
        make.width.mas_equalTo(@(_btnWidth));
    }];
}

- (void)loadThirdBtn{
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [self addSubview:btn];
    btn.backgroundColor = [UIColor yellowColor];
    [btn addTarget:self action:@selector(responseToThird) forControlEvents:UIControlEventTouchUpInside];
    
    [btn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.bottom.mas_equalTo(self);
        make.left.mas_offset(@(_btnWidth * 2));
        make.width.mas_equalTo(@(_btnWidth));
    }];
}

- (void)loadForthBtn{
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [self addSubview:btn];
    btn.backgroundColor = [UIColor orangeColor];
    [btn addTarget:self action:@selector(responseToForth) forControlEvents:UIControlEventTouchUpInside];
    
    [btn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.bottom.mas_equalTo(self);
        make.left.mas_offset(@(_btnWidth * 3));
        make.width.mas_equalTo(@(_btnWidth));
    }];
}

#pragma mark btn action
- (void)responseToFirst{
    if (_clickFirstBlock) _clickFirstBlock();
}

- (void)responseToSecond{
    if (_clickSecondBlock) _clickSecondBlock();
}

- (void)responseToThird{
    if (_clickThirdBlock) _clickThirdBlock();
}

- (void)responseToForth{
    if (_clickForthBlock) _clickForthBlock();
}
@end
