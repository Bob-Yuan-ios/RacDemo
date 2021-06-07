//
//  RacRedVM.h
//  LanguageDemo
//
//  Created by Bob on 2021/6/4.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <ReactiveObjC/ReactiveObjC.h>

#import "RacRedModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface RacRedVM : NSObject

- (void)addBtnAction:(UIButton *)btn racRedModel:(RacRedModel *)model;

@end

NS_ASSUME_NONNULL_END
