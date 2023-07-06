//
//  YSKlineViewModel.h
//  LanguageDemo
//
//  Created by Bob on 2023/6/30.
//

#import <Foundation/Foundation.h>
#import <ReactiveObjC/ReactiveObjC.h>
NS_ASSUME_NONNULL_BEGIN

@interface YSKlineViewModel : NSObject

@property (nonatomic, assign) NSInteger count;

@property (nonatomic, strong) RACCommand *lineDataCommond;

@end

NS_ASSUME_NONNULL_END
