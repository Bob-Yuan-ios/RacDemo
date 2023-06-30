//
//  YSKlineDetailModel.m
//  LanguageDemo
//
//  Created by Bob on 2023/6/30.
//

#import "YSKlineDetailModel.h"
#import <UIKit/UIKit.h>

@implementation YSKlineDetailModel

- (instancetype)init{
    self = [super init];
    if(self){
        self.endLoading = NO;
        self.loadKlineData = NO;

        self.lineSpace = 0;
        self.lineWidth = 10;

        self.screenWidth = [[UIScreen mainScreen] bounds].size.width;
        self.elementCount = self.screenWidth/self.lineWidth;

        self.currentPage = 3;
        self.maxPage = 1023/self.elementCount;
    }
    return self;
}

- (NSInteger)getCurrentTotalCount{
    return self.elementCount * self.currentPage;
}

- (NSInteger)getScrollToPointX{
    return  self.screenWidth * (self.currentPage - 1);
}
@end
