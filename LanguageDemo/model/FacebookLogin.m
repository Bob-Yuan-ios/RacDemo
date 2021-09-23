//
//  FacebookLogin.m
//  LanguageDemo
//
//  Created by Bob on 2021/9/23.
//

#import "FacebookLogin.h"

#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>

@interface FacebookLogin ()

@property (nonatomic, strong) UIViewController *vc;
@end

@implementation FacebookLogin

- (id)init{
    self = [super init];
    if (self) {
         
        [FBSDKProfile enableUpdatesOnAccessTokenChange:YES];

        [[NSNotificationCenter defaultCenter] addObserverForName:FBSDKAccessTokenDidChangeNotification
                                                          object:nil
                                                           queue:[NSOperationQueue mainQueue]
                                                      usingBlock:
         ^(NSNotification *notification) {
            if (notification.userInfo[FBSDKAccessTokenDidChangeUserIDKey]) {
             // Handle user change
           }
         }];
        
        [[NSNotificationCenter defaultCenter] addObserverForName:FBSDKProfileDidChangeNotification
                                                          object:nil
                                                           queue:[NSOperationQueue mainQueue]
                                                      usingBlock:
         ^(NSNotification *notification) {
           if ([FBSDKProfile currentProfile]) {
             // Update for new user profile
           }
         }];
    }
    return self;
}

- (void)loadViewWithParent:(UIViewController *)vc{
    
    _vc = vc;
    if (![FBSDKAccessToken currentAccessToken]) {

         UIButton *myLoginButton = [UIButton buttonWithType:UIButtonTypeCustom];
         myLoginButton.backgroundColor = [UIColor darkGrayColor];
         myLoginButton.frame = CGRectMake(0,0,180,40);
         myLoginButton.center = _vc.view.center;
         [myLoginButton setTitle: @"FaceBook" forState: UIControlStateNormal];

         [myLoginButton addTarget:self
                           action:@selector(signIn)
                 forControlEvents:UIControlEventTouchUpInside];

        [_vc.view addSubview:myLoginButton];
    }
}


// Once the button is clicked, show the login dialog
- (void)signIn
{
  FBSDKLoginManager *login = [[FBSDKLoginManager alloc] init];
    // @"email"
  [login logInWithPermissions:@[@"public_profile"]
           fromViewController:_vc
                      handler:^(FBSDKLoginManagerLoginResult * _Nullable result, NSError * _Nullable error) {
      if (error) {
        NSLog(@"Process error");
      }  if ([result.declinedPermissions containsObject:@"public_profile"]) {
          // TODO: do not request permissions again immediately. Consider providing a NUX
         // describing  why the app want this permission.
      } else {
        // ...
      }

  }];
}


- (void)signOut{
    FBSDKLoginManager *login = [[FBSDKLoginManager alloc] init];
    [login logOut];
}
@end
