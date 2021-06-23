//
//  QuartzView.m
//  LanguageDemo
//
//  Created by Bob on 2021/6/16.
//

#import "QuartzView.h"
#import <UIKit/UIKit.h>

@implementation QuartzView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection{
    [super traitCollectionDidChange:previousTraitCollection];
    
    if (@available(iOS 13.0, *)) {
        UITraitCollection *tra = [UITraitCollection currentTraitCollection];
        BOOL hasChange = [previousTraitCollection hasDifferentColorAppearanceComparedToTraitCollection:tra];
        NSLog(@"view ... has change traitCollection is:(%@)", @(hasChange));
        // 调用颜色重新改变的方案
    } else {
        // Fallback on earlier versions
    }
}
 
- (id)initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if (self) {
        NSLog(@"1111.frame:%@", NSStringFromCGRect(self.bounds));
    }
    return self;
}

- (void)drawRect:(CGRect)rect{
    [super drawRect:rect];
    NSLog(@"222222.frame:%@", NSStringFromCGRect(self.bounds));
    [self drawToBitMap:390 height:844];
}
 
- (void)drawToBitMap:(CGFloat)width height:(CGFloat)height{
 
//  为什么自建的画布就画不出来呢
//    CGContextRef myBitMapContext = [self createBitMapWidth:width height:height];
    CGContextRef myBitMapContext = UIGraphicsGetCurrentContext();
    if (NULL == myBitMapContext) {
         NSLog(@"context null...");
         return;
    }

    CGContextSetRGBFillColor(myBitMapContext, 1, 0, 0, 1);
    CGContextFillRect(myBitMapContext, CGRectMake(0, 0, 200, 100));

    CGContextSetRGBFillColor(myBitMapContext, 0, 0, 1, .5);
    CGContextFillRect(myBitMapContext, CGRectMake(0, 0, 100, 200));

    CGRect myBoundingBox = CGRectMake(0, 0, width, height);
    CGImageRef myImage = CGBitmapContextCreateImage(myBitMapContext);
    CGContextDrawImage(myBitMapContext, myBoundingBox, myImage);

    CGContextRestoreGState(myBitMapContext);
    CGImageRelease(myImage);
}

- (CGContextRef)createBitMapWidth:(int)pixW height:(int)pixH{
    
    CGContextRef    context = NULL;
    CGColorSpaceRef colorSpace;
    
    colorSpace = CGColorSpaceCreateWithName(kCGColorSpaceGenericRGB);
    
    GLubyte *bitmapData = (GLubyte *)malloc(pixW * pixH * 4);

    if(NULL == bitmapData){
        NSLog(@"bitmapData null...");
        return NULL;
    }
    
    context = CGBitmapContextCreate(bitmapData,
                                    pixW,
                                    pixH,
                                    8,
                                    pixW * 4,
                                    colorSpace,
                                    kCGImageAlphaPremultipliedLast);
    if(NULL == context){
        NSLog(@"context null...");
        free(bitmapData);
        return  NULL;
    }
    
    CGColorSpaceRelease(colorSpace);
    
    return  context;
}
 
@end
