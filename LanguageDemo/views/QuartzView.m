//
//  QuartzView.m
//  LanguageDemo
//
//  Created by Bob on 2021/6/16.
//

#import "QuartzView.h"
#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>
 
@interface QuartzView ()

@property (nonatomic, strong) CALayer     *imgLayer;
@property (nonatomic, strong) UIImageView *defImg;
@end

@implementation QuartzView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (CALayer *)imgLayer{
    if (!_imgLayer) {
        _imgLayer = [[CALayer alloc] init];
        _imgLayer.contents = (__bridge id _Nullable)([UIImage imageNamed:@"deposit_fait"].CGImage);
//        // 不转换成 CGImage类型，将无法显示 存储位图
//        _imgLayer.contents = [UIImage imageNamed:@"deposit_fait"];
        _imgLayer.backgroundColor = [UIColor yellowColor].CGColor;
        _imgLayer.frame = CGRectMake(100, 200, 24, 24);
    }
    return _imgLayer;
}

- (UIImageView *)defImg{
    if (!_defImg) {
        _defImg = [[UIImageView alloc] initWithFrame:CGRectMake(100, 200, 24, 24)];
        _defImg.image = [UIImage imageNamed:@"deposit_fait"];
    }
    return _defImg;
}

 
- (void)layoutSubviews{
    [super layoutSubviews];
    
}

- (void)drawRect:(CGRect)rect{
    [super drawRect:rect];
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [self addSubview:btn];
    
    CGRect frame = rect;
    frame.size.width /= 2;
    frame.size.height /= 2;
    
    btn.frame = frame;
 
    btn.backgroundColor = [UIColor purpleColor];
    [btn addTarget:self action:@selector(btnAction) forControlEvents:UIControlEventTouchUpInside];
}
 
//- (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection{
//    [super traitCollectionDidChange:previousTraitCollection];
//
//    if (@available(iOS 13.0, *)) {
//        UITraitCollection *tra = [UITraitCollection currentTraitCollection];
//        BOOL hasChange = [previousTraitCollection hasDifferentColorAppearanceComparedToTraitCollection:tra];
//
//        dispatch_async(dispatch_get_global_queue(0, 0), ^{
//            NSLog(@"view ... has change traitCollection is:(%@)", @(hasChange));
//        });
//        NSLog(@"2222z$$$$$$$$$");
//        // 调用颜色重新改变的方案
//    } else {
//        // Fallback on earlier versions
//    }
//}
 
- (id)initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if (self) {
  
        [self addSubview:self.defImg];
        
        self.backgroundColor = [UIColor lightGrayColor];
       
    }
    return self;
}

- (void)btnAction{
    NSLog(@"btn action time:(%@)", [NSDate date]);
}
 
//- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event{
//    NSLog(@"click ...");
//    if ([self pointInside:point withEvent:event] ) {
//        return self;
//    }
//    
//    return nil;
//}

//- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
//    NSLog(@"touches began...");
//}

- (void)drawConText:(CGRect)rect{
 
    CGContextRef myContext = UIGraphicsGetCurrentContext();
    CGContextSaveGState(myContext);

    // 设置字形变换矩阵为CGAffineTransformIdentity，也就是说每一个字形都不做图形变换
    CGContextSetTextMatrix(myContext, CGAffineTransformIdentity);
    // 坐标转换，UIKit 坐标原点在左上角，CoreText 坐标原点在左下角
    CGContextTranslateCTM(myContext, 0.0f, rect.size.height);
    CGContextScaleCTM(myContext, 1.0f, -1.0f);
    
    NSString *content = @"hello world";
    NSDictionary *txtDic = @{NSFontAttributeName: [UIColor yellowColor]};
    NSMutableAttributedString *attStr = [[NSMutableAttributedString alloc] initWithString:content
                                                                               attributes:txtDic];
    //生成CTFramesetter
    CTFramesetterRef framesetter = CTFramesetterCreateWithAttributedString((CFAttributedStringRef)attStr);
    CFRelease(framesetter);
    
    
    //生成CTFrame
    CGMutablePathRef path = CGPathCreateMutable();
    CGPathAddRect(path, NULL, CGRectMake(0, 0, 100, 100));
    CTFrameRef frame = CTFramesetterCreateFrame(framesetter, CFRangeMake(0, [attStr length]), path, NULL);

    //获取一共有多少行
    CFArrayRef lines = CTFrameGetLines(frame);

    CFRelease(frame);
    CGPathRelease(path);
    
   int lineCount = (int)CFArrayGetCount(lines);
    
    
   CGPoint points[lineCount];
   CTFrameGetLineOrigins(frame, CFRangeMake(0, 0), points);
    
   CGFloat ascent  = 0;   //上行高度
   CGFloat descent = 0;   //下行高度
   CGFloat leading = 0;   //行距
    
   for (int i = 0; i < lineCount; i ++) {//外层for循环，为了取到所有的 CTLine
       CTLineRef line = CFArrayGetValueAtIndex(lines, i);
       
       CFArrayRef glyphRuns = CTLineGetGlyphRuns(line);
       int runCount = (int)CFArrayGetCount(glyphRuns);
       for (int j = 0; j < runCount ; j ++) {//内层for循环，检查每个 CTRun
           CTRunRef run = CFArrayGetValueAtIndex(glyphRuns, j);
           CFDictionaryRef attributes = CTRunGetAttributes(run);
           CTRunDelegateRef delegate = CFDictionaryGetValue(attributes, kCTRunDelegateAttributeName);;//获取代理属性
           if (delegate == nil)  continue;

           CGRect boundsRun;
           
           //获取宽、高
           boundsRun.size.width  = CTRunGetTypographicBounds(run, CFRangeMake(0, 0), &ascent, &descent, &leading);
           boundsRun.size.height = ascent + fabs(descent) + leading;
       }
   }
    
    
    CGContextRestoreGState(myContext);
}
 
@end
