//
//  LDHomeViewModel.m
//  LanguageDemo
//
//  Created by Bob on 2021/12/31.
//

#import "LDHomeViewModel.h"
 

@implementation LDHomeViewModel

- (RACCommand *)currencyCommand{
  //如果要重复执行信号，则如此写
    _currencyCommand = [[RACCommand alloc] initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {
        
        return [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
            
            sleep(0.5);
            NSMutableArray *arr = (self.curPage == 0) ? [NSMutableArray new] : [self.dataSourceArr mutableCopy];
            NSLog(@"arr count is:%ld", arr.count);
            
            NSInteger startIdx = arr.count;
            for (int i = 1; i <= self.pageSize; i++) {
//                [arr addObject:[LDHomeModel yy_modelWithDictionary:@{@"currencyName": @(i + startIdx)}]];
            }
            
            self.dataSourceArr = [arr mutableCopy];
//直接触发NSMutableArray更新
//            [[self mutableArrayValueForKey:@"dataSourceArr"] setArray:arr];
//            [subscriber sendNext:@"数据请求成功"];

            [subscriber sendNext:arr];
            return nil;

        }];
    }];
    
    return _currencyCommand;
}

 
- (NSMutableArray *)dataSourceArr{
    if (!_dataSourceArr) {
        _dataSourceArr = [NSMutableArray new];
    }
    return _dataSourceArr;
}

- (instancetype)init{
    self = [super init];
    if (self) {
        _curPage = 0;
        _pageSize = 20;
    }
    return self;
}
@end

@implementation LDHomeModel

- (void)setValue:(id)value forUndefinedKey:(NSString *)key{
    NSLog(@"undefined key:%@", key);
}
 
@end
