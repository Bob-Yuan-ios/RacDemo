//
//  ViewController.m
//  LanguageDemo
//
//  Created by Bob on 2021/4/12.
//

#import "ViewController.h"
#import <Masonry/Masonry.h>

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

#import "UIViewController+cOne.h"
#import "UIViewController+cTwo.h"
#import "UIViewController+cThree.h"

#import "TitleRepeatV.h"
#import "ThreadModel.h"

//
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>
//

#import <GoogleSignIn/GoogleSignIn.h>


#import "TestUrlAppend.h"

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

@property (nonatomic, assign) BOOL loginGoogleSuccess;

@property (nonatomic, strong) FBSDKLoginManager *fbLoginManager;
@property (nonatomic, assign) BOOL loginFacebookSuccess;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
 
    self.title = @"测试第三方登录";
//    self.view.backgroundColor = [UIColor lightGrayColor];

    [TestUrlAppend test1];
//    [self racRedClick];
    
//    dispatch_async(dispatch_queue_create(0, 0), ^{
//        [self performSelector:@selector(sayHelloWorld) withObject:nil afterDelay:3.f];
//        [[NSRunLoop currentRunLoop] run];
//    });
    
//    [self performSelector:@selector(sayHelloWorld) withObject:nil afterDelay:1.f];

    
//    TitleRepeatV *repeatV = [[TitleRepeatV alloc] initWithFrame:CGRectMake(0, 400, 414, 40)];
//    repeatV.backgroundColor = [UIColor redColor];
//    [self.view addSubview:repeatV];
//
//    [ThreadModel testLock];
    
 
    {
//        FBSDKLoginButton *fbBtn = [[FBSDKLoginButton alloc] init];
//        [self.view addSubview:fbBtn];
//        fbBtn.permissions = @[@"public_profile", @"email"];
//
//        [fbBtn mas_makeConstraints:^(MASConstraintMaker *make) {
//            make.bottom.mas_equalTo(self.view.mas_bottom).offset(-10);
//            make.centerX.mas_equalTo(self.view.mas_centerX);
//            make.width.mas_equalTo(@300);
//            make.height.mas_equalTo(@40);
//        }];
//        FBSDKAccessToken *accessToken = [FBSDKAccessToken currentAccessToken];
//        if (accessToken) {
//            NSLog(@"information is:%@", accessToken);
//        }
        
        UIButton *fbBtn = [UIButton buttonWithType:UIButtonTypeCustom];
        [self.view addSubview:fbBtn];
        [fbBtn mas_makeConstraints:^(MASConstraintMaker *make) {
            make.bottom.mas_equalTo(self.view.mas_bottom).offset(-70);
            make.centerX.mas_equalTo(self.view.mas_centerX);
            make.width.mas_equalTo(@300);
            make.height.mas_equalTo(@40);
        }];
        
        [fbBtn.titleLabel setFont:[UIFont systemFontOfSize:12]];
        [fbBtn setTitle:@"使用FaceBook登录" forState:UIControlStateNormal];
        fbBtn.backgroundColor = [UIColor blueColor];
        
        fbBtn.layer.cornerRadius = 5.f;
        [fbBtn addTarget:self action:@selector(facebookLogin:) forControlEvents:UIControlEventTouchUpInside];
        
        UIButton *googleBtn = [UIButton buttonWithType:UIButtonTypeCustom];
        [self.view addSubview:googleBtn];

        [googleBtn mas_makeConstraints:^(MASConstraintMaker *make) {
            make.bottom.mas_equalTo(fbBtn.mas_top).offset(-20);
            make.centerX.mas_equalTo(self.view.mas_centerX);
            make.width.mas_equalTo(@300);
            make.height.mas_equalTo(@40);
        }];

        [googleBtn.titleLabel setFont:[UIFont systemFontOfSize:12]];
        [googleBtn setTitle:@"使用谷歌邮箱登录" forState:UIControlStateNormal];
        googleBtn.backgroundColor = [UIColor redColor];
        
        googleBtn.layer.cornerRadius = 5.f;
        [googleBtn addTarget:self action:@selector(googleLogin:) forControlEvents:UIControlEventTouchUpInside];
    }
   
}

- (void)facebookLogin:(UIButton *)sender{
    !_loginFacebookSuccess ? [self facebookSignIn:sender] : [self facebookSignOut:sender];
}

- (void)googleLogin:(UIButton *)sender{
    !_loginGoogleSuccess ? [self googleSignIn:sender] : [self googleSignOut:sender];
}

- (FBSDKLoginManager *)fbLoginManager{
    if (!_fbLoginManager) {
        _fbLoginManager = [[FBSDKLoginManager alloc] init];
    }
    return _fbLoginManager;
}

- (void)facebookSignIn:(UIButton *)sender {
 
    [self.fbLoginManager logInWithPermissions:@[@"public_profile", @"email"] fromViewController:self handler:^(FBSDKLoginManagerLoginResult * _Nullable result, NSError * _Nullable error) {
        [self getUserProfile:result facebookBtn:sender];
    }];
}

- (void)getUserProfile:(FBSDKLoginManagerLoginResult *)result facebookBtn:(UIButton *)sender{
    NSDictionary *params = @{@"fields": @"id,name,email"};
    
    FBSDKGraphRequest *req = [[FBSDKGraphRequest alloc] initWithGraphPath:result.token.userID parameters:params HTTPMethod:@"GET"];
    [req startWithCompletion:^(id<FBSDKGraphRequestConnecting>  _Nullable connection, id  _Nullable result, NSError * _Nullable error) {
        
        if(error){
            _loginFacebookSuccess = NO;
            [sender setTitle:@"登录Facebook失败" forState:UIControlStateNormal];
        }else{
            _loginFacebookSuccess = YES;
            [sender setTitle:[NSString stringWithFormat:@"登录Facebook成功昵称:%@",
                              [result objectForKey:@"name"]] forState:UIControlStateNormal];
        }
        NSLog(@"result:%@", result);
    
    }];
}

- (void)facebookSignOut:(UIButton *)sender {
    [self.fbLoginManager logOut];
    _loginFacebookSuccess = NO;
}

- (void)googleSignIn:(UIButton *)sender {
    
    sender.userInteractionEnabled = NO;
    GIDConfiguration *signInConfig = [[GIDConfiguration alloc] initWithClientID:@"659872786378-9v9l6limi0vk57frveu2mjroqrcnr7n4.apps.googleusercontent.com"];
     [GIDSignIn.sharedInstance signInWithConfiguration:signInConfig
                              presentingViewController:self
                                              callback:^(GIDGoogleUser * _Nullable user,
                                                         NSError * _Nullable error) {
       if (error) {
           _loginGoogleSuccess = NO;
           sender.userInteractionEnabled = YES;
           [sender setTitle:@"谷歌邮箱登录授权失败" forState:UIControlStateNormal];
           return;
       }

         _loginGoogleSuccess = YES;
         sender.userInteractionEnabled = YES;
         NSString *str = [NSString stringWithFormat:@"谷歌邮箱登录账号:%@", user.profile.email];
         [sender setTitle:str forState:UIControlStateNormal];

       // If sign in succeeded, display the app's main content View.
     }];
}

- (void)googleSignOut:(UIButton *)sender{
    [GIDSignIn.sharedInstance signOut];
    [sender setTitle:@"谷歌邮箱登录授权退出" forState:UIControlStateNormal];
    
    _loginGoogleSuccess = NO;
    sender.userInteractionEnabled = YES;
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    
    [self helloWorld];
    [self helloWorld];
    [self helloWorld];
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
    
//    [self compareMallocForBackground];
}

- (void)removeView{
    [self.racRedView removeFromSuperview];
    self.racRedView = nil;
}

- (void)dealloc{
    NSLog(@"dealloc...");
}
@end
