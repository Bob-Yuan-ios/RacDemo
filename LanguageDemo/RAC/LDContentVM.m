//
//  LDContentVM.m
//  LanguageDemo
//
//  Created by Bob on 2021/12/24.
//

#import "LDContentVM.h"

@implementation LDContentVM

- (LDContentModel *)contentModel{
    if (!_contentModel) {
        _contentModel = [LDContentModel new];
    }
    return _contentModel;
}

- (RACCommand *)loginCommand{
    if (!_loginCommand) {
        _loginCommand = [[RACCommand alloc] initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {
            NSLog(@"input is:%@, %@", NSStringFromClass([input class]), input);
            return [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
                //https请求 获取数据返回
                NSDictionary *dic = @{@"code": @(200),@"msg": @"登录成功",
                                      @"data": @{@"age": @"18",@"sex": @"male"}};
                [subscriber sendNext:dic];
                return nil;
            }];
        }];
    }
    return _loginCommand;
}
@end


@implementation LDContentModel

@end

@implementation LDUserM

- (NSString *)description{
    return [NSString stringWithFormat:@"age=%@&six=%@", _age, _sex];
}
@end
