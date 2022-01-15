//
//  LDHomeVC.m
//  LanguageDemo
//
//  Created by Bob on 2021/12/31.
//

#import "LDHomeVC.h"
#import "LDHomeTableView.h"
#import "LDHomeViewModel.h"

@interface LDHomeVC ()

@property (nonatomic, strong) LDHomeTableView *tableV;
@property (nonatomic, strong) LDHomeViewModel *viewModel;

@end

@implementation LDHomeVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = @"主页";
    [self.tableV configViewModel:self.viewModel];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (LDHomeTableView *)tableV{
    if (!_tableV) {
        _tableV = [[LDHomeTableView alloc] initWithFrame:self.view.bounds];
        [self.view addSubview:_tableV];
        
        @weakify(self);
        _tableV.selectedRowBlock = ^(NSInteger row) {
            @strongify(self);
            LDHomeModel *model = self.viewModel.dataSourceArr[row];
            NSLog(@"选中的内容:%@", model.currencyName);
        };
    }
    return _tableV;
}

- (LDHomeViewModel *)viewModel{
    if(!_viewModel){
        _viewModel = [[LDHomeViewModel alloc] init];
    }
    return _viewModel;
}
@end
