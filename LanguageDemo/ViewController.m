//
//  ViewController.m
//  LanguageDemo
//
//  Created by Bob on 2021/4/12.
//

#import "ViewController.h"
 
#import "RacRedView.h"
#import "RacRedModel.h"

#import "GTRACLearnM.h"

#import "GTTestAlloc.h"
#import "QuartzView.h"

#import "GTDarkConfigM.h"
#import "GTObject.h"

#import <objc/runtime.h>
#import <malloc/malloc.h>

#import <AFNetworking/AFNetworking.h>

@interface ViewController ()

@property (nonatomic, strong) UIView *kvoView;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UIImage *selectedImage;

@property (nonatomic, strong) RacRedView *racRedView;
@property (nonatomic, strong) RacRedModel *racRedModel;

@property (nonatomic, strong) UILabel *tit;


@property (nonatomic, strong) GTObject *obj1;
@property (nonatomic, strong) GTObject *obj2;
@property (nonatomic, weak)   GTObject *objWeak;


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
 
    NSLog(@"11111....");
    dispatch_async(dispatch_queue_create(0, 0), ^{
        [self performSelector:@selector(sayHelloWorld) withObject:nil afterDelay:1.f];
        [[NSRunLoop currentRunLoop] run];
    });
    
    [self racRedClick];
}
 
- (void)sayHelloWorld{
    NSLog(@"say hello world...");
//    dispatch_async(dispatch_get_main_queue(), ^{
//        [self afnetHttps];
//    });
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

/*
 在ViewController：
 - (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection
 - (void)updateViewConstraints
 - (void)viewWillLayoutSubviews
 - (void)viewDidLayoutSubviews

 在View里：
 - (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection
 - (void)drawRect:(CGRect)rect
 - (void)layoutSubviews
 - (void)updateConstraints
 - (void)tintColorDidChange

 在UIPresentationController里：
 - (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection
 - (void)containerViewWillLayoutSubviews
 - (void)containerViewDidLayoutSubviews
 */
- (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection{
    [super traitCollectionDidChange:previousTraitCollection];
    
    if (@available(iOS 13.0, *)) {
        
        UITraitCollection *tra = [UITraitCollection currentTraitCollection];
        BOOL hasChange = [previousTraitCollection hasDifferentColorAppearanceComparedToTraitCollection:tra];
        NSLog(@"viewController ... has change traitCollection is:(%@)", @(hasChange));
 
        // 调用颜色重新改变的方案
        
    } else {
        // Fallback on earlier versions
    }
}
 

//- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
//    NSLog(@"点击...");
////    [GTTKYCModel startKYCWithUserId:@""
////                           appToken:@""
////                          secretKey:@""
////                           flowName:@""
////                       supportEmail:@""
////                            mainNav:self.navigationController
////                  verificationBlock:^(BOOL isApproved) {
////        ;
////    }];
////    self.kvoView.frame = CGRectMake(100, 300, 100, 100);
//}

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

//// 模型的值 赋给 UI
//- (void)modelRefreshUI{
//    RAC(_racRedView.ageTF, text) = RACObserve(_racRedModel, age);
//    RAC(_racRedView.nameTF, text) = RACObserve(_racRedModel, name);
//    RAC(_racRedView.heightTF, text) = [RACObserve(_racRedModel, height)
//                                       map:^id _Nullable(id  _Nullable value) {
//        return [value description];
//    }];
//}
//
//// UI输入值 更新模型的值
//- (void)uiRefrehsModel{
//    NSArray *arr = @[
//        _racRedView.ageTF.rac_textSignal,
//        _racRedView.nameTF.rac_textSignal,
//        _racRedView.heightTF.rac_textSignal
//    ];
//
//    [[RACSignal combineLatest:arr] subscribeNext:^(RACTuple * _Nullable x) {
//        if (![x.first isEqualToString:self.racRedModel.age])
//            self->_racRedModel.age = x.first;
//
//        if (![x.second isEqualToString:self.racRedModel.name])
//            self->_racRedModel.name = x.second;
//
//        if (![x.third isEqualToString:self.racRedModel.height])
//            self->_racRedModel.height = x.third;
//    }];
//}
//

- (void)racRedClick{
    self.racRedView = [[RacRedView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    [self.view addSubview:self.racRedView];
    
//    [self.racRedView.subject subscribeNext:^(id  _Nullable x) {
//       self->_racRedModel.age = @"hello world";
//       NSLog(@"接收到红色视图的信号:%@", x) ;
//       [self removeView];
//    } error:^(NSError * _Nullable error) {
//        NSLog(@"红色视图信号异常结束:%@", error.userInfo);
//    } completed:^{
//        NSLog(@"红色视图信号正常结束");
//    }];
    
    [self compareMallocForBackground];
}

- (void)removeView{
    [self.racRedView removeFromSuperview];
    self.racRedView = nil;
}

- (void)dealloc{
    NSLog(@"dealloc...");
}
@end
