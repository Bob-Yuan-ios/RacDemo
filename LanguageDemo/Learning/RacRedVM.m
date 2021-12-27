//
//  RacRedVM.m
//  LanguageDemo
//
//  Created by Bob on 2021/6/4.
//

#import "RacRedVM.h"
 
@implementation RacRedVM

- (void)addBtnAction:(UIButton *)_submitBtn racRedModel:(nonnull RacRedModel *)model{
    [[_submitBtn rac_signalForControlEvents:UIControlEventTouchUpInside]
     subscribeNext:^(__kindof UIControl * _Nullable x) {
         NSLog(@"点击按钮");        
    }];    
}

@end


@implementation RacRedModel

- (id)mutableCopyWithZone:(NSZone *)zone {
    RacRedModel *mutableCopy = [[RacRedModel allocWithZone:zone] init];
    mutableCopy.name = _name;

    return mutableCopy;
}

- (void)setAge:(NSString *)age{
    NSLog(@"update age is:%@", age);
    _age = age;
}

- (void)setName:(NSString *)name{
    NSLog(@"update name is:%@", name);
    _name = name;
}

- (void)setHeight:(NSString *)height{
    NSLog(@"update height is:%@", height);
    _height = height;
}
@end
