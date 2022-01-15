//
//  LDLoginVC.m
//  LanguageDemo
//
//  Created by Bob on 2021/12/24.
//

#import "LDLoginVC.h"
#import "LDLoginView.h"
#import "LDLoginViewModel.h"

#import "LDHomeVC.h"

@interface LDLoginVC ()

@property (nonatomic, strong) LDLoginView *contentV;
@property (nonatomic, strong) LDLoginViewModel *contentVM;

@end

@implementation LDLoginVC
 

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = @"登录";
    
    UIColor *color = [UIColor brownColor];
    
    // statusBar
    if (@available(iOS 13.0, *)) {
        
        UIStatusBarManager *statusBarManager = [UIApplication sharedApplication].keyWindow.windowScene.statusBarManager;
        UIView *statusBar = [[UIView alloc] initWithFrame:statusBarManager.statusBarFrame];
        statusBar.backgroundColor = color;
        statusBar.tintColor = [UIColor yellowColor];
        [[UIApplication sharedApplication].keyWindow addSubview:statusBar];
    } else {
        
       // Fallback on earlier versions
       UIView *statusBar = [[[UIApplication sharedApplication] valueForKey:@"statusBarWindow"] valueForKey:@"statusBar"];
       if ([statusBar respondsToSelector:@selector(setBackgroundColor:)]) {
           statusBar.backgroundColor = color;
       }
    }
    
    // navigationBar
    self.navigationController.navigationBar.translucent = NO;
    self.navigationController.navigationBar.backgroundColor = color;
    NSDictionary *attributes = @{
        NSForegroundColorAttributeName: [UIColor whiteColor],
        NSFontAttributeName: [UIFont systemFontOfSize:16],
    };
    [self.navigationController.navigationBar setTitleTextAttributes:attributes];
 
    
    self.view.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:self.contentV];
    [self refreshConstraint];
    
    [self.contentV addContentVM:self.contentVM];
    [self setupSignal];
}
 
- (void)refreshConstraint{
    
    BOOL navHidden = self.navigationController.navigationBarHidden;
    CGFloat statusHeight = CGRectGetHeight([UIApplication sharedApplication].statusBarFrame);
    CGFloat offsetY = navHidden ? statusHeight : 0;
    NSLog(@"offsetY is:(%lf)", offsetY);
    
    [self.contentV mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(self.view).mas_offset(offsetY);
        make.left.bottom.right.mas_equalTo(self.view);
    }];
}

- (void)setupSignal{
    @weakify(self);
    self.contentV.loginBlock = ^{
        @strongify(self);
        
        BOOL hiddenNavBar = self.navigationController.navigationBarHidden;
        [self.navigationController setNavigationBarHidden:!hiddenNavBar animated:YES];
        [self refreshConstraint];

//        [[self.contentVM.loginCommand execute:@"触发登录操作"] subscribeNext:^(NSDictionary *dic) {
//            if ([dic.allKeys containsObject:@"code"]) {
//                if (0 == [[dic objectForKey:@"code"] integerValue]) {
//                    NSLog(@"登录成功");
//
//                    LDHomeVC *homevc = [LDHomeVC new];
//                    [self.navigationController pushViewController:homevc animated:YES];
//
//                    return;
//                }
//            }
//            NSLog(@"登录失败");
//        }];
    };
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (LDLoginView *)contentV{
    if (!_contentV) {
        _contentV = [LDLoginView new];
    }
    return _contentV;
}


- (LDLoginViewModel *)contentVM{
    if (!_contentVM) {
        _contentVM = [[LDLoginViewModel alloc] init];
    }
    return _contentVM;
}
@end
