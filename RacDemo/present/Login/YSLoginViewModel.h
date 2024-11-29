//
//  YSLoginViewModel.h
//  RacDemo
//
//  Created by Bob on 2024/11/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSLoginViewModel : NSObject

@property (nonatomic, strong) RACCommand *loginCommand;

@end

NS_ASSUME_NONNULL_END
