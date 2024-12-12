//
//  DepthViewModel.h
//  RacDemo
//
//  Created by Bob on 2024/12/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DepthViewModel : NSObject

@property (nonatomic, strong) RACCommand *depthDataCommand;

@end

NS_ASSUME_NONNULL_END
