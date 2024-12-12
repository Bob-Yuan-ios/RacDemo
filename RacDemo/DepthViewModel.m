//
//  DepthViewModel.m
//  RacDemo
//
//  Created by Bob on 2024/12/12.
//

#import "DepthViewModel.h"
#import "DepthData.h"

@interface DepthViewModel ()

@end

@implementation DepthViewModel

- (RACCommand *)depthDataCommand{
    if (!_depthDataCommand) {
        _depthDataCommand = [[RACCommand alloc]  initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {
           
            return [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
                
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                    
                    NSMutableArray<DepthData *> *bids = [NSMutableArray array];
                    CGFloat cumulativeAmount = 0;
                    for (int i = 0; i < 10; i++) {
                        DepthData *data = [[DepthData alloc] init];
                        data.price = 100 - i; // 示例价格
                        data.amount = arc4random_uniform(10) + 1; // 随机数量
                        cumulativeAmount += data.amount;
                        data.cumulativeAmount = cumulativeAmount;
                        [bids addObject:data];
                    }
                    
                    NSMutableArray<DepthData *> *asks = [NSMutableArray array];
                    CGFloat cumulativeAmount1 = 0;
                    for (int i = 0; i < 10; i++) {
                        DepthData *data = [[DepthData alloc] init];
                        data.price = 100 + i; // 示例价格
                        data.amount = arc4random_uniform(10) + 1; // 随机数量
                        cumulativeAmount1 += data.amount;
                        data.cumulativeAmount = cumulativeAmount1;
                        [asks addObject:data];
                    }
                    
                    [subscriber sendNext:RACTuplePack(asks, bids)];
                    [subscriber sendCompleted];
                });
                
                return nil;
            }];
            
        }];
    }
    return _depthDataCommand;
}
@end
