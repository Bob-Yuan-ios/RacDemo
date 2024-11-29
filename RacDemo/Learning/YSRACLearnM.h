//
//  YSRACLearnM.h
//  RacDemo
//
//  Created by Bob on 2021/5/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSRACLearnM : NSObject

+ (void)learningSignal;

@end

@interface UserModel : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *userId;

- (UserModel *)modelwithDic:(NSDictionary *)dic;

@end
NS_ASSUME_NONNULL_END

