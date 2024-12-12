//
//  DepthChartView.m
//  RacDemo
//
//  Created by Bob on 2024/12/5.
//

#import "DepthChartView.h"

@interface DepthChartView ()

@property (nonatomic, copy) NSMutableArray *askPointArr;
@property (nonatomic, copy) NSMutableArray *bidPointArr;

@property (nonatomic, assign) CGPoint askSelectedPoint;
@property (nonatomic, assign) CGPoint bidSelectedPoint;

@property (nonatomic, strong) DepthData *askSelectedDepth;
@property (nonatomic, strong) DepthData *bidSelectedDepth;

@end

@implementation DepthChartView

- (void)reloadData{
    [self setNeedsDisplay];
}

- (instancetype)initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if (self) {
        
        _askPointArr = [[NSMutableArray alloc] initWithCapacity:10];
        _bidPointArr = [[NSMutableArray alloc] initWithCapacity:10];

//        UITapGestureRecognizer *tapGesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handleTapGesture:)];
//        [self addGestureRecognizer:tapGesture];
    }
    return self;
}

- (void)handleTapGesture:(UITapGestureRecognizer *)gesture {
    CGPoint location = [gesture locationInView:self];
    
    // 根据点击位置找到对应的价格和累积数量
    [self updateSelectedDataAtPoint:location];
    
    if (_askSelectedDepth || _bidSelectedDepth) {
        [self setNeedsDisplay]; // 重新绘制深度图
    }
}

- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    UITouch *touch = [touches anyObject];
    CGPoint currentPoint = [touch locationInView:self];

    BOOL update = [self updateSelectedDataAtPoint:currentPoint];
    if (update) {
        [self setNeedsDisplay];
    }
}

// 查找点击点对应的数据
- (BOOL)updateSelectedDataAtPoint:(CGPoint)point {
            
    CGRect rect = self.bounds;
    CGFloat minPrice = 0;
    CGFloat maxPrice = 0;
    
    CGFloat width = rect.size.width/2;
    
    BOOL isAsk = (point.x >= width);
    BOOL isBid = (point.x < width);
    
    if(isAsk){
        minPrice = [self.asks.firstObject price];
        maxPrice = [self.asks.lastObject price];
    }else{
        minPrice = [self.bids.firstObject price];
        maxPrice = [self.bids.lastObject price];
    }
    
    CGFloat xRatio = 0;
    if(isAsk){
        xRatio = (point.x - width)/ width;
    }else{
        xRatio = point.x / width;
    }
    CGFloat priceAtPoint = minPrice + xRatio * (maxPrice - minPrice);
    
    if(isAsk){
        
        __block NSUInteger index = -1;
        [self.asks enumerateObjectsUsingBlock:^(DepthData * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
            if (fabs(obj.price - priceAtPoint) < 0.1) {
                index = idx;
                *stop = YES;
                NSLog(@"#### asks index(%@)", @(idx));
                return;
            };
        }];
        
        if(-1 != index){
            _askSelectedPoint = CGPointFromString(_askPointArr[index]);
            _bidSelectedPoint = CGPointFromString(_bidPointArr[index]);

            _askSelectedDepth = self.asks[index];
            _bidSelectedDepth = self.bids[index];
        
            return YES;
        }
    }
 
    if(isBid){
        
        __block NSUInteger index = -1;
        [self.bids enumerateObjectsUsingBlock:^(DepthData * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
            if (fabs(obj.price - priceAtPoint) < 0.1) {
                index = idx;
                *stop = YES;
                NSLog(@"#### bids index(%@)", @(idx));
                return;
            };
        }];
        
        if(-1 != index){
            _askSelectedPoint = CGPointFromString(_askPointArr[index]);
            _bidSelectedPoint = CGPointFromString(_bidPointArr[index]);

            _askSelectedDepth = self.asks[index];
            _bidSelectedDepth = self.bids[index];
            
            return YES;
        }
        
    }
    
    return NO;
}

- (void)drawRect:(CGRect)rect {
    [super drawRect:rect];
    
    CGContextRef context = UIGraphicsGetCurrentContext();
    if (!context) return;
    
    // 设置背景颜色
    [[UIColor blackColor] setFill];
    CGContextFillRect(context, rect);
    
    // 绘制买单（bids）
    CGRect frame = rect;
    frame.size.width = rect.size.width/2;
    [self drawDepthWithData:self.bids inRect:frame fillColor:[UIColor greenColor] context:context];
    
    // 绘制卖单（asks）
    frame.origin.x = rect.size.width/2;
    [self drawDepthWithData:self.asks inRect:frame fillColor:[UIColor redColor] context:context];
    
    // 如果选中点存在，绘制标记和信息
    if (self.askSelectedDepth) {
        [self drawAskSelectedPointInContext:context];
    }
    
    if (self.bidSelectedDepth) {
        [self drawBidSelectedPointInContext:context];
    }
}

- (void)drawAskSelectedPointInContext:(CGContextRef)context {
    // 绘制选中点
    CGFloat radius = 5.0;
    CGRect circleRect = CGRectMake(self.askSelectedPoint.x - radius,
                                   self.askSelectedPoint.y - radius,
                                   radius * 2,
                                   radius * 2);
    [[UIColor yellowColor] setFill];
    CGContextFillEllipseInRect(context, circleRect);
    
    // 显示选中点信息
    NSString *info = [NSString stringWithFormat:@"Price: %.2f\nAmount: %.2f",
                      _askSelectedDepth.price,
                      _askSelectedDepth.cumulativeAmount];
    
    // 绘制信息框
    NSDictionary *attributes = @{
        NSFontAttributeName: [UIFont systemFontOfSize:12],
        NSForegroundColorAttributeName: [UIColor whiteColor]
    };
    [info drawAtPoint:CGPointMake(_askSelectedPoint.x + 10, _askSelectedPoint.y - 30) withAttributes:attributes];
}

- (void)drawBidSelectedPointInContext:(CGContextRef)context {
    // 绘制选中点
    CGFloat radius = 5.0;
    CGRect circleRect = CGRectMake(_bidSelectedPoint.x - radius,
                                   _bidSelectedPoint.y - radius,
                                   radius * 2,
                                   radius * 2);
    [[UIColor yellowColor] setFill];
    CGContextFillEllipseInRect(context, circleRect);
    
    // 显示选中点信息
    NSString *info = [NSString stringWithFormat:@"Price: %.2f\nAmount: %.2f",
                      _bidSelectedDepth.price,
                      _bidSelectedDepth.cumulativeAmount];
    
    // 绘制信息框
    NSDictionary *attributes = @{
        NSFontAttributeName: [UIFont systemFontOfSize:12],
        NSForegroundColorAttributeName: [UIColor whiteColor]
    };
    [info drawAtPoint:CGPointMake(_bidSelectedPoint.x + 10, _bidSelectedPoint.y - 30) withAttributes:attributes];
}

- (void)drawDepthWithData:(NSArray<DepthData *> *)data
                   inRect:(CGRect)rect
                fillColor:(UIColor *)fillColor
                  context:(CGContextRef)context {
    if (data.count == 0) return;
    
    // 数据转换
    CGFloat maxPrice = [[data lastObject] price];
    CGFloat minPrice = [[data firstObject] price];
    CGFloat maxCumulativeAmount = 20;//[[data lastObject] cumulativeAmount];
    
    // 绘制路径
    UIBezierPath *path = [UIBezierPath bezierPath];
    [path moveToPoint:CGPointMake(rect.origin.x, rect.origin.y + rect.size.height)];
        
    NSMutableArray *pointArr = [[NSMutableArray alloc] initWithCapacity:10];
    
    for (DepthData *item in data) {
        CGFloat x = rect.origin.x + (item.price - minPrice) / (maxPrice - minPrice) * rect.size.width;
        CGFloat y = rect.origin.y + rect.size.height - (item.amount / maxCumulativeAmount) * rect.size.height;
        CGPoint point = CGPointMake(x, y);
        [path addLineToPoint:point];
        
        [pointArr addObject:NSStringFromCGPoint(point)];
    }
    if (0 == rect.origin.x) {
        _bidPointArr = [pointArr mutableCopy];
    }else{
        _askPointArr = [pointArr mutableCopy];
    }
    
    // 闭合路径
    [path addLineToPoint:CGPointMake(rect.origin.x + rect.size.width, rect.origin.y + rect.size.height)];
    [path closePath];
    
    // 设置填充颜色
    [fillColor setFill];
    [path fill];
}
@end
