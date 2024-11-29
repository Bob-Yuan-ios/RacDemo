//
//  YSLoginViewModel.m
//  RacDemo
//
//  Created by Bob on 2024/11/29.
//

#import "YSLoginViewModel.h"

@implementation YSLoginViewModel

- (RACCommand *)loginCommand{
    if(!_loginCommand){
        _loginCommand = [[RACCommand alloc] initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {
            
            return [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                    [subscriber sendNext:@"登录成功"];
                    [subscriber sendCompleted];
                });
                return nil;
            }];
        }];
        

    }
    return _loginCommand;
}
@end
