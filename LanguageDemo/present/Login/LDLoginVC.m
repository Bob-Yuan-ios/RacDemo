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

#import "ViewController.h"
#import <LineSDK/LineSDK.h>

#import <objc/runtime.h>

@interface LDLoginVC ()<LineSDKLoginDelegate>

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
    
    [self setupLineLogin];
}

- (void)setupLineLogin{
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
    btn.backgroundColor = [UIColor yellowColor];
    [btn setTitle:@"Line登录" forState:UIControlStateNormal];
    [self.view addSubview:btn];
    [btn addTarget:self action:@selector(startLogin) forControlEvents:UIControlEventTouchUpInside];
    [btn mas_makeConstraints:^(MASConstraintMaker *make) {
       make.top.mas_offset(100);
        make.height.mas_equalTo(44);
        make.centerX.mas_equalTo(self.view);
        make.width.mas_equalTo(100);
    }];
}

#pragma mark line login
- (void)startLogin{
    [LineSDKLogin sharedInstance].delegate = self;
    //    NSArray *permission1 = @[@"profile", @"friends", @"groups"];
    NSArray *permissions = @[@"profile", @"openid", @"email"];
    [[LineSDKLogin sharedInstance] startLoginWithPermissions:permissions];
}

#pragma mark line login delegate method
- (void)didLogin:(LineSDKLogin *)login
    credential:(LineSDKCredential *)credential
        profile:(LineSDKProfile *)profile
        error:(NSError *)error
{
    if (error) {
        // Login failed with an error. Use the error parameter to identify the problem.
        NSLog(@"Error: %@", error.localizedDescription);
    }
    else {

        // Login success. Extracts the access token, user profile ID, display name, status message, and profile picture.
        NSString * accessToken = credential.accessToken.accessToken;
        NSString * userID = profile.userID;
        
        NSString * displayName = profile.displayName;
        NSString * statusMessage = profile.statusMessage;
        NSURL * pictureURL = profile.pictureURL;
        
        NSString * pictureUrlString;
        // If the user doesn't have a profile picture set, pictureURL will be nil
        if (pictureURL) {
            pictureUrlString = profile.pictureURL.absoluteString;
        }
        
        LineSDKJSONWebToken *jwtToken = credential.IDToken;
        NSArray *propertyNames = [self getProperties:jwtToken];
        NSDictionary *dic = [self propertiesAndValuesDictionary:jwtToken properties:propertyNames];
        NSLog(@"dic#######(%@)", dic);
    }
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
    CGFloat statusHeight = CGRectGetHeight([UIApplication sharedApplication].statusBarFrame);
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
