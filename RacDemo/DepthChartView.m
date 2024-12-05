//
//  DepthChartView.m
//  RacDemo
//
//  Created by Bob on 2024/12/5.
//

#import "DepthChartView.h"

@implementation DepthChartView

- (void)reloadData{
    [self setNeedsDisplay];
}

- (instancetype)initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if (self) {
        
        _pointArr = [[NSMutableArray alloc] initWithCapacity:10];
        
        UITapGestureRecognizer *tapGesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handleTapGesture:)];
        [self addGestureRecognizer:tapGesture];
    }
    return self;
}

- (void)handleTapGesture:(UITapGestureRecognizer *)gesture {
    CGPoint location = [gesture locationInView:self];
    
    // 根据点击位置找到对应的价格和累积数量
    DepthData *selectedData = [self findDataAtPoint:location];
    if (selectedData) {
        self.selectedPoint = location;
        self.isPointSelected = YES;
        [self setNeedsDisplay]; // 重新绘制深度图
    }
}

// 查找点击点对应的数据
- (DepthData *)findDataAtPoint:(CGPoint)point {
            
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
        for (DepthData *data in self.asks) {
            if (fabs(data.price - priceAtPoint) < 0.1) {
                return data;
            }
        }
    }
 
    if(isBid){
        // 在买单和卖单中查找最接近的价格
        for (DepthData *data in self.bids) {
            if (fabs(data.price - priceAtPoint) < 0.1) {
                return data;
            }
        }
        
    }

    return nil;
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
      if (self.isPointSelected) {
          [self drawSelectedPointInContext:context];
      }
}

- (void)drawSelectedPointInContext:(CGContextRef)context {
    // 绘制选中点
    CGFloat radius = 5.0;
    CGRect circleRect = CGRectMake(self.selectedPoint.x - radius, self.selectedPoint.y - radius, radius * 2, radius * 2);
    [[UIColor yellowColor] setFill];
    CGContextFillEllipseInRect(context, circleRect);
    
    // 显示选中点信息
    NSString *info = [NSString stringWithFormat:@"Price: %.2f\nAmount: %.2f",
                      [self findDataAtPoint:self.selectedPoint].price,
                      [self findDataAtPoint:self.selectedPoint].cumulativeAmount];
    
    // 绘制信息框
    NSDictionary *attributes = @{
        NSFontAttributeName: [UIFont systemFontOfSize:12],
        NSForegroundColorAttributeName: [UIColor whiteColor]
    };
    [info drawAtPoint:CGPointMake(self.selectedPoint.x + 10, self.selectedPoint.y - 30) withAttributes:attributes];
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
    
    for (DepthData *item in data) {
        CGFloat x = rect.origin.x + (item.price - minPrice) / (maxPrice - minPrice) * rect.size.width;
        CGFloat y = rect.origin.y + rect.size.height - (item.amount / maxCumulativeAmount) * rect.size.height;
        [path addLineToPoint:CGPointMake(x, y)];
    }
    
    // 闭合路径
    [path addLineToPoint:CGPointMake(rect.origin.x + rect.size.width, rect.origin.y + rect.size.height)];
    [path closePath];
    
    // 设置填充颜色
    [fillColor setFill];
    [path fill];
}
@end
