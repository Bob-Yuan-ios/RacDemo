//
//  RacRedVM.h
//  LanguageDemo
//
//  Created by Bob on 2021/6/4.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <ReactiveObjC/ReactiveObjC.h>

@class RacRedModel;

NS_ASSUME_NONNULL_BEGIN

@interface RacRedVM : NSObject

- (void)addBtnAction:(UIButton *)btn racRedModel:(RacRedModel *)model;

@end


@interface RacRedModel : NSObject<NSMutableCopying>

@property (nonatomic, copy) NSString *age;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *height;

@end

NS_ASSUME_NONNULL_END
