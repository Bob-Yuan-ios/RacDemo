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
// 导入后可以调用Swift
#import "LanguageDemo-Swift.h"

#import <LineSDK/LineSDK.h>

@interface AppDelegate () 
@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    _window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    _window.backgroundColor = [UIColor whiteColor];
    [_window makeKeyAndVisible];
    

    LDLoginVC *vc = [[LDLoginVC alloc] init];
//    SwiftRootViewController *vc = [[SwiftRootViewController alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
    [_window setRootViewController:nav];
 
    
    return YES;
}
 
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary *)options
{
    NSLog(@"=====#####(%@)", url.absoluteString);
    return [[LineSDKLogin sharedInstance] handleOpenURL:url];
}
@end
