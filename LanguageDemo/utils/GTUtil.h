//
//  GTUtil.h
//  LanguageDemo
//
//  Created by Bob on 2021/5/21.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTUtil : NSObject

+ (void)testExit:(BOOL)isExit;

+ (void)testRangeException;

+ (void)testOutscreenRender:(UIViewController *)vc;

@end

NS_ASSUME_NONNULL_END
