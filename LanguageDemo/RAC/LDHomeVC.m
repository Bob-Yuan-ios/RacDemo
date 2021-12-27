//
//  LDHomeVC.m
//  LanguageDemo
//
//  Created by Bob on 2021/12/24.
//

#import "LDHomeVC.h"
#import "LDContentV.h"
#import "LDContentVM.h"

@interface LDHomeVC ()

@property (nonatomic, strong) LDContentV *contentV;
@property (nonatomic, strong) LDContentVM *contentVM;

@property (nonatomic, strong) NSDictionary *loginResultDic;
@end

@implementation LDHomeVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor lightGrayColor];
    
    [self.view addSubview:self.contentV];
    [self.contentV mas_makeConstraints:^(MASConstraintMaker *make) {
       make.edges.equalTo(self.view);
    }];
     
    [self.contentV addContentVM:self.contentVM];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (LDContentV *)contentV{
    if (!_contentV) {
        _contentV = [LDContentV new];
        
    }
    return _contentV;
}


- (LDContentVM *)contentVM{
    if (!_contentVM) {
        _contentVM = [[LDContentVM alloc] init];
        
    }
    return _contentVM;
}
@end
