//
//  AppDelegate.m
//  LanguageDemo
//
//  Created by Bob on 2021/4/12.
//

#import "AppDelegate.h"
#import "ViewController.h"
#import "GTWkWebViewVC.h"

#import <GoogleSignIn/GoogleSignIn.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>

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
    
    {
        [[FBSDKApplicationDelegate sharedInstance] application:application  didFinishLaunchingWithOptions:launchOptions];
        
        [GIDSignIn.sharedInstance restorePreviousSignInWithCallback:^(GIDGoogleUser * _Nullable user,
                                                                      NSError * _Nullable error) {
          if (error) {
            // Show the app's signed-out state.
          } else {
            // Show the app's signed-in state.
          }
        }];
    }

    
    return YES;
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options{
    
    NSLog(@"openUrl:%@", url.absoluteString);
    {
        [[FBSDKApplicationDelegate sharedInstance] application:app openURL:url options:options];
        [GIDSignIn.sharedInstance handleURL:url];
    }
    
    return YES;
}
 
@end
