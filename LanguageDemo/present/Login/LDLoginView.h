//
//  LDLoginView.h
//  LanguageDemo
//
//  Created by Bob on 2021/12/24.
//

#import <UIKit/UIKit.h>
#import "LDLoginViewModel.h"

#import <Masonry/Masonry.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDLoginView : UIView

@property (nonatomic, copy)void(^loginBlock)(void);

- (void)addContentVM:(LDLoginViewModel *)contentVM;

@end

NS_ASSUME_NONNULL_END
