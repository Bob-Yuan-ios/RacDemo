//
//  YSBaseTableView.m
//  RacDemo
//
//  Created by Bob on 2024/11/29.
//

#import "YSBaseTableView.h"
#import "YSCoinInfoTableViewCell.h"

@interface YSBaseTableView ()
<
UITableViewDelegate,
UITableViewDataSource
>

@property (nonatomic, strong) UITableView *baseTableView;
@property (nonatomic, strong) NSMutableArray *dataArr;

@end

@implementation YSBaseTableView

- (instancetype)init{
    self = [super init];
    if (self) {
        [self setupView];
        [self setupConstraints];
    }
    return self;
}

- (void)setupView{
    [self addSubview:self.baseTableView];
}

- (void)setupConstraints{
    [self.baseTableView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.mas_equalTo(self);
    }];
}

- (void)reloadDataSource:(NSArray *)arr{
    self.dataArr = [arr mutableCopy];
    [self.baseTableView reloadData];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return [self.dataArr[section] count];
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return self.dataArr.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    YSCoinInfoTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"YSCoinInfoTableViewCell" forIndexPath:indexPath];
    if(cell == nil){
        cell = [[YSCoinInfoTableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"YSCoinInfoTableViewCell"];
        NSLog(@"初始化...");
    }
    
    
    cell.stockModel = self.dataArr[indexPath.section][indexPath.row];
    
    return cell;
}

#pragma mark lazy load
- (UITableView *)baseTableView{
    if(!_baseTableView){
        _baseTableView = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStylePlain];
        _baseTableView.delegate = self;
        _baseTableView.dataSource = self;
        _baseTableView.estimatedRowHeight = 44;
        [_baseTableView registerClass:[YSCoinInfoTableViewCell class] forCellReuseIdentifier:@"YSCoinInfoTableViewCell"];
    }
    return _baseTableView;
}
@end
