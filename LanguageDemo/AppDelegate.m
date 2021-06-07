//
//  AppDelegate.m
//  LanguageDemo
//
//  Created by Bob on 2021/4/12.
//

#import "AppDelegate.h"
#import "ViewController.h"
#import "GTWkWebViewVC.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    _window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    _window.backgroundColor = [UIColor whiteColor];
    [_window makeKeyAndVisible];
    
    ViewController *vc = [[ViewController alloc] init];
//    GTWkWebViewVC *vc = [[GTWkWebViewVC alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
    [_window setRootViewController:nav];
    
    return YES;
}
 
@end
