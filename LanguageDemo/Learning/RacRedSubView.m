//
//  RacRedSubView.m
//  LanguageDemo
//
//  Created by Bob on 2021/7/22.
//

#import "RacRedSubView.h"
#import "GTCommonInfo.h"
#import "RacRedSubSubView.h"

@interface RacRedSubView ()

@property (nonatomic, strong) RacRedSubSubView *redSubV;

@end

@implementation RacRedSubView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (id)initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if (self) {
        DSLog(@"===");
        // 当前周期 只是它自己这一层渲染
//        [self performSelector:@selector(layoutIfNeeded) withObject:nil afterDelay:5.f];
        
        // 下一个周期 只是它自己这一层渲染
//        [self performSelector:@selector(setNeedsLayout) withObject:nil afterDelay:5.f];
        
        _redSubV = [[RacRedSubSubView alloc] initWithFrame:CGRectMake(0, 50, 375, 50)];
        [self addSubview:_redSubV];
        _redSubV.backgroundColor = [UIColor brownColor];

    }
    return self;
}

- (void)drawRect:(CGRect)rect{
    [super drawRect:rect];
    
    DSLog(@"===");
}

- (void)layoutSubviews{
    [super layoutSubviews];
    
    DSLog(@"===");
}

- (void)layerWillDraw:(CALayer *)layer{
    [super layerWillDraw:layer];
    
    DSLog(@"===");
}

@end
