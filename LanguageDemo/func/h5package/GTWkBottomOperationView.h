//
//  GTWkBottomOperationView.h
//  LanguageDemo
//
//  Created by Bob on 2021/5/11.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^BtnBlock)(void);

@interface GTWkBottomOperationView : UIView

@property (nonatomic, copy) BtnBlock clickFirstBlock;
@property (nonatomic, copy) BtnBlock clickSecondBlock;
@property (nonatomic, copy) BtnBlock clickThirdBlock;
@property (nonatomic, copy) BtnBlock clickForthBlock;

@end

NS_ASSUME_NONNULL_END
