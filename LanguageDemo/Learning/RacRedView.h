//
//  RacRedView.h
//  LanguageDemo
//
//  Created by Bob on 2021/5/29.
//

#import <UIKit/UIKit.h>
#import <ReactiveObjC/ReactiveObjC.h>
#import "RacRedModel.h"

#if DEBUG

#define DSLog(fmt, ...) NSLog((@"%s," "[lineNum:%d]" fmt) , __FUNCTION__, __LINE__, ##__VA_ARGS__); //带函数名和行数

#define WSLog(fmt, ...) NSLog((@"====%s" fmt), __FUNCTION__, ##__VA_ARGS__);

#define ESLog(fmt, ...) NSLog((@"!!!!%s" fmt), __FUNCTION__, ##__VA_ARGS__);

#else

#define DSLog(fmt, ...)

#define WSLog(fmt, ...)

#define ESLog(fmt, ...)


#endif

NS_ASSUME_NONNULL_BEGIN


@interface RacRedView : UIView

@property (nonatomic, strong) RACSubject *subject;

@property (nonatomic, strong) UIButton    *submitBtn;

@property (nonatomic, strong) RacRedModel *racRedM;

@end

NS_ASSUME_NONNULL_END
