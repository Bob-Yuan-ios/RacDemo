//
//  YSActionSheet.m
//  LanguageDemo
//
//  Created by Bob on 2023/1/7.
//

#import "YSActionSheet.h"

@interface YSActionSheet ()
@property (nonatomic, strong) UIAlertController *alertVC;

@end

@implementation YSActionSheet


- (void)ssss:(UIViewController *)nav{
    
    _alertVC = [UIAlertController alertControllerWithTitle:@"主标题"
                                                   message:@"副标题"
                                            preferredStyle:UIAlertControllerStyleActionSheet];

    UIAlertAction *action1 = [UIAlertAction actionWithTitle:@"Hi--1" style:UIAlertActionStyleDefault
                                                    handler:^(UIAlertAction * _Nonnull action) {
        ;
    }];
    [_alertVC addAction:action1];
    
    UIAlertAction *action2 = [UIAlertAction actionWithTitle:@"Hi--2" style:UIAlertActionStyleDefault
                                                    handler:^(UIAlertAction * _Nonnull action) {
        ;
    }];
    [_alertVC addAction:action2];

    [nav presentViewController:_alertVC animated:YES completion:^{
        
        NSArray *subV = [UIApplication sharedApplication].keyWindow.subviews;
        UIView *backV = (UIView *)[[subV.lastObject subviews] firstObject];
        backV.userInteractionEnabled = YES;
        
        backV.backgroundColor = [UIColor colorWithRed:.3 green:.7 blue:.8 alpha:.5];
        
        UITapGestureRecognizer *tapGes = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapGesture)];
        [backV addGestureRecognizer:tapGes];
    }];
}

- (void)tapGesture{
    NSLog(@"手势处理。。。");
    [_alertVC dismissViewControllerAnimated:YES completion:nil];
}

@end
