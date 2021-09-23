//
//  GooglePlayLogin.m
//  LanguageDemo
//
//  Created by Bob on 2021/9/23.
//

#import "GooglePlayLogin.h"
#import <GoogleSignIn/GoogleSignIn.h>

@interface GooglePlayLogin ()

@property (nonatomic, strong) GIDConfiguration *signInConfig;
@property (nonatomic, strong) UIViewController *vc;

@end
@implementation GooglePlayLogin

- (id)init{
    self = [super init];
    if (self) {
        _signInConfig = [[GIDConfiguration alloc] initWithClientID:@"YOUR_IOS_CLIENT_ID"];
    }
    return self;
}


- (void)signIn {
  [GIDSignIn.sharedInstance signInWithConfiguration:_signInConfig
                           presentingViewController:_vc
                                           callback:^(GIDGoogleUser * _Nullable user,
                                                      NSError * _Nullable error) {
    if (error) {
      return;
    }

    // If sign in succeeded, display the app's main content View.
  }];
}

- (void)signOut{
  [GIDSignIn.sharedInstance signOut];
}

@end
