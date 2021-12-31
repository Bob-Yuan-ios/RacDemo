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
    self.view.backgroundColor = [UIColor whiteColor];
    self.title = @"登录";
    
    [self.view addSubview:self.contentV];
    [self.contentV mas_makeConstraints:^(MASConstraintMaker *make) {
       make.edges.equalTo(self.view);
    }];
    
    [self.contentV addContentVM:self.contentVM];
    [self setupSignal];
}
 

- (void)setupSignal{
    @weakify(self);
    self.contentV.loginBlock = ^{
        @strongify(self);
        [[self.contentVM.loginCommand execute:@"触发登录操作"] subscribeNext:^(NSDictionary *dic) {
            if ([dic.allKeys containsObject:@"code"]) {
                if (0 == [[dic objectForKey:@"code"] integerValue]) {
                    NSLog(@"登录成功");
                    
                    LDHomeVC *homevc = [LDHomeVC new];
                    [self.navigationController pushViewController:homevc animated:YES];

                    return;
                }
            }
            NSLog(@"登录失败");
        }];
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
