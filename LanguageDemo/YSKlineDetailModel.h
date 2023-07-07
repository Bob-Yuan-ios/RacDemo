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

// 每屏元素个数
@property (nonatomic, assign) NSInteger elementCount;
@property (nonatomic, assign) NSInteger startIndex;
@property (nonatomic, assign) NSInteger endIndex;

@property (nonatomic, assign) BOOL endLoading;
@property (nonatomic, assign) BOOL loadKlineData;

@property (nonatomic, assign) NSUInteger maxPage;
@property (nonatomic, assign) NSUInteger currentPage;

@property (nonatomic, strong) NSMutableArray *macdLineArr;
@property (nonatomic, strong) NSMutableArray *sourceLineArr;

@property (nonatomic, assign) BOOL needReload;

- (NSInteger)getCurrentTotalCount;

@end

NS_ASSUME_NONNULL_END
