//
//  ViewController.m
//  LanguageDemo
//
//  Created by Bob on 2021/4/12.
//

#import "ViewController.h"

#import "GTTKYC.h"
#import "GTTKYCModel.h"

#import "RacRedView.h"
#import "RacRedModel.h"

#import "GTRACLearnM.h"


@interface ViewController ()

@property (nonatomic, strong) UIView *kvoView;

@property (nonatomic, strong) RacRedView *racRedView;
@property (nonatomic, strong) RacRedModel *racRedModel;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
  
//    [GTRACLearnM learningSignal];
//    self.racRedModel = [[RacRedModel alloc] init];
    
    [self racRedClick];
    [self racRedBind];
}
 

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    NSLog(@"点击...");
    [GTTKYCModel startKYCWithUserId:@""
                           appToken:@""
                          secretKey:@""
                           flowName:@""
                       supportEmail:@""
                            mainNav:self.navigationController
                  verificationBlock:^(BOOL isApproved) {
        ;
    }];
    self.kvoView.frame = CGRectMake(100, 300, 100, 100);
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
    
    [self.racRedView.subject subscribeNext:^(id  _Nullable x) {
       self->_racRedModel.age = @"hello world";
       NSLog(@"接收到红色视图的信号:%@", x) ;
       [self removeView];
    } error:^(NSError * _Nullable error) {
        NSLog(@"红色视图信号异常结束:%@", error.userInfo);
    } completed:^{
        NSLog(@"红色视图信号正常结束");
    }];
}

- (void)removeView{
    [self.racRedView removeFromSuperview];
    self.racRedView = nil;
}

- (void)dealloc{
    NSLog(@"dealloc...");
}
@end
