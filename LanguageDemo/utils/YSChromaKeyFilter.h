//
//  YSChromaKeyFilter.h
//  LanguageDemo
//
//  Created by Bob on 2021/7/21.
//  绿幕特效

#import <UIKit/UIKit.h>

@interface YSChromaKeyFilter : CIFilter

- (instancetype)initWithInputImage:(UIImage *)image
                   backgroundImage:(UIImage *)bgImage;

@property (nonatomic,readwrite,strong) UIImage *backgroundImage;
@property (nonatomic,readwrite,strong) UIImage *inputFilterImage;

@end
