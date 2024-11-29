//
//  UIImageView+Filter.m
//  RacDemo
//
//  Created by Bob on 2021/7/23.
//

#import "UIImageView+Filter.h"

@implementation UIImageView (Filter)


/// 调整图片尺寸
/// @param sourceImage 原始图片
- (UIImage *)reSizeImage:(UIImage *)sourceImage{
        
    CGFloat sWidth = self.frame.size.width;
    CGFloat sHeight = self.frame.size.height;
    CGFloat maxImageSize = sWidth > sHeight ? sWidth : sHeight;
    
    CGSize imageSize = sourceImage.size;
    CGFloat tempWidth = imageSize.width / maxImageSize;
    CGFloat tempHeight = imageSize.height / maxImageSize;

    CGFloat scale = 1;
    if (tempWidth > 1.0 && tempWidth > tempHeight) {
        scale = tempWidth;
    } else if (tempHeight > 1.0 && tempWidth < tempHeight){
        scale = tempHeight;
    }

    if (scale <= 1) return sourceImage;
    
    CGSize newSize = CGSizeMake(imageSize.width / scale, imageSize.height / scale);
    
    if (@available(iOS 10.0, *)) {
        UIGraphicsImageRendererFormat *format = [[UIGraphicsImageRendererFormat alloc] init];
        format.prefersExtendedRange = YES;
        UIGraphicsImageRenderer *renderer = [[UIGraphicsImageRenderer alloc] initWithSize:newSize format:format];
        __weak typeof(self) weakSelf = self;
        return [renderer imageWithActions:^(UIGraphicsImageRendererContext * _Nonnull rendererContext) {
                return [weakSelf.layer renderInContext:rendererContext.CGContext];
            }];
    }else{
        // Fallback on earlier versions
        UIGraphicsBeginImageContextWithOptions( newSize, NO, sourceImage.scale);
        [sourceImage drawAtPoint:CGPointZero];

        CGContextScaleCTM(UIGraphicsGetCurrentContext(), scale, scale);
        [self.layer renderInContext:UIGraphicsGetCurrentContext()];
        UIImage *tmpImage = UIGraphicsGetImageFromCurrentImageContext();
        UIGraphicsEndImageContext();

        return tmpImage;
    }
}

@end
