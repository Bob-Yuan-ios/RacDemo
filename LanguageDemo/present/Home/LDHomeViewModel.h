//
//  LDHomeViewModel.h
//  LanguageDemo
//
//  Created by Bob on 2021/12/31.
//

#import <Foundation/Foundation.h>
#import <ReactiveObjC/ReactiveObjC.h>


@class LDHomeModel;

NS_ASSUME_NONNULL_BEGIN

@interface LDHomeViewModel : NSObject

@property (nonatomic, strong) RACCommand *currencyCommand;

@property (nonatomic, assign) NSInteger curPage;
@property (nonatomic, assign) NSInteger pageSize;
@property (nonatomic, strong) NSMutableArray *dataSourceArr;

@end


@interface LDHomeModel : NSObject

@property (nonatomic, copy)   NSString *currencyName;

@end


NS_ASSUME_NONNULL_END
