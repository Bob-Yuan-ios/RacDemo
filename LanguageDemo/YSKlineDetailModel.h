//
//  YSKlineDetailModel.h
//  LanguageDemo
//
//  Created by Bob on 2023/6/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSKlineDetailModel : NSObject


@property (nonatomic, assign) CGFloat lineWidth;

@property (nonatomic, assign) CGFloat lineSpace;

@property (nonatomic, assign) CGFloat screenWidth;

@property (nonatomic, assign) NSUInteger elementCount;

@property (nonatomic, assign) BOOL endLoading;
@property (nonatomic, assign) BOOL loadKlineData;

@property (nonatomic, assign) NSUInteger maxPage;
@property (nonatomic, assign) NSUInteger currentPage;

- (NSInteger)getCurrentTotalCount;
- (NSInteger)getScrollToPointX;

@end

NS_ASSUME_NONNULL_END
