//
//  ViewController.m
//  LanguageDemo
//
//  Created by Bob on 2021/4/12.
//

#import "ViewController.h"
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
#import "NSObject+MJKeyValue.h"

@interface ViewController ()
<
UIScrollViewDelegate
>
@property (nonatomic, strong) UIView *kvoView;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UIImage *selectedImage;

@property (nonatomic, strong) RacRedView *racRedView;
@property (nonatomic, strong) RacRedModel *racRedModel;

@property (nonatomic, strong) UILabel *tit;


@property (nonatomic, assign) CGFloat width;

@property (nonatomic, assign) NSUInteger currentPage;
@property (nonatomic, assign) NSUInteger maxPage;

@property (nonatomic, strong) UIView *macdInfoView;
@property (nonatomic, strong) UIView *rightPriceView;

//@property (nonatomic, strong) UIView *contentView;
//@property (nonatomic, weak) MASConstraint *painterViewXConstraint;

@property (nonatomic, strong) UIScrollView *cadicatorScrollView;

@property (nonatomic, strong) YSMACDConfig *config;

@property (nonatomic, assign) CGFloat lineWidth;
@property (nonatomic, assign) CGFloat lineSpace;
@property (nonatomic, assign) CGFloat screenWidth;
@property (nonatomic, assign) NSUInteger elementCount;

@property (nonatomic, assign) BOOL loadKlineData;
@property (nonatomic, assign) BOOL endLoading;


@end

@implementation ViewController

- (UIView *)macdInfoView{
    if(!_macdInfoView){
        
        _macdInfoView = [UIView new];
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
        
        UILabel *minPriceLabel = [UILabel new];
        [_rightPriceView addSubview:minPriceLabel];
        minPriceLabel.tag = 2;
     
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

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    
    self.endLoading = NO;
    self.loadKlineData = NO;

    self.lineSpace = 0;
    self.lineWidth = 10;

    self.screenWidth = [[UIScreen mainScreen] bounds].size.width;
    self.elementCount = self.screenWidth/self.lineWidth;

    self.currentPage = 3;
    self.maxPage = 1023/self.elementCount;
    
    _config = [[YSMACDConfig alloc] init];
    [self.view addSubview:self.macdInfoView];
    [self.view addSubview:self.cadicatorScrollView];
    
    [self.view addSubview:self.rightPriceView];
    
    [self.macdInfoView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_offset(100);
        make.left.mas_equalTo(self.view);
        make.height.mas_equalTo(44);
    }];
    
    [self.cadicatorScrollView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.right.mas_equalTo(self.view);
        make.top.mas_equalTo(self.macdInfoView.mas_bottom);
        make.height.mas_equalTo(100);
    }];
    
//    [self.contentView mas_makeConstraints:^(MASConstraintMaker *make) {
//        make.top.width.height.equalTo(self.cadicatorScrollView);
//        self.painterViewXConstraint = make.left.equalTo(self.cadicatorScrollView);
//    }];
    
    [self.rightPriceView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.right.bottom.mas_equalTo(self.cadicatorScrollView);
    }];
    
    [self loadContent];
}

- (void)loadContent{
    
    if(self.loadKlineData || self.endLoading){
        NSLog(@"数据请求中/或者数据已加载完成");
        return;
    }
    
    self.loadKlineData = YES;
    NSUInteger count = self.elementCount * self.currentPage;
  
    NSString *urlStr = [NSString stringWithFormat:@"http://money.finance.sina.com.cn/quotes_service/api/json_v2.php/CN_MarketData.getKLineData?symbol=sz002096&scale=60&ma=no&datalen=%lu", count];
    [[YSHttpsRequest alloc] doGetRequestWithUrlStr:urlStr params:@{} headers:@{}
                                           success:^(NSDictionary * _Nonnull responseObject) {

        NSArray *klineValue = [YSKLineDataModel mj_objectArrayWithKeyValuesArray:responseObject];
        if(klineValue.count < count){
            NSLog(@"no more data...(%@)", @(klineValue.count));
            self.endLoading = YES;
        }else{
            self.endLoading = NO;
            NSLog(@"load data...(%@)", @(klineValue.count));
        }
        
        [YSMACDCalculator getMACD:self.config klineData:klineValue result:^(NSMutableArray * _Nonnull resultArr, CGFloat minValue, CGFloat maxValue) {
            [self setupKlineView:resultArr min:minValue max:maxValue];
            
            self.currentPage = self.currentPage + 2;
            self.loadKlineData = NO;
        }];
        
    } failure:^(NSError * _Nonnull error) {
        
        NSLog(@"error information is:%@", error.userInfo);
    }];
}

- (void)setupKlineView:(NSArray *)resultArr min:(CGFloat)minValue max:(CGFloat)maxValue{
    
    NSLog(@"###### refreshKLineView for more data...before (%@)", NSStringFromCGPoint(self.cadicatorScrollView.contentOffset));
    NSArray<CALayer *> *subLayers = self.cadicatorScrollView.layer.sublayers;
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
    
    CGFloat width = self.lineWidth * maxCount;
    self.cadicatorScrollView.contentSize = CGSizeMake(width, 100);
    self.cadicatorScrollView.contentOffset = CGPointMake(self.screenWidth * (self.currentPage - 1), 0);

    [self setPriceRange:minValue maxValue:maxValue];
    [self selectedMacd:resultArr idx:resultArr.count];
    
    NSArray *colorArr = @[[UIColor greenColor], [UIColor purpleColor], [UIColor brownColor]];
    for (NSInteger i = (resultArr.count - 1); i >= 0; i--) {

        if(2 == i){
            for (NSUInteger j = 0; j < [resultArr[i] count]; j++) {
                CGFloat pointY = 0;
                CGFloat element = [resultArr[i][j] doubleValue];
                
                UIColor *rectColor = [UIColor redColor];
                if(0 == element){
                    pointY = 50;
                }else if(element < 0){
                    rectColor = [UIColor greenColor];
                    pointY = 50 + element/minValue * 50;
                }else if(element > 0){
                    pointY = 50 - element/maxValue * 50;
                }
                
                CGFloat pointX = width - self.lineWidth * j;
                
                UIBezierPath *linePath = [UIBezierPath bezierPath];
                [linePath moveToPoint:CGPointMake(pointX, pointY)];
                [linePath addLineToPoint:CGPointMake(pointX, 50)];
                [linePath addLineToPoint:CGPointMake(pointX - self.lineWidth + 1, 50)];
                [linePath addLineToPoint:CGPointMake(pointX - self.lineWidth + 1, pointY)];
                [linePath closePath];

                CAShapeLayer *shapeLayer = [CAShapeLayer layer];
                shapeLayer.lineWidth = 1.f;
                shapeLayer.fillColor = [rectColor CGColor];
                shapeLayer.strokeColor = [[UIColor clearColor] CGColor];
                shapeLayer.path = linePath.CGPath;
                [self.cadicatorScrollView.layer addSublayer:shapeLayer];
            }
            
        }else{
            UIBezierPath *linePath = [UIBezierPath bezierPath];
            for (NSUInteger j = 0; j < [resultArr[i] count]; j++) {
                CGFloat pointY = 0;
                CGFloat element = [resultArr[i][j] doubleValue];
                
                if(0 == element){
                    pointY = 50;
                }else if(element < 0){
                    pointY = 50 - element/minValue * 50;
                }else if(element > 0){
                    pointY = 50 + element/maxValue * 50;
                }
                
                CGFloat pointX = width - self.lineWidth * j;
                CGPoint point = CGPointMake(pointX, pointY);
                
                if(j == 0){
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
            
            [self.cadicatorScrollView.layer addSublayer:shapeLayer];
        }
    }
    
    NSLog(@"###### refreshKLineView for more data... after(%@)", NSStringFromCGPoint(self.cadicatorScrollView.contentOffset));
}

- (void)setPriceRange:(CGFloat)minValue maxValue:(CGFloat)maxValue{
    UILabel *periodLabel = [_macdInfoView viewWithTag:1];
    
    periodLabel.text = [NSString stringWithFormat:@"MACD(%@, %@, %@)", _config.shortPeriod, _config.longPeriod, _config.avgPeriod];
  
    UILabel *maxLabel = [_rightPriceView viewWithTag:1];
    UILabel *minLabel = [_rightPriceView viewWithTag:2];

    maxLabel.text = [NSString stringWithFormat:@"%.3lf", maxValue];
    minLabel.text = [NSString stringWithFormat:@"%.3lf", minValue];
}

- (void)selectedMacd:(NSArray *)resultArr idx:(NSUInteger)idx{
    
    UILabel *difLabel = [_macdInfoView viewWithTag:2];
    UILabel *deaLabel = [_macdInfoView viewWithTag:3];
    UILabel *macdLabel = [_macdInfoView viewWithTag:4];

    difLabel.text = [NSString stringWithFormat:@"DIF:%@", [(NSArray *)resultArr[0] objectAtIndex:idx]];
    deaLabel.text = [NSString stringWithFormat:@"DEA:%@", [(NSArray *)resultArr[1] objectAtIndex:idx]];
    macdLabel.text = [NSString stringWithFormat:@"MACD:%@", [(NSArray *)resultArr[2] objectAtIndex:idx]];
}

- (void)scrollViewDidScroll:(UIScrollView *)scrollView{

//    if (self.cadicatorScrollView.contentOffset.x < 0) {
//        self.painterViewXConstraint.offset = 0;
//    } else {
//        self.painterViewXConstraint.offset = scrollView.contentOffset.x;
//    }
    
    if(!self.endLoading &&
       !self.loadKlineData &&
       scrollView.contentOffset.x < self.screenWidth * 2){
        [self loadContent];
    }
}

- (void)responseToPinGesture:(UIPinchGestureRecognizer *)recognizer{
    /*获取状态*/
      UIGestureRecognizerState state = [recognizer state];
      if (state == UIGestureRecognizerStateBegan || state == UIGestureRecognizerStateChanged){
         /*获取捏合大小比例*/
         CGFloat scale = [recognizer scale];
          
         /*获取捏合的速度*/
         CGFloat velocity = [recognizer velocity];
         NSLog(@"velocity %f ==== scale %f",velocity, scale);
          
         [recognizer.view setTransform:CGAffineTransformScale(recognizer.view.transform, scale, scale)];
         [recognizer setScale:1.0];
      }
}

//- (UIView *)contentView{
//    if(!_contentView){
//        _contentView = [UIView new];
//        _contentView.backgroundColor = [UIColor lightGrayColor];
//    }
//    return _contentView;
//}

- (UIScrollView *)cadicatorScrollView{
    if(!_cadicatorScrollView){
        _cadicatorScrollView = [[UIScrollView alloc] init];
        _cadicatorScrollView.delegate = self;
        _cadicatorScrollView.backgroundColor = [UIColor grayColor];
        _cadicatorScrollView.showsHorizontalScrollIndicator = NO;
        
//        [_cadicatorScrollView addSubview:self.contentView];

        UIPinchGestureRecognizer *ges = [[UIPinchGestureRecognizer alloc] initWithTarget:self
                                                                                  action:@selector(responseToPinGesture:)];
        [_cadicatorScrollView addGestureRecognizer:ges];
        
    }
    return _cadicatorScrollView;
}


@end
