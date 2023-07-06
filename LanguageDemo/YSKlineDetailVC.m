//
//  YSKlineDetailVC.m
//  LanguageDemo
//
//  Created by Bob on 2021/4/12.
//

#import "YSKlineDetailVC.h"
#import <Masonry/Masonry.h>

#import "RacRedVM.h"
#import "RacRedView.h"

#import "YSRACLearnM.h"

#import <objc/runtime.h>
#import <malloc/malloc.h>
 
#import "ThreadModel.h"
 
#import "UIImage+ChangeColor.h"
#import "YSHttpsRequest.h"
#import "YSKLineHeader.h"
#import "YSKlineDetailModel.h"
#import "YSKlineViewModel.h"

@interface YSKlineDetailVC ()
<
UIScrollViewDelegate
>

@property (nonatomic, strong) UIView *macdInfoView;
@property (nonatomic, strong) UIView *rightPriceView;

// 滑动只绘制时间
@property (nonatomic, strong) UIScrollView *cadicatorScrollView;

// 绘制k线
@property (nonatomic, strong) UIView       *painterView;

@property (nonatomic, strong) YSMACDConfig *config;
@property (nonatomic, strong) YSKlineViewModel *viewModel;
@property (nonatomic, strong) YSKlineDetailModel *detailModel;

@end

@implementation YSKlineDetailVC


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    
    [self addChildView];
    [self addChildConstraints];
    [self addChildSignal];
    
    [self loadContent];
}

- (void)addChildView{
    [self.view addSubview:self.macdInfoView];
    [self.view addSubview:self.cadicatorScrollView];
    [self.cadicatorScrollView addSubview:self.painterView];
    [self.view addSubview:self.rightPriceView];
}

- (void)addChildConstraints{
    [self.macdInfoView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_offset(100);
        make.left.mas_equalTo(self.view);
        make.height.mas_equalTo(44);
    }];
    
    [self.cadicatorScrollView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(self.macdInfoView.mas_bottom);
        make.left.right.mas_equalTo(self.view);
        make.height.mas_equalTo(200);
    }];
    
    [self.painterView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.left.right.mas_equalTo(self.cadicatorScrollView);
        make.height.mas_equalTo(100);
    }];
    
    [self.rightPriceView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.right.bottom.mas_equalTo(self.cadicatorScrollView);
    }];
}

- (void)addChildSignal{
    [[RACObserve(self.detailModel, currentPage) skip:1].distinctUntilChanged subscribeNext:^(id  _Nullable x) {
        [self loadContent];
    }];
}

- (void)loadContent{
    
    if(self.detailModel.loadKlineData || self.detailModel.endLoading){
        NSLog(@"数据请求中/或者数据已加载完成");
        return;
    }
    
    self.detailModel.loadKlineData = YES;
    self.viewModel.count = [self.detailModel getCurrentTotalCount];
    [self.viewModel.lineDataCommond execute:nil];
}

- (void)handMacd:(NSArray *)klineValue{
    if(klineValue.count < [self.detailModel getCurrentTotalCount]){
        NSLog(@"no more data...(%@)", @(klineValue.count));
        self.detailModel.endLoading = YES;
    }else{
        self.detailModel.endLoading = NO;
        NSLog(@"load data...(%@)", @(klineValue.count));
    }

    self.detailModel.startIndex = self.cadicatorScrollView.contentOffset.x/self.detailModel.lineWidth;
    self.detailModel.endIndex = self.detailModel.startIndex + self.detailModel.elementCount;
    if(self.detailModel.startIndex < 0) {
        NSLog(@"startIndex error...");
        return;
    }
    NSLog(@"startIndex is (%@)=== (%@)", @(self.detailModel.startIndex), @(self.detailModel.endIndex));

    [YSMACDCalculator getMACD:self.config klineData:klineValue startIndex:self.detailModel.startIndex result:^(NSMutableArray * _Nonnull resultArr, CGFloat minValue, CGFloat maxValue) {
        
        self.detailModel.klineArr = [resultArr mutableCopy];
        [self setupKlineView:resultArr min:minValue max:maxValue];

        self.detailModel.currentPage = self.detailModel.currentPage + 2;
        self.detailModel.loadKlineData = NO;
    }];
}

- (void)setupLineRange{
    
    self.detailModel.startIndex = (self.cadicatorScrollView.contentOffset.x)/self.detailModel.lineWidth;
    self.detailModel.endIndex = self.detailModel.startIndex + self.detailModel.elementCount;

    if(self.detailModel.startIndex < 0) {
        NSLog(@"startIndex error...");
        return;
    }
    NSLog(@"startIndex is (%@)=== (%@)", @(self.detailModel.startIndex), @(self.detailModel.endIndex));
    
    [YSMACDCalculator getKlineRangeData:self.detailModel.klineArr startIndex:self.detailModel.startIndex elementCount:self.detailModel.elementCount result:^(CGFloat minValue, CGFloat maxValue) {
        
        [self reloadKlineView:self.detailModel.klineArr min:minValue max:maxValue];
    }];
}

- (void)reloadKlineView:(NSArray *)resultArr min:(CGFloat)minValue max:(CGFloat)maxValue{
    
    NSLog(@"###### reloadKlineView for more data...before (%@)", NSStringFromCGPoint(self.cadicatorScrollView.contentOffset));
    NSArray<CALayer *> *subLayers = self.painterView.layer.sublayers;
    NSArray<CALayer *> *removedLayers = [subLayers filteredArrayUsingPredicate:[NSPredicate predicateWithBlock:^BOOL(id  _Nullable evaluatedObject, NSDictionary<NSString *,id> * _Nullable bindings) {
        return [evaluatedObject isKindOfClass:[CAShapeLayer class]];
    }]];
    [removedLayers enumerateObjectsUsingBlock:^(CALayer * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        [obj removeFromSuperlayer];
    }];

    CGPoint offsetPoint = self.cadicatorScrollView.contentOffset;
    [self.painterView mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_lessThanOrEqualTo(offsetPoint.x);
        make.width.mas_equalTo(self.detailModel.screenWidth);
        make.height.mas_equalTo(100);
    }];
    NSLog(@"###### reloadKlineView for more data... after(%@) === (%@)", NSStringFromCGPoint(self.cadicatorScrollView.contentOffset), NSStringFromCGSize(self.cadicatorScrollView.contentSize));
    
    [self setPriceRange:minValue maxValue:maxValue];
    [self selectedMacd:resultArr idx:resultArr.count];
       
    NSArray *colorArr = @[[UIColor greenColor], [UIColor purpleColor], [UIColor brownColor]];
    for (NSInteger i = (resultArr.count - 1); i >= 0; i--) {

        if(2 == i){
            for (NSInteger j = self.detailModel.startIndex; j < MIN(self.detailModel.elementCount + self.detailModel.startIndex, [resultArr[i] count]); j++) {
                CGFloat pointY = 0;
                CGFloat element = [resultArr[i][j] doubleValue];
                
                UIColor *rectColor = [UIColor redColor];
                if(0 == element){
                    pointY = 50;
                }else if(element < 0){
                    pointY = 50 + fabs(element/minValue) * 50;
                }else if(element > 0){
                    pointY = 50 - fabs(element/maxValue) * 50;
                }
                
                CGFloat pointX = self.detailModel.screenWidth - self.detailModel.lineWidth * (j - self.detailModel.startIndex);
                
                UIBezierPath *linePath = [UIBezierPath bezierPath];
                [linePath moveToPoint:CGPointMake(pointX, pointY)];
                [linePath addLineToPoint:CGPointMake(pointX, 50)];
                [linePath addLineToPoint:CGPointMake(pointX - self.detailModel.lineWidth + 1, 50)];
                [linePath addLineToPoint:CGPointMake(pointX - self.detailModel.lineWidth + 1, pointY)];
                [linePath closePath];

                CAShapeLayer *shapeLayer = [CAShapeLayer layer];
                shapeLayer.lineWidth = 1.f;
                shapeLayer.fillColor = [rectColor CGColor];
                shapeLayer.strokeColor = [[UIColor clearColor] CGColor];
                shapeLayer.path = linePath.CGPath;
                [self.painterView.layer addSublayer:shapeLayer];
            }
            
        }else{
            UIBezierPath *linePath = [UIBezierPath bezierPath];
            for (NSInteger j = self.detailModel.startIndex; j < MIN(self.detailModel.elementCount + self.detailModel.startIndex, [resultArr[i] count]); j++) {
                CGFloat pointY = 0;
                CGFloat element = [resultArr[i][j] doubleValue];
                
                if(0 == element){
                    pointY = 50;
                }else if(element < 0){
                    pointY = 50 + fabs(element/minValue) * 50;
                }else if(element > 0){
                    pointY = 50 - fabs(element/maxValue) * 50;
                }
                
                CGFloat pointX = self.detailModel.screenWidth - self.detailModel.lineWidth * (j - self.detailModel.startIndex);
                CGPoint point = CGPointMake(pointX, pointY);
                
                if(j == self.detailModel.startIndex){
                    [linePath moveToPoint:point];
                }else{
                    [linePath addLineToPoint:point];
                }
            }
            
            CAShapeLayer *shapeLayer = [CAShapeLayer layer];
            shapeLayer.lineWidth = 1.f;
            shapeLayer.strokeColor = [(UIColor *)[colorArr objectAtIndex:i] CGColor];
            shapeLayer.fillColor = [[UIColor clearColor] CGColor];
            shapeLayer.path = linePath.CGPath;
            
            [self.painterView.layer addSublayer:shapeLayer];
        }
    }
}


- (void)setupKlineView:(NSArray *)resultArr min:(CGFloat)minValue max:(CGFloat)maxValue{
       
    NSLog(@"###### refreshKLineView for more data...before (%@)", NSStringFromCGPoint(self.cadicatorScrollView.contentOffset));
    NSArray<CALayer *> *subLayers = self.painterView.layer.sublayers;
    NSArray<CALayer *> *removedLayers = [subLayers filteredArrayUsingPredicate:[NSPredicate predicateWithBlock:^BOOL(id  _Nullable evaluatedObject, NSDictionary<NSString *,id> * _Nullable bindings) {
        return [evaluatedObject isKindOfClass:[CAShapeLayer class]];
    }]];
    [removedLayers enumerateObjectsUsingBlock:^(CALayer * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        [obj removeFromSuperlayer];
    }];
    
    __block NSUInteger maxCount = 0;
    [resultArr enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        maxCount = MAX([(NSArray *)obj count], maxCount);
    }];
    
    CGFloat width = self.detailModel.lineWidth * maxCount;
    self.cadicatorScrollView.contentSize = CGSizeMake(width, 100);
    CGPoint offsetPoint = CGPointMake([self.detailModel getScrollToPointX], 0);
    [self.cadicatorScrollView setContentOffset:offsetPoint animated:NO];
    [self.painterView mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_greaterThanOrEqualTo(offsetPoint.x);
        make.width.mas_equalTo(self.detailModel.screenWidth);
        make.height.mas_equalTo(100);
    }];
    NSLog(@"###### refreshKLineView for more data... after(%@) === (%@)", NSStringFromCGPoint(self.cadicatorScrollView.contentOffset), NSStringFromCGSize(self.cadicatorScrollView.contentSize));
    
    
    [self setPriceRange:minValue maxValue:maxValue];
    [self selectedMacd:resultArr idx:resultArr.count];
       
    NSArray *colorArr = @[[UIColor greenColor], [UIColor purpleColor], [UIColor brownColor]];
    for (NSInteger i = (resultArr.count - 1); i >= 0; i--) {

        if(2 == i){
            for (NSInteger j = self.detailModel.startIndex; j < MIN(self.detailModel.elementCount + self.detailModel.startIndex, [resultArr[i] count]); j++) {
                CGFloat pointY = 0;
                CGFloat element = [resultArr[i][j] doubleValue];
                
                UIColor *rectColor = [UIColor redColor];
                if(0 == element){
                    pointY = 50;
                }else if(element < 0){
                    rectColor = [UIColor greenColor];
                    pointY = 50 + fabs(element/minValue) * 50;
                }else if(element > 0){
                    pointY = 50 - fabs(element/maxValue) * 50;
                }
                
                CGFloat pointX = self.detailModel.screenWidth - self.detailModel.lineWidth * (j - self.detailModel.startIndex);

                UIBezierPath *linePath = [UIBezierPath bezierPath];
                [linePath moveToPoint:CGPointMake(pointX, pointY)];
                [linePath addLineToPoint:CGPointMake(pointX, 50)];
                [linePath addLineToPoint:CGPointMake(pointX - self.detailModel.lineWidth + 1, 50)];
                [linePath addLineToPoint:CGPointMake(pointX - self.detailModel.lineWidth + 1, pointY)];
                [linePath closePath];

                CAShapeLayer *shapeLayer = [CAShapeLayer layer];
                shapeLayer.lineWidth = 1.f;
                shapeLayer.fillColor = [rectColor CGColor];
                shapeLayer.strokeColor = [[UIColor clearColor] CGColor];
                shapeLayer.path = linePath.CGPath;
                [self.painterView.layer addSublayer:shapeLayer];
            }
            
        }else{
            UIBezierPath *linePath = [UIBezierPath bezierPath];
            for (NSInteger j = self.detailModel.startIndex; j < MIN(self.detailModel.elementCount + self.detailModel.startIndex, [resultArr[i] count]); j++) {
                CGFloat pointY = 0;
                CGFloat element = [resultArr[i][j] doubleValue];
                
                if(0 == element){
                    pointY = 50;
                }else if(element < 0){
                    pointY = 50 + fabs(element/minValue) * 50;
                }else if(element > 0){
                    pointY = 50 - fabs(element/maxValue) * 50;
                }
                
                CGFloat pointX = self.detailModel.screenWidth - self.detailModel.lineWidth * (j - self.detailModel.startIndex);
                CGPoint point = CGPointMake(pointX, pointY);
                
                if(j == self.detailModel.startIndex){
                    [linePath moveToPoint:point];
                }else{
                    [linePath addLineToPoint:point];
                }
            }
            
            CAShapeLayer *shapeLayer = [CAShapeLayer layer];
            shapeLayer.lineWidth = 1.f;
            shapeLayer.strokeColor = [(UIColor *)[colorArr objectAtIndex:i] CGColor];
            shapeLayer.fillColor = [[UIColor clearColor] CGColor];
            shapeLayer.path = linePath.CGPath;
            
            [self.painterView.layer addSublayer:shapeLayer];
        }
    }
  
}

- (void)setPriceRange:(CGFloat)minValue maxValue:(CGFloat)maxValue{
    UILabel *periodLabel = [_macdInfoView viewWithTag:1];
    
    periodLabel.text = [NSString stringWithFormat:@"MACD(%@, %@, %@)", _config.shortPeriod, _config.longPeriod, _config.avgPeriod];
  
    UILabel *maxLabel = [_rightPriceView viewWithTag:1];
    UILabel *minLabel = [_rightPriceView viewWithTag:2];

    maxLabel.text = [NSString stringWithFormat:@"max:(%.3lf)", maxValue];
    minLabel.text = [NSString stringWithFormat:@"min:(%.3lf)", minValue];
}

- (void)selectedMacd:(NSArray *)resultArr idx:(NSUInteger)idx{
    
    UILabel *difLabel = [_macdInfoView viewWithTag:2];
    UILabel *deaLabel = [_macdInfoView viewWithTag:3];
    UILabel *macdLabel = [_macdInfoView viewWithTag:4];

    difLabel.text = [NSString stringWithFormat:@"DIF:%@", [(NSArray *)resultArr[0] objectAtIndex:idx]];
    deaLabel.text = [NSString stringWithFormat:@"DEA:%@", [(NSArray *)resultArr[1] objectAtIndex:idx]];
    macdLabel.text = [NSString stringWithFormat:@"MACD:%@", [(NSArray *)resultArr[2] objectAtIndex:idx]];
}

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView{
    self.detailModel.needReload = YES;
}

- (void)scrollViewDidScroll:(UIScrollView *)scrollView{    
    if(!self.detailModel.endLoading &&
       !self.detailModel.loadKlineData &&
       scrollView.contentOffset.x < self.detailModel.screenWidth * 2){
        [self loadContent];
    }else if(self.detailModel.needReload){
        [self setupLineRange];
    }
}

- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate{
    self.detailModel.needReload = NO;
}

// 高度是不变的。 只变宽度

#pragma mark lazy load
- (UIScrollView *)cadicatorScrollView{
    if(!_cadicatorScrollView){
        _cadicatorScrollView = [[UIScrollView alloc] init];
        _cadicatorScrollView.delegate = self;
        _cadicatorScrollView.backgroundColor = [UIColor grayColor];
        _cadicatorScrollView.showsHorizontalScrollIndicator = NO;
    }
    return _cadicatorScrollView;
}

- (UIView *)painterView{
    if(!_painterView){
        _painterView = [[UIView alloc] init];
        _painterView.backgroundColor = [UIColor lightGrayColor];
    }
    return _painterView;
}

- (UIView *)macdInfoView{
    if(!_macdInfoView){
        
        _macdInfoView = [[UIView alloc] init];
        _macdInfoView.backgroundColor = [UIColor brownColor];
        
        UILabel *periodLabel = [UILabel new];
        periodLabel.font = [UIFont systemFontOfSize:12];
        [_macdInfoView addSubview:periodLabel];
        periodLabel.tag = 1;
        
        UILabel *difLabel = [UILabel new];
        difLabel.font = [UIFont systemFontOfSize:12];
        [_macdInfoView addSubview:difLabel];
        difLabel.tag = 2;

        UILabel *deaLabel = [UILabel new];
        deaLabel.font = [UIFont systemFontOfSize:12];
        [_macdInfoView addSubview:deaLabel];
        deaLabel.tag = 3;
        
        UILabel *macdLabel = [UILabel new];
        macdLabel.font = [UIFont systemFontOfSize:12];
        [_macdInfoView addSubview:macdLabel];
        macdLabel.tag = 4;

        [periodLabel mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.mas_equalTo(_macdInfoView).offset(16);
            make.centerY.mas_equalTo(_macdInfoView.mas_centerY);
        }];
        
        [difLabel mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.mas_equalTo(periodLabel.mas_right).offset(16);
            make.centerY.mas_equalTo(_macdInfoView.mas_centerY);
        }];
        
        [deaLabel mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.mas_equalTo(difLabel.mas_right).offset(16);
            make.centerY.mas_equalTo(_macdInfoView.mas_centerY);
        }];
        
        [macdLabel mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.mas_equalTo(deaLabel.mas_right).offset(16);
            make.centerY.mas_equalTo(_macdInfoView.mas_centerY);
        }];
    }
    return _macdInfoView;
}

- (UIView *)rightPriceView{
    if(!_rightPriceView){
        _rightPriceView = [UIView new];
        _rightPriceView.backgroundColor = [UIColor brownColor];

        UILabel *maxPriceLabel = [UILabel new];
        [_rightPriceView addSubview:maxPriceLabel];
        maxPriceLabel.tag = 1;
        maxPriceLabel.font = [UIFont systemFontOfSize:12];
        
        UILabel *minPriceLabel = [UILabel new];
        [_rightPriceView addSubview:minPriceLabel];
        minPriceLabel.tag = 2;
        minPriceLabel.font = [UIFont systemFontOfSize:12];

        [maxPriceLabel mas_makeConstraints:^(MASConstraintMaker *make) {
            make.right.mas_equalTo(_rightPriceView).offset(-16);
            make.bottom.mas_equalTo(_rightPriceView.mas_top);
        }];
        
        [minPriceLabel mas_makeConstraints:^(MASConstraintMaker *make) {
            make.right.mas_equalTo(_rightPriceView).offset(-16);
            make.top.mas_equalTo(_rightPriceView.mas_bottom);
        }];
    }
    return _rightPriceView;
}

- (YSMACDConfig *)config{
    if(!_config){
        _config = [[YSMACDConfig alloc] init];
    }
    return _config;
}

- (YSKlineDetailModel *)detailModel{
    if(!_detailModel){
        _detailModel = [[YSKlineDetailModel alloc] init];
    }
    return _detailModel;
}


- (YSKlineViewModel *)viewModel{
    if(!_viewModel){
        _viewModel = [[YSKlineViewModel alloc] init];
        
        GTWeakObj(self);
        [_viewModel.lineDataCommond.executionSignals.switchToLatest.deliverOnMainThread
            subscribeNext:^(id  _Nullable x) {
            RACTupleUnpack(NSArray *klineValue) = x;
            
            [Weakself handMacd:klineValue];
        }];
        
        [_viewModel.lineDataCommond.errors.deliverOnMainThread
            subscribeNext:^(NSError * _Nullable x) {
            NSLog(@"error information is:(%@)", x.userInfo);
        }];
    }
    return _viewModel;
}

@end
