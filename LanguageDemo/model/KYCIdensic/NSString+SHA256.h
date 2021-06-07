//
//  NSString+SHA256.h
//  LanguageDemo
//
//  Created by Bob on 2021/6/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (SHA256)

+ (NSString *)hmacSHA256WithSecret:(NSString *)secret
                           content:(NSString *)content;

@end

NS_ASSUME_NONNULL_END
