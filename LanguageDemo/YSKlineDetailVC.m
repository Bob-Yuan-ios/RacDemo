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

#import "AppDelegate.h"

@interface YSKlineDetailVC ()<UIScrollViewDelegate>

@property (nonatomic, strong) UIView *macdInfoView;
@property (nonatomic, strong) UIView *rightPriceView;

// 滑动只绘制时间
@property (nonatomic, strong) UIScrollView  *mainScrollView;
@property (nonatomic, strong) UIView        *mainPainterView;

@property (nonatomic, weak)   MASConstraint *painterViewXConstraint;
@property (nonatomic, assign) CGFloat       oldContentOffsetX; // 旧的contentoffset值

// 绘制k线
@property (nonatomic, strong) UIView        *macdPainterView;


@property (nonatomic, assign) BOOL          firstLoadData;

@property (nonatomic, strong) YSMACDConfig *config;
@property (nonatomic, strong) YSKlineViewModel *viewModel;
@property (nonatomic, strong) YSKlineDetailModel *detailModel;

@end

@implementation YSKlineDetailVC


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = @"根视图-2";
    self.view.backgroundColor = [UIColor whiteColor];
    
    [self addChildView];
    [self addChildConstraints];
    
    _firstLoadData = NO;
    [self loadContent];
}

- (void)dealloc{
    NSLog(@"########:%s", __func__);
}


- (void)addChildView{
    [self.view addSubview:self.macdInfoView];
    [self.view addSubview:self.mainScrollView];
    [self.mainScrollView addSubview:self.mainPainterView];
//    [self.mainScrollView addSubview:self.macdPainterView];
    
    [self.view addSubview:self.rightPriceView];
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
    [self.view addSubview:btn];
    
    [btn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_offset(20);
        make.right.bottom.mas_offset(-20);
        make.height.mas_equalTo(44);
    }];
    
    btn.backgroundColor = [UIColor yellowColor];
    [btn addTarget:self action:@selector(changeRootViewController) forControlEvents:UIControlEventTouchUpInside];
}

- (void)changeRootViewController{
    AppDelegate *delegate = (AppDelegate *)[UIApplication sharedApplication].delegate;
    [delegate launchObjCRootViewController];
}

- (void)addChildConstraints{
 
    [self.macdInfoView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_offset(100);
        make.left.mas_equalTo(self.view);
        make.height.mas_equalTo(44);
    }];
    
    [self.mainScrollView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(self.macdInfoView.mas_bottom).mas_offset(100);
        make.left.right.mas_equalTo(self.view);
        make.height.mas_equalTo(200);
    }];
    
    [self.mainPainterView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.width.mas_equalTo(self.mainScrollView);
        make.height.mas_equalTo(100);
        self.painterViewXConstraint = make.left.equalTo(self.mainScrollView);
    }];
    
//    [self.macdPainterView mas_makeConstraints:^(MASConstraintMaker *make) {
//        make.top.mas_equalTo(self.mainPainterView.mas_bottom);
//        make.width.mas_equalTo(self.mainPainterView);
//        make.height.mas_equalTo(100);
//        self.painterViewXConstraint = make.left.equalTo(self.mainScrollView);
//    }];
//
//    [self.rightPriceView mas_makeConstraints:^(MASConstraintMaker *make) {
//        make.top.right.bottom.mas_equalTo(self.mainScrollView);
//    }];
}

- (void)loadContent{
    
    if(self.detailModel.loadKlineData){
        NSLog(@"数据请求中...");
        return;
    }else if(self.detailModel.endLoading){
        NSLog(@"数据已加载完成...");
        return;
    }
    
    self.detailModel.loadKlineData = YES;
    self.viewModel.count = [self.detailModel getCurrentTotalCount];
    [self.viewModel.lineDataCommond execute:nil];
}

- (void)handMacd{
       
    if(self.detailModel.sourceLineArr.count < self.viewModel.count){
        NSLog(@"no more data...(%@)", @(self.detailModel.sourceLineArr.count));
        self.detailModel.endLoading = YES;
    }else{
        self.detailModel.endLoading = NO;
        NSLog(@"load data...(%@)", @(self.detailModel.sourceLineArr.count));
    }
 
    if(self.oldContentOffsetX <= 0){
        CGFloat contentSizeW = self.detailModel.sourceLineArr.count * self.detailModel.lineWidth;
        self.mainScrollView.contentSize = CGSizeMake(contentSizeW, 200);
        CGFloat offset = self.mainScrollView.frame.size.width * 2;
        
        self.detailModel.currentPage = self.detailModel.currentPage + 2;
        self.detailModel.loadKlineData = NO;
        
        [self.mainScrollView setContentOffset:CGPointMake(MAX(offset, 0), 0) animated:NO];
    }
}

- (void)setupLineRange{
     
    if(self.detailModel.loadKlineData) {
        NSLog(@"return with isLoading...");
        return;
    }
    
    CGFloat scrollViewOffsetX = self.mainScrollView.contentOffset.x < 0 ? 0 : self.mainScrollView.contentOffset.x;
    NSUInteger leftArrCount = floor(scrollViewOffsetX / self.detailModel.lineWidth);
    
    self.detailModel.startIndex = leftArrCount;
    self.detailModel.endIndex = self.detailModel.startIndex + self.detailModel.elementCount;
    
//    [YSMACDCalculator getKlineRangeData:self.detailModel.macdLineArr startIndex:self.detailModel.startIndex elementCount:self.detailModel.elementCount result:^(CGFloat minValue, CGFloat maxValue) {
//        [self setupMACDView:self.detailModel.macdLineArr min:minValue max:maxValue];
//    } failure:^{
//        NSLog(@"failure");
//    }];
    
    [YSKLineCalculator getKLineRange:self.detailModel.sourceLineArr startIndex:self.detailModel.startIndex elementCount:self.detailModel.elementCount result:^(CGFloat minValue, CGFloat maxValue) {
        [self setupMainMapViewMin:minValue max:maxValue];
    }];
}

- (void)setupMainMapViewMin:(CGFloat)minValue max:(CGFloat)maxValue{
    
    NSArray<CALayer *> *subLayers = self.mainPainterView.layer.sublayers;
    NSArray<CALayer *> *removedLayers = [subLayers filteredArrayUsingPredicate:[NSPredicate predicateWithBlock:^BOOL(id  _Nullable evaluatedObject, NSDictionary<NSString *,id> * _Nullable bindings) {
        return [evaluatedObject isKindOfClass:[CAShapeLayer class]];
    }]];
    [removedLayers enumerateObjectsUsingBlock:^(CALayer * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        [obj removeFromSuperlayer];
    }];
    
 
    CGFloat element = 95/(maxValue - minValue);
    
    NSLog(@"startIndex===(%@)", @(self.detailModel.startIndex));
    for (NSInteger j = self.detailModel.startIndex; j < self.detailModel.elementCount + self.detailModel.startIndex; j++) {
       
        YSKLineDataModel *dataModel = self.detailModel.sourceLineArr[j];
        UIColor *rectColor = [UIColor redColor];
        
        CGFloat closePrice = dataModel.close.doubleValue;
        CGFloat openPrice = dataModel.open.doubleValue;
        CGFloat hightPrice = dataModel.high.doubleValue;
        CGFloat lowPrice = dataModel.low.doubleValue;

        CGFloat pointX = self.detailModel.lineWidth * (j - self.detailModel.startIndex);

        UIBezierPath *rectPath;
        rectPath.lineWidth = 1.f;
        
        if(closePrice - openPrice < 0) {
            rectColor = [UIColor greenColor];
            CGRect rectFrame = CGRectMake(pointX,
                                          100 - element * (maxValue - openPrice),
                                          self.detailModel.lineWidth + 1,
                                          100 - element * (maxValue - closePrice));
            rectPath = [UIBezierPath bezierPathWithRect:rectFrame];
        }else{
            CGRect rectFrame = CGRectMake(pointX,
                                          100 - element * (maxValue - closePrice),
                                          self.detailModel.lineWidth + 1,
                                                           100 - element * (maxValue - openPrice));
            rectPath = [UIBezierPath bezierPathWithRect:rectFrame];        }

        CAShapeLayer *shapeLayer = [CAShapeLayer layer];
        shapeLayer.lineWidth = 1.f;
        shapeLayer.fillColor = [rectColor CGColor];
        shapeLayer.strokeColor = [[UIColor clearColor] CGColor];
        
        shapeLayer.path = rectPath.CGPath;
        [self.mainPainterView.layer addSublayer:shapeLayer];
        
    }
}

- (void)setupMACDView:(NSArray *)resultArr min:(CGFloat)minValue max:(CGFloat)maxValue{

    return;
    NSArray<CALayer *> *subLayers = self.macdPainterView.layer.sublayers;
    NSArray<CALayer *> *removedLayers = [subLayers filteredArrayUsingPredicate:[NSPredicate predicateWithBlock:^BOOL(id  _Nullable evaluatedObject, NSDictionary<NSString *,id> * _Nullable bindings) {
        return [evaluatedObject isKindOfClass:[CAShapeLayer class]];
    }]];
    [removedLayers enumerateObjectsUsingBlock:^(CALayer * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        [obj removeFromSuperlayer];
    }];
    
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
                
                CGFloat pointX = self.detailModel.lineWidth * (j - self.detailModel.startIndex);

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
                [self.macdPainterView.layer addSublayer:shapeLayer];
            }
            
        }else{
            UIBezierPath *linePath = [UIBezierPath bezierPath];
            for (NSInteger j = self.detailModel.startIndex; j < MAX(self.detailModel.elementCount + self.detailModel.startIndex, [resultArr[i] count]); j++) {
                CGFloat pointY = 0;
                CGFloat element = [resultArr[i][j] doubleValue];
                
                if(0 == element){
                    pointY = 50;
                }else if(element < 0){
                    pointY = 50 + fabs(element/minValue) * 50;
                }else if(element > 0){
                    pointY = 50 - fabs(element/maxValue) * 50;
                }
                
                CGFloat pointX = self.detailModel.lineWidth * (j - self.detailModel.startIndex);
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
            
            [self.macdPainterView.layer addSublayer:shapeLayer];
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

#pragma mark scrollview delegate method
- (void)scrollViewDidScroll:(UIScrollView *)scrollView{

    self.oldContentOffsetX = self.mainScrollView.contentOffset.x;
    
    if (self.mainScrollView.contentOffset.x < 0) {
        self.painterViewXConstraint.offset = 0;
        [self loadContent];
    } else {
        self.painterViewXConstraint.offset = scrollView.contentOffset.x;
        [self setupLineRange];
    }

}

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView{
    
}

- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate{
    
}


- (void)tapKlinePoint:(UITapGestureRecognizer *)ges{
    CGPoint point = [ges locationInView:self.mainPainterView];
    NSInteger pointIndex = (point.x + self.mainScrollView.contentOffset.x)/self.detailModel.lineWidth;
    if(self.detailModel.sourceLineArr.count > pointIndex){
        NSLog(@"###### pointIndex:%@ value:(%@)", @(pointIndex), self.detailModel.sourceLineArr[pointIndex]);
    }else{
        NSLog(@"###### pointIndex:(%@) count:(%@)", @(pointIndex), @(self.detailModel.sourceLineArr.count));
    }
}
    
#pragma mark lazy load
- (UIScrollView *)mainScrollView{
    if(!_mainScrollView){
        _mainScrollView = [[UIScrollView alloc] init];
        _mainScrollView.delegate = self;
        _mainScrollView.showsHorizontalScrollIndicator = NO;
        _mainScrollView.backgroundColor = [UIColor yellowColor];

    }
    return _mainScrollView;
}

- (UIView *)mainPainterView{
    if(!_mainPainterView){
        _mainPainterView = [[UIView alloc] init];
        _mainPainterView.backgroundColor = [UIColor purpleColor];
        
        UITapGestureRecognizer *tapGes = [[UITapGestureRecognizer alloc] initWithTarget:self
                                                                                 action:@selector(tapKlinePoint:)];
        [_mainPainterView addGestureRecognizer:tapGes];
    }
    return _mainPainterView;
}

- (UIView *)macdPainterView{
    if(!_macdPainterView){
        _macdPainterView = [[UIView alloc] init];
        _macdPainterView.backgroundColor = [UIColor lightGrayColor];
    }
    return _macdPainterView;
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
        
        YSWeakSelf(self);
        [_viewModel.lineDataCommond.executionSignals.switchToLatest.deliverOnMainThread
            subscribeNext:^(id  _Nullable x) {
            RACTupleUnpack(NSArray *klineValue) = x;

            YSStronSelf(self);
            self.detailModel.sourceLineArr = [klineValue mutableCopy];
            [self handMacd];
        }];

        [_viewModel.lineDataCommond.errors.deliverOnMainThread
            subscribeNext:^(NSError * _Nullable x) {
            NSLog(@"error information is:(%@)", x.userInfo);
            YSStronSelf(self);
            self.detailModel.loadKlineData = NO;
        }];
    }
    return _viewModel;
}

@end
