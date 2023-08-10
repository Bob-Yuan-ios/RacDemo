//
//  LDLoginVC.m
//  LanguageDemo
//
//  Created by Bob on 2021/12/24.
//

#import "LDLoginVC.h"
#import "LDLoginView.h"
#import "LDLoginViewModel.h"

#import "LDHomeVC.h"
#import "YSActionSheet.h"

#import "YSKlineDetailVC.h"

#import <objc/runtime.h>
#import "AppDelegate.h"

@interface LDLoginVC ()

@property (nonatomic, strong) LDLoginView *contentV;
@property (nonatomic, strong) LDLoginViewModel *contentVM;

@property (nonatomic, strong) YSActionSheet *ac;

@end

@implementation LDLoginVC
 

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = @"登录";
    
    UIColor *color = [UIColor brownColor];
    
    // statusBar
    if (@available(iOS 13.0, *)) {
        
        UIStatusBarManager *statusBarManager = [UIApplication sharedApplication].keyWindow.windowScene.statusBarManager;
        UIView *statusBar = [[UIView alloc] initWithFrame:statusBarManager.statusBarFrame];
        statusBar.backgroundColor = color;
        statusBar.tintColor = [UIColor yellowColor];
        [[UIApplication sharedApplication].keyWindow addSubview:statusBar];
    } else {
        
       // Fallback on earlier versions
       UIView *statusBar = [[[UIApplication sharedApplication] valueForKey:@"statusBarWindow"] valueForKey:@"statusBar"];
       if ([statusBar respondsToSelector:@selector(setBackgroundColor:)]) {
           statusBar.backgroundColor = color;
       }
    }
    
    // navigationBar
    self.navigationController.navigationBar.translucent = NO;
    self.navigationController.navigationBar.backgroundColor = color;
    NSDictionary *attributes = @{
        NSForegroundColorAttributeName: [UIColor whiteColor],
        NSFontAttributeName: [UIFont systemFontOfSize:16],
    };
    [self.navigationController.navigationBar setTitleTextAttributes:attributes];
 
    
    self.view.backgroundColor = [UIColor whiteColor];
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    
    NSString *first = @"0";
    NSString *second = @"123";
 
    NSDecimalNumber *firstDec = [NSDecimalNumber decimalNumberWithString:first];
    NSDecimalNumber *secondDec = [NSDecimalNumber decimalNumberWithString:second];
 
    NSString *s1 = [firstDec decimalNumberByMultiplyingBy:secondDec].stringValue;
    NSString *s2 = [firstDec decimalNumberBySubtracting:secondDec].stringValue;
    NSString *s3 = [secondDec decimalNumberByMultiplyingBy:firstDec].stringValue;
    NSString *s4 = [secondDec decimalNumberBySubtracting:firstDec].stringValue;
    NSLog(@"gggg=(%@)==(%@)==(%@)==(%@)", s1, s2, s3, s4);
    
}

- (void)dealloc{
    NSLog(@"##########(dealloc...)");
}


- (NSArray *)getProperties:(id)obj{
    NSMutableArray  *propertyNames = [[NSMutableArray alloc] init];
     unsigned int     propertyCount = 0;
     objc_property_t *properties    = class_copyPropertyList([obj class], &propertyCount);
     
     for (unsigned int i = 0; i < propertyCount; ++i)
     {
         objc_property_t  property = properties[i];
         const char      *name     = property_getName(property);
         
         [propertyNames addObject:[NSString stringWithUTF8String:name]];
     }
     
    free(properties);

    NSLog(@"#######:(%@)", propertyNames);
    return propertyNames;
}

- (NSDictionary*)propertiesAndValuesDictionary:(id)obj properties:(NSArray *)properties
{
    NSMutableDictionary *propertiesValuesDic = [NSMutableDictionary dictionary];
    
    for (NSString *property in properties)
    {
        SEL getSel = NSSelectorFromString(property);
        
        if ([obj respondsToSelector:getSel])
        {
            NSMethodSignature  *signature  = nil;
            signature                      = [obj methodSignatureForSelector:getSel];
            NSInvocation       *invocation = [NSInvocation invocationWithMethodSignature:signature];
            [invocation setTarget:obj];
            [invocation setSelector:getSel];
            NSObject * __unsafe_unretained valueObj = nil;
            [invocation invoke];
            [invocation getReturnValue:&valueObj];
            
            //assign to @"" string
            if (valueObj == nil)
            {
                valueObj = @"";
            }
            
            propertiesValuesDic[property] = valueObj;
        }
    }
    
    return propertiesValuesDic;
}

#pragma mark normal login
- (void)setupNormalLogin{
    [self.view addSubview:self.contentV];
    [self refreshConstraint];

    [self.contentV addContentVM:self.contentVM];
    [self setupSignal];
}

- (void)refreshConstraint{
    
     
    BOOL navHidden = self.navigationController.navigationBarHidden;
    CGFloat statusHeight = 0;
    if(@available(iOS 13.0, *)){
        UIStatusBarManager *statusBarManager = [UIApplication sharedApplication].windows.firstObject.windowScene.statusBarManager;
        statusHeight = CGRectGetHeight(statusBarManager.statusBarFrame);
    }else{
        statusHeight = CGRectGetHeight([UIApplication sharedApplication].statusBarFrame);
    }
    
    CGFloat offsetY = navHidden ? statusHeight : 0;
    NSLog(@"offsetY is:(%lf)", offsetY);
    
    [self.contentV mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(self.view).mas_offset(offsetY);
        make.left.bottom.right.mas_equalTo(self.view);
    }];
}

- (void)setupSignal{
    @weakify(self);
    self.contentV.loginBlock = ^{
        NSLog(@"登录按钮点击响应...");
        
        @strongify(self);
        [[self.contentVM.loginCommand execute:@"触发登录操作"] subscribeNext:^(NSDictionary *dic) {
            
//            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
//
//                if ([dic.allKeys containsObject:@"code"]) {
//                    if (0 == [[dic objectForKey:@"code"] integerValue]) {
//                        NSLog(@"登录成功");
//                        [self.navigationController pushViewController:[ViewController new] animated:YES];
//                        return;
//                    }
//                }
//                NSLog(@"登录失败");
//            });
         
            NSLog(@"登录结果:%@", dic);
            self.ac = [[YSActionSheet alloc] init];
            [self.ac ssss:self];
        }];
    };
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (LDLoginView *)contentV{
    if (!_contentV) {
        _contentV = [LDLoginView new];
    }
    return _contentV;
}


- (LDLoginViewModel *)contentVM{
    if (!_contentVM) {
        _contentVM = [[LDLoginViewModel alloc] init];
    }
    return _contentVM;
}

@end
