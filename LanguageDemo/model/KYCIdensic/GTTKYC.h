//
//  GTTKYC.h
//  LanguageDemo
//
//  Created by Bob on 2021/5/27.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
 
@interface GTTKYC : NSObject


/// 调用kyc服务
/// @param nav             当前导航控制器
/// @param customId  统一账号ID
+ (void)startKYCWithMainNav:(UINavigationController *)nav customId:(NSString *)customId;

@end

NS_ASSUME_NONNULL_END
