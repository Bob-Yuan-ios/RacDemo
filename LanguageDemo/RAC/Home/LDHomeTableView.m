//
//  LDHomeTableView.m
//  CF_GTS2
//
//  Created by Bob on 2021/12/29.
//  Copyright © 2021 gw. All rights reserved.
//

#import "LDHomeTableView.h"
#import "MJRefresh.h"

@interface LDHomeTableView()
<
UITableViewDelegate,
UITableViewDataSource
>

@property (nonatomic, strong) NSMutableArray *tableSourceArr;


@property (nonatomic, strong) LDHomeViewModel *viewModel;

@end

@implementation LDHomeTableView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (void)configViewModel:(LDHomeViewModel *)model{
    _viewModel = model;
    
    [self.mj_header beginRefreshing];
}
 
- (void)loadMoreInfo{
    NSLog(@"load more...");
    _viewModel.curPage += 1;
    [self.mj_footer beginRefreshing];
    [[_viewModel.currencyCommand execute:nil] subscribeNext:^(NSArray *dataArr) {
        (10 == self.viewModel.curPage) ? [self.mj_footer endRefreshingWithNoMoreData] : [self.mj_footer endRefreshing];
        self.tableSourceArr = [dataArr mutableCopy];
        [self reloadData];
    }];
}

- (void)refreshInfo{
    NSLog(@"refresh ...");
    _viewModel.curPage = 0;
    [self.mj_header beginRefreshing];
    [[_viewModel.currencyCommand execute:nil] subscribeNext:^(NSArray *dataArr) {
        [self.mj_header endRefreshing];
        self.tableSourceArr = [dataArr mutableCopy];
        [self reloadData];
    }];
}

 
- (instancetype)initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if(self){
        self.backgroundColor = [UIColor yellowColor];
        self.separatorStyle = UITableViewCellSeparatorStyleNone;
        self.delegate = self;
        self.dataSource = self;
        [self registerClass:[LDHomeTableViewCell class] forCellReuseIdentifier:@"LDHomeTableViewCell"];
        
        self.mj_header.automaticallyChangeAlpha = YES;
        self.mj_header = [MJRefreshHeader headerWithRefreshingBlock:^{
            [self refreshInfo];
        }];
        
        self.mj_footer = [MJRefreshAutoNormalFooter footerWithRefreshingBlock:^{
            [self loadMoreInfo];
        }];
    }
    return self;
}


- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 44;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return self.tableSourceArr.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    LDHomeTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"LDHomeTableViewCell"
                                                                  forIndexPath:indexPath];
    
    LDHomeModel *model = self.tableSourceArr[indexPath.row];
    if ([model isKindOfClass:[LDHomeModel class]]) {
        cell.model = model;
    }
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    [tableView deselectRowAtIndexPath:indexPath animated:NO];

    NSLog(@"选择第%ld行", indexPath.row);
}
 

@end


@interface LDHomeTableViewCell ()

@property (nonatomic, strong) UILabel *coinNameLbl;

@end

@implementation LDHomeTableViewCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        
        self.contentView.backgroundColor = [UIColor lightGrayColor];
        self.selectionStyle = UITableViewCellSelectionStyleNone;
      
        [self.coinNameLbl mas_makeConstraints:^(MASConstraintMaker *make) {
            make.centerX.centerY.equalTo(self.contentView);
        }];
    }
    return self;
}
 
- (void)setModel:(LDHomeModel *)model{
    self.coinNameLbl.text = model.currencyName;
}
 

- (UILabel *)coinNameLbl{
    if(!_coinNameLbl){
        _coinNameLbl = [UILabel new];
        [self.contentView addSubview:_coinNameLbl];
    }
    
    return _coinNameLbl;
}
 
@end
