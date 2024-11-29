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
@property (nonatomic, strong) NSMutableArray *sectionArr;

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

- (void)reloadDataSection:(NSArray *)section row:(NSArray *)row{
    self.dataArr = [row mutableCopy];
    self.sectionArr = [section mutableCopy];
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

- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section{
    
    CGRect frame = CGRectMake(0, 0, [[UIScreen mainScreen] bounds].size.width, 44);
    UIView *headerView = [[UIView alloc] initWithFrame:frame];
    headerView.backgroundColor = [UIColor redColor];
    
    UILabel *label = [UILabel new];
    [headerView addSubview:label];
    
    label.numberOfLines = 0;
    label.font = [UIFont systemFontOfSize:14];
    
    [label mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_offset(10);
        make.right.mas_offset(-10);
        make.centerY.mas_equalTo(headerView.mas_centerY);
    }];
    
    label.text = _sectionArr[section];

//    [headerView mas_makeConstraints:^(MASConstraintMaker *make) {
//        make.width.mas_equalTo([[UIScreen mainScreen] bounds].size.width);
//        make.bottom.mas_equalTo(label.mas_bottom).mas_offset(10);
//    }];

//    [headerView setNeedsLayout];
//    [headerView layoutIfNeeded];
    
    return headerView;
}


#pragma mark lazy load
- (UITableView *)baseTableView{
    if(!_baseTableView){
        _baseTableView = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStyleGrouped];
        _baseTableView.delegate = self;
        _baseTableView.dataSource = self;
        _baseTableView.estimatedRowHeight = 44;
        _baseTableView.sectionHeaderHeight = 44;
        [_baseTableView registerClass:[YSCoinInfoTableViewCell class] forCellReuseIdentifier:@"YSCoinInfoTableViewCell"];
   
    }
    return _baseTableView;
}
@end
