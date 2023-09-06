//
//  YSJJListModel.h
//  LanguageDemo
//
//  Created by Bob on 2023/8/21.
//

#import <Foundation/Foundation.h>
#import <ReactiveObjC/ReactiveObjC.h>
#import "YSListModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSJJListModel : NSObject

@property (nonatomic, strong) RACCommand *jjCommand;

@end

NS_ASSUME_NONNULL_END
