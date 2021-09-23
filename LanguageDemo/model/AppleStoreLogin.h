//
//  AppleStoreLogin.h
//  LanguageDemo
//
//  Created by Bob on 2021/9/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AppleStoreLogin : NSObject
 

// 如果存在iCloud Keychain 凭证或者AppleID 凭证提示用户
- (void)perfomExistingAccountSetupFlows;

@end

NS_ASSUME_NONNULL_END
