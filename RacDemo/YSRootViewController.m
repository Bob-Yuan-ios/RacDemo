//
//  YSRootViewController.m
//  RacDemo
//
//  Created by Bob on 2023/7/27.
//

#import "YSRootViewController.h"

#import "YSBaseTableView.h"
#import "YSJJListViewModel.h"

#import "DepthChartView.h"

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

//    [self setupView];
//    [self setupConstraints];
    
    [self loadDepthView];
}

- (void)loadDepthView{
        
    DepthChartView *chartView = [[DepthChartView alloc] initWithFrame:self.view.bounds];
    chartView.bids = [self generateBids]; // 自定义生成买单数据
    chartView.asks = [self generateAsks]; // 自定义生成卖单数据
    [self.view addSubview:chartView];
}

- (NSArray<DepthData *> *)generateBids {
    NSMutableArray<DepthData *> *bids = [NSMutableArray array];
    CGFloat cumulativeAmount = 0;
    for (int i = 0; i < 10; i++) {
        DepthData *data = [[DepthData alloc] init];
        data.price = 100 - i; // 示例价格
        data.amount = arc4random_uniform(10) + 1; // 随机数量
        cumulativeAmount += data.amount;
        data.cumulativeAmount = cumulativeAmount;
        [bids addObject:data];
    }
    return bids;
}

- (NSArray<DepthData *> *)generateAsks {
    NSMutableArray<DepthData *> *asks = [NSMutableArray array];
    CGFloat cumulativeAmount = 0;
    for (int i = 0; i < 10; i++) {
        DepthData *data = [[DepthData alloc] init];
        data.price = 100 + i; // 示例价格
        data.amount = arc4random_uniform(10) + 1; // 随机数量
        cumulativeAmount += data.amount;
        data.cumulativeAmount = cumulativeAmount;
        [asks addObject:data];
    }
    return asks;
}



- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    
//    [self setupSignal];
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

            @autoreleasepool {
                // 组装数据
                __block NSMutableDictionary *filterDic = [[NSMutableDictionary alloc] initWithCapacity:10];
                [elementArr enumerateObjectsUsingBlock:^(YSBlockTopModel *  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
                                    
                    [obj.stock_list enumerateObjectsUsingBlock:^(YSStockModel * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
                        [filterDic setValue:obj forKey:obj.code];
                    }];
                }];
                
                // 排序
                // 最先涨停的排前面
                // 如果时间相等，按股票代码排序
                NSArray *sortArr = [filterDic.allValues sortedArrayUsingComparator:^NSComparisonResult(YSStockModel * _Nonnull obj1, YSStockModel *  _Nonnull obj2) {
                   
                    NSComparisonResult result = [obj1.first_limit_up_time compare:obj2.first_limit_up_time];
                    if(NSOrderedSame == result){
                        return [obj1.code compare:obj2.code];
                    }
                    return result;
                }];
                
                [self.baseTableView reloadData:sortArr];
            }
           
        }];
        
        [_jjListViewModel.blockTopCommand.errors.deliverOnMainThread subscribeNext:^(NSError * _Nullable x) {
            NSLog(@"blockTop error is:(%@)", x.userInfo);
        }];
    }
    return _jjListViewModel;
}

 

@end
