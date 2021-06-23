//
//  GTDarkConfigM.m
//  LanguageDemo
//
//  Created by Bob on 2021/6/23.
//

#import "GTDarkConfigM.h"

@implementation GTDarkConfigM

+ (UIColor *)txtColor{
   if (@available(iOS 13, *)) {
       return [UIColor colorWithDynamicProvider:^UIColor * _Nonnull(UITraitCollection * _Nonnull traitCollection) {
           BOOL isDark = (traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark) ;
           return  isDark ? [UIColor greenColor] :  [UIColor redColor];
       }];
   }
   
   return [UIColor blackColor];
}

+ (UIColor *)txtBackColor{
   if (@available(iOS 13, *)) {
       return [UIColor colorWithDynamicProvider:^UIColor * _Nonnull(UITraitCollection * _Nonnull traitCollection) {
           BOOL isDark = (traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark) ;
           return  isDark ? [UIColor whiteColor] :  [UIColor lightGrayColor];
       }];
   }
   
   return [UIColor greenColor];
}

+ (UIColor *)themeColor{
   if (@available(iOS 13, *)) {
       return [UIColor colorWithDynamicProvider:^UIColor * _Nonnull(UITraitCollection * _Nonnull traitCollection) {
           BOOL isDark = (traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark) ;
           return  isDark ? [UIColor lightGrayColor] :  [UIColor whiteColor];
       }];
   }
   
   return [UIColor greenColor];
}

@end
