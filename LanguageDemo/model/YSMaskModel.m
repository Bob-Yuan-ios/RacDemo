//
//  YSMaskModel.m
//  LanguageDemo
//
//  Created by Bob on 2021/7/21.
//

#import "YSMaskModel.h"

@implementation YSMaskModel

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (void)addMaskFaceV:(UIImageView *)imageV{
    
    NSDictionary *opts = [NSDictionary dictionaryWithObject:CIDetectorAccuracyHigh
                                                     forKey:CIDetectorAccuracy];

    CIDetector *detector = [CIDetector detectorOfType:CIDetectorTypeFace context:nil options:opts];
    
    
    CIImage *image = [[CIImage alloc] initWithImage:imageV.image];
    NSArray *faceArray = [detector featuresInImage:image
                                           options:nil];
    
    CIImage *maskImage = nil;
    for (CIFeature *f in faceArray) {
        
        CGPoint origin = f.bounds.origin;
        CGSize size = f.bounds.size;
        
        CGFloat centerX = origin.x + size.width / 2;
        CGFloat centerY = origin.y + size.height / 2;
        
        CGFloat radius = MIN(size.width, size.height) / 2;
        
        CIFilter *radG = [CIFilter filterWithName:@"CIRadialGradient"
                              withInputParameters:@{
                                  @"inputRadius0": @(radius),
                                  @"inputRadius1": @(radius + 1.0f),
                                  @"inputColor0": [CIColor colorWithRed:0.0 green:1.0 blue:0.0 alpha:1.0],
                                  @"inputColor1": [CIColor colorWithRed:0.0 green:0.0 blue:0.0 alpha:0.0],
                                  kCIInputCenterKey: [CIVector vectorWithX:centerX Y:centerY],
                              }];
        
        CIImage *circleImage = [radG valueForKey:kCIOutputImageKey];
        if (nil == maskImage) {
            maskImage = circleImage;
        }else{
            CIFilter *maskF = [CIFilter filterWithName:@"CISourceOverCompositing" withInputParameters:@{
                                    kCIInputImageKey: circleImage,
                                    kCIInputBackgroundImageKey: maskImage,
                               }];
            maskImage = [maskF valueForKey:kCIOutputImageKey];
        }
    }

    CIImage *backgroundCIImage = [[CIImage alloc] initWithImage:imageV.image];
    CIImage *resulImage = [[CIFilter filterWithName:@"CISourceOverCompositing"
                                      keysAndValues:kCIInputImageKey,maskImage,kCIInputBackgroundImageKey,backgroundCIImage,nil]
                           valueForKey:kCIOutputImageKey];

    imageV.image = [UIImage imageWithCIImage:resulImage];
}


@end
