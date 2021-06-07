//
//  RacRedVM.m
//  LanguageDemo
//
//  Created by Bob on 2021/6/4.
//

#import "RacRedVM.h"

@implementation RacRedVM

- (void)addBtnAction:(UIButton *)_submitBtn{
    [[_submitBtn rac_signalForControlEvents:UIControlEventTouchUpInside]
     subscribeNext:^(__kindof UIControl * _Nullable x) {
         NSLog(@"点击按钮");
    }];
}


@end
