//
//  LDLoginViewModel.h
//  LanguageDemo
//
//  Created by Bob on 2021/12/24.
//

#import <Foundation/Foundation.h>
#import <ReactiveObjC/ReactiveObjC.h>


@class LDUserM;
@class LDContentModel;

NS_ASSUME_NONNULL_BEGIN

@interface LDLoginViewModel : NSObject


@property (nonatomic, strong) LDUserM *userModel;
@property (nonatomic, strong) LDContentModel *contentModel;

@property (nonatomic, strong) RACCommand *loginCommand;

@end
 

@interface LDContentModel : NSObject

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *passwd;

@end

@interface LDUserM : NSObject

@property (nonatomic, copy) NSString *age;
@property (nonatomic, copy) NSString *sex;
 
@end


NS_ASSUME_NONNULL_END
