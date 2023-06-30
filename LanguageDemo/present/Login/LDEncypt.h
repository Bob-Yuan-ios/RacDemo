//
//  LDEncypt.h
//  LanguageDemo
//
//  Created by Bob on 2023/3/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDEncypt : NSObject

+ (NSDictionary *)jwtDecodeWithJwtString:(NSString *)jwtStr;

@end

NS_ASSUME_NONNULL_END
