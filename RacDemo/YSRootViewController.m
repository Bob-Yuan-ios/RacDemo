//
//  YSRootViewController.m
//  RacDemo
//
//  Created by Bob on 2023/7/27.
//

#import "YSRootViewController.h"

#import "YSBaseTableView.h"
#import "YSJJListViewModel.h"

@interface YSRootViewController ()

@property (nonatomic, strong) YSJJListViewModel *jjListViewModel;
@property (nonatomic, strong) YSBaseTableView *baseTableView;

@end

@implementation YSRootViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = @"根视图-1";
    self.view.backgroundColor = [UIColor whiteColor];

    [self setupView];
    [self setupConstraints];
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    
    [self setupSignal];
}

- (void)dealloc{
    NSLog(@"########:%s", __func__);
}

- (void)setupView{
    [self.view addSubview:self.baseTableView];
}

- (void)setupConstraints{
    [self.baseTableView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.mas_equalTo(self.view);
        make.top.mas_equalTo(self.view).mas_offset(64);
    }];
}

- (void)setupSignal{
    // 释放主线程压力
    dispatch_async(dispatch_queue_create(0, 0), ^{
        [self.jjListViewModel.blockTopCommand execute:nil];
    });
}

#pragma mark lazy load
- (YSBaseTableView *)baseTableView{
    if(!_baseTableView){
        _baseTableView = [YSBaseTableView new];
    }
    return _baseTableView;
}

- (YSJJListViewModel *)jjListViewModel{
    if(!_jjListViewModel){
        _jjListViewModel = [[YSJJListViewModel alloc] init];
        [_jjListViewModel.jjCommand.executionSignals.switchToLatest.deliverOnMainThread subscribeNext:^(id  _Nullable x) {
            [(NSArray *)x enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
              YSJJModel *model = (YSJJModel *)obj;
              NSLog(@"%@", model.description);
            }];
            
        }];
        
        [_jjListViewModel.jjCommand.errors.deliverOnMainThread subscribeNext:^(NSError * _Nullable x) {
            NSLog(@"jj error is:(%@)", x.userInfo);
        }];
        
        [_jjListViewModel.blockTopCommand.executionSignals.switchToLatest.deliverOnMainThread subscribeNext:^(NSArray *  _Nullable elementArr) {

            __block NSMutableArray *rowArr = [[NSMutableArray alloc] initWithCapacity:10];
            __block NSMutableArray *sectionArr = [[NSMutableArray alloc] initWithCapacity:10];
            [elementArr enumerateObjectsUsingBlock:^(YSBlockTopModel *  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
                
                [sectionArr addObject:obj.name];
                
                // 排序
                NSArray *sortArr = [obj.stock_list sortedArrayUsingComparator:^NSComparisonResult(YSStockModel * _Nonnull obj1, YSStockModel *  _Nonnull obj2) {
                   
                    NSComparisonResult result = [obj1.first_limit_up_time compare:obj2.first_limit_up_time];
                    return result;
                }];
                [sortArr enumerateObjectsUsingBlock:^(YSStockModel * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
                    NSLog(@"%@\n", obj.description);
                }];
                [rowArr addObject:sortArr];
            }];
            
            [self.baseTableView reloadDataSection:sectionArr row:rowArr];
        }];
        
        [_jjListViewModel.blockTopCommand.errors.deliverOnMainThread subscribeNext:^(NSError * _Nullable x) {
            NSLog(@"blockTop error is:(%@)", x.userInfo);
        }];
    }
    return _jjListViewModel;
}

 

@end
