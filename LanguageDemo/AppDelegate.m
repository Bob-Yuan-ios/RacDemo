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
 
#import "LDLoginVC.h"
 
@interface AppDelegate () 
@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    _window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    _window.backgroundColor = [UIColor whiteColor];
    [_window makeKeyAndVisible];
    
    NSString *code = @"Coin_in_USDT-ERC20";
    if ([code containsString:@"Coin_in_"]) {
        NSRange range = [code rangeOfString:@"Coin_in_"];
        NSString *codeKey = [code substringFromIndex:range.length];
        NSLog(@"codekey is111:%@", codeKey);
        
        codeKey = [codeKey componentsSeparatedByString:@"-"].firstObject;
        NSLog(@"codekey is222:%@", codeKey);

    }
    
//    ViewController *vc = [[ViewController alloc] init];
//    CircleCollectionVC *vc = [[CircleCollectionVC alloc] init];
    LDLoginVC *vc = [[LDLoginVC alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
    [_window setRootViewController:nav];
 
    
    return YES;
}
 
@end
