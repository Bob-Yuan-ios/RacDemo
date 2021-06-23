//
//  RacRedModel.h
//  LanguageDemo
//
//  Created by Bob on 2021/6/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RacRedModel : NSObject<NSMutableCopying>

@property (nonatomic, copy) NSString *age;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *height;

@end

NS_ASSUME_NONNULL_END
