//
//  ViewController.m
//  LanguageDemo
//
//  Created by Bob on 2021/4/12.
//

#import "ViewController.h"
#import <Masonry/Masonry.h>

#import "RacRedVM.h"
#import "RacRedView.h"

#import "GTRACLearnM.h"

#import "GTTestAlloc.h"
#import "QuartzView.h"

#import "GTDarkConfigM.h"
#import "GTObject.h"

#import <objc/runtime.h>
#import <malloc/malloc.h>

#import <AFNetworking/AFNetworking.h>
 
#import "TitleRepeatV.h"
#import "ThreadModel.h"
 
#import "UIImage+ChangeColor.h"

@interface ViewController ()
<
UIScrollViewDelegate
>
@property (nonatomic, strong) UIView *kvoView;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UIImage *selectedImage;

@property (nonatomic, strong) RacRedView *racRedView;
@property (nonatomic, strong) RacRedModel *racRedModel;

@property (nonatomic, strong) UILabel *tit;

@property (nonatomic, strong) GTObject *obj1;
@property (nonatomic, strong) GTObject *obj2;
@property (nonatomic, weak)   GTObject *objWeak;
 
@property (nonatomic, assign) CGFloat width;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    [self testTintColor];
}

- (void)testTintColor{
    NSArray *imageArr = @[@"btc_cell_icon", @"eth_cell_icon", @"usdt_cell_icon", @"xrp_cell_icon"];
    
    NSInteger i = 0;
    UIColor *tColor = [UIColor grayColor];
    
    for (NSString *imageStr in imageArr) {
        
        UIImageView *imgV1 = [[UIImageView alloc] initWithFrame:CGRectMake(50, 50 + i * 50, 24, 24)];
        [self.view addSubview:imgV1];
        [imgV1 setImage:[UIImage imageNamed:imageStr]];
        
        
        UIImageView *imgV2 = [[UIImageView alloc] initWithFrame:CGRectMake(150, 50 + i * 50, 24, 24)];
        [self.view addSubview:imgV2];
        if ([imageStr containsString:@"eth"] ||
            [imageStr containsString:@"xrp"]) {
            [imgV2 setImage:[UIImage imageNamed:imageStr]];
            imgV2.alpha = 0.5;
        }else{
            [imgV2 setImage:[[UIImage imageNamed:imageStr] imageWithRenderingMode:UIImageRenderingModeAlwaysTemplate]];
            imgV2.tintColor = tColor;
        }
     
        i++;
    }
}

+ (UIImage *)changeImage:(UIImage *)img withColor:(UIColor *)color {
    // 获取画布
    UIGraphicsBeginImageContextWithOptions(img.size, NO, img.scale);
    CGContextRef context = UIGraphicsGetCurrentContext();
    //移动图片
    CGContextTranslateCTM(context, 0, img.size.height);
    CGContextScaleCTM(context, 1.0, -1.0);
    //模式配置
    CGContextSetBlendMode(context, kCGBlendModeNormal);
    CGRect rect = CGRectMake(0, 0, img.size.width, img.size.height);
    CGContextClipToMask(context, rect, img.CGImage);
    [color setFill];
    CGContextFillRect(context, rect);
    //创建获取图片
    UIImage *newImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return newImage;
}
 
- (void)sayHelloWorld{
    NSLog(@"say hello world...");
//    dispatch_async(dispatch_get_main_queue(), ^{
//        [self afnetHttps];
//    });
    UIView *backV = [UIView new];
    [[UIApplication sharedApplication].keyWindow addSubview:backV];
    
    backV.alpha = 0.5;
    backV.backgroundColor = [UIColor blackColor];
    backV.frame = [[UIScreen mainScreen] bounds];
  
    UIView *maskV = [UIView new];
    [backV addSubview:maskV];
    maskV.backgroundColor = [UIColor whiteColor];
    
    CGPoint origin =  [self.racRedView nameTopLeft];
    origin.x -= 5;
    origin.y -= 5;
    
    CGSize size = [self.racRedView nameSize];
    size.width += 10;
    size.height += 10;
    
    CGRect frame = CGRectZero;
    frame.origin = origin;
    frame.size = size;
    maskV.frame = frame;
}


- (UIImage *)layerToImage{
    
    if (@available(iOS 10.0, *)) {
        UIGraphicsImageRendererFormat *format = [[UIGraphicsImageRendererFormat alloc] init];
            format.prefersExtendedRange = YES;
            UIGraphicsImageRenderer *renderer = [[UIGraphicsImageRenderer alloc] initWithSize:self.imageView.frame.size format:format];
            __weak typeof(self) weakSelf = self;
        return [renderer imageWithActions:^(UIGraphicsImageRendererContext * _Nonnull rendererContext) {
                return [weakSelf.imageView.layer renderInContext:rendererContext.CGContext];
            }];
    }else{
        // Fallback on earlier versions
        UIGraphicsBeginImageContextWithOptions(self.selectedImage.size, NO, self.selectedImage.scale);
        [self.selectedImage drawAtPoint:CGPointZero];
        CGFloat scale = self.selectedImage.size.width / self.imageView.frame.size.width;
        CGContextScaleCTM(UIGraphicsGetCurrentContext(), scale, scale);
        [self.imageView.layer renderInContext:UIGraphicsGetCurrentContext()];
        UIImage *tmpImage = UIGraphicsGetImageFromCurrentImageContext();
        UIGraphicsEndImageContext();
        
        return tmpImage;
    }
 }

- (void)compareMallocForBackground{
     
    CGRect rect = [[UIScreen mainScreen] bounds];
    UIColor *backColor = [UIColor purpleColor];
  
    if (@available(iOS 10.0, *)) {
        UIGraphicsImageRenderer *re = [[UIGraphicsImageRenderer alloc] initWithBounds:rect];
        UIImage *image = [re imageWithActions:^(UIGraphicsImageRendererContext * _Nonnull rendererContext) {
            [backColor setFill];
            UIBezierPath *path = [UIBezierPath bezierPathWithRect:rect];
            [path addClip];
            UIRectFill(rect);
        }];
   
        self.view.backgroundColor = [UIColor colorWithPatternImage:
                                     [image stretchableImageWithLeftCapWidth:0 topCapHeight:0]];

    } else {
        // Fallback on earlier versions
        UIGraphicsBeginImageContextWithOptions(rect.size, NO, [UIScreen mainScreen].scale);
        CGContextRef context = UIGraphicsGetCurrentContext();
        CGContextSetFillColorWithColor(context, backColor.CGColor);
        CGContextFillRect(context, rect);
        UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
        UIGraphicsEndImageContext();

        self.view.backgroundColor = [UIColor colorWithPatternImage:
                                     [image stretchableImageWithLeftCapWidth:0 topCapHeight:0]];
    }
}

- (void)afnetHttps{
    AFHTTPSessionManager *sM = [[AFHTTPSessionManager alloc] init];
    [sM setResponseSerializer:[AFHTTPResponseSerializer serializer]];
 
    [sM GET:@"https://www.baidu.com" parameters:nil headers:nil progress:^(NSProgress * _Nonnull uploadProgress) {

        } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
            NSLog(@"success:(%@)", responseObject);

        } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
            NSLog(@"failure:(%@)", error.userInfo);
    }];

    NSLog(@"++++++:%lu", (unsigned long)sM.dataTasks.count);
    for (NSURLSessionTask *dataTask in sM.dataTasks) {
        if([dataTask.currentRequest.URL.absoluteString containsString:@"www.baidu.com"]){
            NSLog(@"===========######:(%ld)", (long)dataTask.state);
            [dataTask cancel];
        }
    }

    NSLog(@"++++++:%lu", (unsigned long)sM.dataTasks.count);
}
 
#pragma mark rac 单对象kvo
- (void)racKVOTest{
    
    CGRect priFrame = CGRectMake(100, 100, 100, 100);
    self.kvoView = [[UIView alloc] initWithFrame:priFrame];
    self.kvoView.backgroundColor = [UIColor yellowColor];
    [self.view addSubview:self.kvoView];

    [RACObserve(self.kvoView, frame) subscribeNext:^(id  _Nullable x) {
        //NSConcreteValue 转CGRect
        CGRect kvoFrame =  [(NSValue *)x CGRectValue];
        if (CGRectEqualToRect(priFrame, kvoFrame)) {
            NSLog(@"####### 改变的值和初始值一致:%@", NSStringFromCGRect(kvoFrame));
        }else{
            NSLog(@"初始值(%@) != 监听值(%@)", NSStringFromCGRect(priFrame), NSStringFromCGRect(kvoFrame));
        }
     } error:^(NSError * _Nullable error) {
         
        NSLog(@"通知信号异常结束:%@", error.userInfo);
    } completed:^{
        NSLog(@"通知信号正常结束");
    }];
}
 
 
#pragma mark rac 多对象kvo 内存管理
- (void)racRedBind{
    [RACObserve(_racRedView, submitBtn) subscribeNext:^(id  _Nullable x) {

    }];
}
 

- (void)dealloc{
    NSLog(@"dealloc...");
}
@end
