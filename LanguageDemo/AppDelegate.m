//
//  AppDelegate.m
//  LanguageDemo
//
/*
  
 */
//  Created by Bob on 2021/4/12.
//

#import "AppDelegate.h"
#import "ViewController.h"
 
#import "CircleCollectionVC.h"
#import "LDLoginVC.h"
 
@interface AppDelegate () 
@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    _window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    _window.backgroundColor = [UIColor whiteColor];
    [_window makeKeyAndVisible];
    
//    ViewController *vc = [[ViewController alloc] init];
//    CircleCollectionVC *vc = [[CircleCollectionVC alloc] init];
    LDLoginVC *vc = [[LDLoginVC alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
    [_window setRootViewController:nav];
 
    
    return YES;
}
 
@end
