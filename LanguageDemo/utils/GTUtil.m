//
//  GTUtil.m
//  LanguageDemo
//
//  Created by Bob on 2021/5/21.
//

#import "GTUtil.h"

@implementation GTUtil

+ (void)testExit:(BOOL)isExit{
    NSLog(@"测试 退出程序的调用...");
    if (isExit) exit(0);
    
    abort();
}

+ (void)testRangeException{
  
    NSLog(@"==========数组越界测试==========");
    
    @try {
        
        NSArray *arr = [NSArray new];
        id value = arr[1];
        NSLog(@"数组越界后 保护区间内 后续代码 还能执行吗？");
        NSLog(@"value:(%@)", value);
    } @catch (NSException *exception) {

        NSLog(@"捕捉异常:%@ === %@", exception.userInfo, exception.name);
    } @finally {
        
        NSLog(@"#########结束异常处理###########");
    }
    
    NSLog(@"==========数组越界测试结束==========");
}

+ (void)testOutscreenRender:(UIViewController *)vc{
    
    UIView *themeV = [UIView new];
    [vc.view addSubview:themeV];
    
    themeV.backgroundColor = [UIColor whiteColor];
    themeV.frame = CGRectMake( 100, 100, 100, 100);

    UIView *top = [UIView new];
    top.backgroundColor = [UIColor greenColor];
    [themeV addSubview:top];
    top.frame = CGRectMake(30, 30, 40, 40);
    
    themeV.layer.masksToBounds = YES;
    themeV.layer.cornerRadius = 50;
    
    UIBezierPath *maskPath = [UIBezierPath bezierPathWithRoundedRect:themeV.bounds byRoundingCorners:UIRectCornerAllCorners cornerRadii:themeV.bounds.size];

    CAShapeLayer *maskLayer = [[CAShapeLayer alloc]init];
    //设置大小
    maskLayer.frame = themeV.bounds;
    //设置图形样子
    maskLayer.path = maskPath.CGPath;
    themeV.layer.mask = maskLayer;
}

@end
