//
//  AppDelegate.m
//  LanguageDemo
//
/*
  
 */
//  Created by Bob on 2021/4/12.
//

#import "AppDelegate.h"
 
#import "LDLoginVC.h"
#import "YSKlineDetailVC.h"
#import "YSRootViewController.h"

// 导入后可以调用Swift
#import "LanguageDemo-Swift.h"
#import "NSString+UTFCode.h"

typedef NS_ENUM(NSUInteger, AUTH_TYPE) {
    AUTH_TYPE_LINE,
    AUTH_TYPE_KAKAO
};

@interface AppDelegate ()

@property (nonatomic, assign) AUTH_TYPE thirdAuthType;
@property (nonatomic, strong) SwiftRootViewController *swiftRootVC;

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    _window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    _window.backgroundColor = [UIColor whiteColor];
    [_window makeKeyAndVisible];
        
    [self launchMetaMask];
    return YES;
}
 


- (void)launchObjCRootViewController{
    YSRootViewController *vc = [[YSRootViewController alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
    [_window setRootViewController:nav];
}

- (void)launchSwiftRootViewController{
    SwiftRootViewController *vc = [[SwiftRootViewController alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
    [_window setRootViewController:nav];
}

- (void)launchKLine{
    YSKlineDetailVC *vc = [[YSKlineDetailVC alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
    [_window setRootViewController:nav];
}

- (void)launchMetaMask{
    MetaViewController *vc = [[MetaViewController alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
    [_window setRootViewController:nav];
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary *)options{
    NSLog(@"=====#####(%@)", url.absoluteString);
    return YES;
}


@end
