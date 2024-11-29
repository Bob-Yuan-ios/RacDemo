//
//  YSCoinInfoTableViewCell.m
//  RacDemo
//
//  Created by Bob on 2024/11/29.
//

#import "YSCoinInfoTableViewCell.h"

@interface YSCoinInfoTableViewCell ()

@property (nonatomic, strong) UILabel *nameLabel;
@property (nonatomic, strong) UILabel *reasonTypeLabel;
@property (nonatomic, strong) UILabel *firstTimeLabel;
@property (nonatomic, strong) UILabel *lastTimeLabel;
@property (nonatomic, strong) UILabel *reasonInfoLabel;


@end

@implementation YSCoinInfoTableViewCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if(self){
        self.selectionStyle = UITableViewCellSelectionStyleNone;

        [self setupView];
        [self setupConstraints];
    }
    return self;
}


- (void)setupView{
    [self.contentView addSubview:self.nameLabel];
    [self.contentView addSubview:self.firstTimeLabel];
    [self.contentView addSubview:self.lastTimeLabel];
    [self.contentView addSubview:self.reasonTypeLabel];
    [self.contentView addSubview:self.reasonInfoLabel];
}

- (void)setupConstraints{
    
    [self.nameLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.left.mas_equalTo(10).priorityLow();
    }];
    
    [self.firstTimeLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(10);
        make.right.mas_equalTo(self.lastTimeLabel.mas_left).mas_offset(-10);
    }];
    
    [self.lastTimeLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(10);
        make.right.mas_equalTo(-10);
    }];
  
    [self.reasonTypeLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(self.nameLabel.mas_bottom).mas_offset(10);
        make.left.mas_equalTo(10);
        make.right.mas_equalTo(-10);
    }];
    
    [self.reasonInfoLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(self.reasonTypeLabel.mas_bottom).mas_offset(10);
        make.left.mas_equalTo(10);
        make.right.mas_equalTo(-10);
        make.bottom.mas_offset(-10);
    }];
}


- (void)setStockModel:(YSStockModel *)stockModel{
    self.nameLabel.text = stockModel.name;
    self.reasonTypeLabel.text = stockModel.reason_type;
    self.firstTimeLabel.text = [YSStockModel getHMSStr:stockModel.first_limit_up_time.doubleValue];
    self.lastTimeLabel.text = [YSStockModel getHMSStr:stockModel.last_limit_up_time.doubleValue];
    self.reasonInfoLabel.text = stockModel.reason_info;
}

#pragma mark lazy load
- (UILabel *)nameLabel{
    if(!_nameLabel){
        _nameLabel = [UILabel new];
        _nameLabel.font = [UIFont systemFontOfSize:12];
    }
    return _nameLabel;
}

- (UILabel *)reasonTypeLabel{
    if(!_reasonTypeLabel){
        _reasonTypeLabel = [UILabel new];
        _reasonTypeLabel.numberOfLines = 0;
        _reasonTypeLabel.font = [UIFont systemFontOfSize:12];
    }
    return _reasonTypeLabel;
}

- (UILabel *)firstTimeLabel{
    if(!_firstTimeLabel){
        _firstTimeLabel = [UILabel new];
        _firstTimeLabel.font = [UIFont systemFontOfSize:12];
    }
    return _firstTimeLabel;
}

- (UILabel *)lastTimeLabel{
    if(!_lastTimeLabel){
        _lastTimeLabel = [UILabel new];
        _lastTimeLabel.font = [UIFont systemFontOfSize:12];
    }
    return _lastTimeLabel;
}

- (UILabel *)reasonInfoLabel{
    if(!_reasonInfoLabel){
        _reasonInfoLabel = [UILabel new];
        _reasonInfoLabel.numberOfLines = 0;
        _reasonInfoLabel.font = [UIFont systemFontOfSize:14];
    }
    return _reasonInfoLabel;
}

@end
