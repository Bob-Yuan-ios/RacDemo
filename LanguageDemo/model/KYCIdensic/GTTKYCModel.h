//
//  GTTKYCModel.h
//  LanguageDemo
//
//  Created by Bob on 2021/5/27.
//  导入到btcc使用时，需要
//  pod 'IdensicMobileSDK'
//  加入 category (NSString+SHA256)

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
 
@interface GTTKYCModel : NSObject

/// 启动IdensicMobileSDK 服务需要传入userId appToken 密钥
/// @param userId        Idensic端的用户ID
/// @param appToken   appToken(加密)
/// @param secretKey secretKey(加密)
/// @param flowName flowName 和 level name保持一致
/// @param supportEmail supportEmail
/// @param mainNav     导航控制器
/// @param verify      审核结果回调：YES 通过 NO 拒绝
+ (void)startKYCWithUserId:(nonnull NSString *)userId
                  appToken:(nonnull NSString *)appToken
                 secretKey:(nonnull NSString *)secretKey
                  flowName:(nonnull NSString *)flowName
              supportEmail:(nonnull NSString *)supportEmail
                   mainNav:(nonnull UINavigationController *)mainNav
         verificationBlock:(nullable void (^)(BOOL isApproved))verify;

@end

NS_ASSUME_NONNULL_END
