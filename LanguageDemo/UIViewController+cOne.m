//
//  UIViewController+cOne.m
//  LanguageDemo
//
//  Created by Bob on 2021/7/22.
//  测试category + runtime 运行健壮性和规则；build phase压栈的方式编译 后添加的先执行
//  从质量上来说，是需要规避的

#import "UIViewController+cOne.h"

@implementation UIViewController (cOne)

- (void)helloWorld{
    NSLog(@"hello world.... 1");
}
@end
