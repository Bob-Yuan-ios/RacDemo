//
//  YSChromaKeyFilter.m
//  YSImageFilter
//
//  Created by bob yuan on 2021/7/21.
//  Copyright © 2021年 helloWorld. All rights reserved.
//

#import "YSChromaKeyFilter.h"

@interface YSChromaKeyFilter ()
@end

@implementation YSChromaKeyFilter
- (instancetype)initWithInputImage:(UIImage *)image
                   backgroundImage:(UIImage *)bgImage{
    self = [super init];
    
    if (self) {
        self.inputFilterImage = image;
        self.backgroundImage = bgImage;
        
    }
    

    
    return self;
    
}

#pragma mark -- 第一种实现
- (CIFilter*) chromaKeyFilterHuesFrom:(CGFloat)minHue to:(CGFloat)maxHue
{
    // 1
    const unsigned int size = 64;
    const size_t cubeDataSize = size * size * size * 4;
    NSMutableData* cubeData = [[NSMutableData alloc] initWithCapacity:(cubeDataSize * sizeof(float))];
    
    // 2
    for (int z = 0; z < size; z++) {
        CGFloat blue = ((double)z)/(size-1);
        for (int y = 0; y < size; y++) {
            CGFloat green = ((double)y)/(size-1);
            for (int x = 0; x < size; x++) {
                CGFloat red = ((double)x)/(size-1);
                
                // 3
                CGFloat hue = [self hueFromRed:red green:green blue:blue];
                float alpha = (hue >= minHue && hue <= maxHue) ? 0 : 1;
                // 4
                float premultipliedRed = red * alpha;
                float premultipliedGreen = green * alpha;
                float premultipliedBlue = blue * alpha;
                [cubeData appendBytes:&premultipliedRed length:sizeof(float)];
                [cubeData appendBytes:&premultipliedGreen length:sizeof(float)];
                [cubeData appendBytes:&premultipliedBlue length:sizeof(float)];
                [cubeData appendBytes:&alpha length:sizeof(float)];
            }
        }
    }

    // 5
    CIFilter* chromaKeyFilter = [CIFilter filterWithName:@"CIColorCube"];
    [chromaKeyFilter setValue:@(size) forKey:@"inputCubeDimension"];
    [chromaKeyFilter setValue:cubeData forKey:@"inputCubeData"];
    return chromaKeyFilter;
}

- (CGFloat) hueFromRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue
{
    UIColor* color = [UIColor colorWithRed:red green:green blue:blue alpha:1];
    
    CGFloat hue, saturation, brightness;
    [color getHue:&hue saturation:&saturation brightness:&brightness alpha:nil];
    
    return hue;
}

#ifdef DEBUG
- (CIImage *)outputImage{
    
    CIFilter* chromaKeyFilter = [self chromaKeyFilterHuesFrom:85 to:155];
    [chromaKeyFilter setValue:self.inputFilterImage forKey:kCIInputImageKey];
    CIImage* sourceCIImageWithoutBackground = chromaKeyFilter.outputImage;
    
    CIFilter* compositor = [CIFilter filterWithName:@"CISourceOverCompositing"];
    [compositor setValue:sourceCIImageWithoutBackground forKey:kCIInputImageKey];
    [compositor setValue:self.backgroundImage forKey:kCIInputBackgroundImageKey];
    return compositor.outputImage;
}


#else
- (CIImage *)outputImage{
    
    CIFilter *colorCubeFilter = [CIFilter filterWithName:@"CIColorCube"];
    
    // Allocate memory
    const unsigned int size = 64;
    double cubeDataSize = size * size * size * sizeof (float) * 4;
    float *cubeData = (float *)malloc (cubeDataSize);
    [colorCubeFilter setValue:@(size) forKey:@"inputCubeDimension"];
    
    CIImage *myImage = [[CIImage alloc] initWithImage:self.inputFilterImage];
    [colorCubeFilter setValue:myImage forKey:kCIInputImageKey];
     
    float rgb[3], hsv[3], *c = cubeData;
    // Populate cube with a simple gradient going from 0 to 1
    for (int z = 0; z < size; z++){
        rgb[2] = ((double)z)/(size-1); // Blue value
        for (int y = 0; y < size; y++){
            rgb[1] = ((double)y)/(size-1); // Green value
            for (int x = 0; x < size; x ++){
                rgb[0] = ((double)x)/(size-1); // Red value
                // Convert RGB to HSV
                // You can find publicly available rgbToHSV functions on the Internet
                RGBtoHSV(rgb[0],rgb[1],rgb[2], &hsv[0],&hsv[1],&hsv[2]);
                //green  
                //                float alpha = (hsv[0] > 80 && hsv[0] < 160) ? 0.0f:1.0f;
                //颜色判断 
                float alpha = (hsv[0] >=85 && hsv[0] <= 155) ? 0.0f:1.0f;
                //饱和度
                if (hsv[1]<0.2) {
                    alpha=1.0f;
                }
                //亮度
                if (hsv[2]<0.2) {
                    alpha=1.0f;
                }
                //blue        float alpha = (hsv[0] > 210 && hsv[0] < 270) ? 0.0f:1.0f;
                
                // Calculate premultiplied alpha values for the cube
                c[0] = rgb[0] * alpha;
                c[1] = rgb[1] * alpha;
                c[2] = rgb[2] * alpha;
                c[3] = alpha;
                c += 4;
            }
        }
    }

    
    // Create memory with the cube data
    NSData *data = [NSData dataWithBytesNoCopy:cubeData
                                        length:cubeDataSize
                                  freeWhenDone:YES];
    [colorCubeFilter setValue:data forKey:@"inputCubeData"];
  
    myImage = [colorCubeFilter outputImage];
    
    
#pragma mark 组合
    CIImage *backgroundCIImage = [[CIImage alloc] initWithImage:self.backgroundImage];
    CIImage *resulImage = [[CIFilter filterWithName:@"CISourceOverCompositing" 
                                      keysAndValues:kCIInputImageKey,myImage,kCIInputBackgroundImageKey,backgroundCIImage,nil] 
                           valueForKey:kCIOutputImageKey];

    return resulImage;
}
#endif

void RGBtoHSV( float r, float g, float b, float *h, float *s, float *v ){
    float min, max, delta;
    min = MIN( r, MIN(g, b) );
    max = MAX( r, MAX(g, b) );
    *v = max;                // v
    delta = max - min;
    if( max != 0 )
        *s = delta / max;      // s
    else {
        // r = g = b = 0       // s = 0, v is undefined
        *s = 0;
        *h = -1;
        return;
    }
    if( r == max )
        *h = ( g - b ) / delta;        // between yellow & magenta
    else if( g == max )
        *h = 2 + ( b - r ) / delta; // between cyan & yellow
    else
        *h = 4 + ( r - g ) / delta; // between magenta & cyan
    *h *= 60;               // degrees
    if( *h < 0 )
        *h += 360;
}

@end
