//
//  RacRedView.h
//  LanguageDemo
//
//  Created by Bob on 2021/5/29.
//

#import <UIKit/UIKit.h>
#import <ReactiveObjC/ReactiveObjC.h>
#import "RacRedModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface RacRedView : UIView

@property (nonatomic, strong) RACSubject *subject;

@property (nonatomic, strong) UIButton    *submitBtn;

@property (nonatomic, strong) RacRedModel *racRedM;

@end

NS_ASSUME_NONNULL_END
