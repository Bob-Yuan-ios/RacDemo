//
//  YSTextField.m
//  LanguageDemo
//
//  Created by Bob on 2021/6/5.
//

#import "YSTextField.h"

@implementation YSTextField

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (id)init{
    self = [super init];
    if (self) {
        self.layer.cornerRadius = 4.f;
        self.layer.borderWidth = 1.f;
        self.layer.borderColor = [UIColor lightGrayColor].CGColor;
    }
    return self;
}

//提示语距离边框的位置
- (CGRect)placeholderRectForBounds:(CGRect)bounds{
    return CGRectInset(bounds, 15, 0);
}

//刚开始输入时，文字距离边框的位置
- (CGRect)editingRectForBounds:(CGRect)bounds{
    return CGRectInset(bounds, 15, 0);
}

//完成输入后，文字距离边框的位置
- (CGRect)textRectForBounds:(CGRect)bounds{
    return CGRectInset(bounds, 15, 0);
}
@end
