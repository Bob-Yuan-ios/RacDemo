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

- (LDUserM *)userModel{
    if (!_userModel) {
        _userModel = [[LDUserM alloc] init];
    }
    return _userModel;
}

- (RACCommand *)loginCommand{
    if (!_loginCommand) {
        
        @weakify(self);
        _loginCommand = [[RACCommand alloc] initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {

            NSLog(@"请求参数:%@",  self_weak_.contentModel.description);
            return [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
                //https请求 获取数据返回
                sleep(1.f);
                NSDictionary *dic = @{@"code": @(200),@"msg": @"登录成功",
                                      @"data": @{@"age": @"18",@"sex": @"male"}};
                if (200 == [[dic objectForKey:@"code"] intValue]) {
                    NSDictionary *data = [dic objectForKey:@"data"];
                    if (data && [data isKindOfClass:[NSDictionary class]]) {
                        self_weak_.userModel = [LDUserM modelWithDictionary:data];
                        NSLog(@"返回数据:%@", self_weak_.userModel.description);
                        [subscriber sendNext:@""];
                        return nil;
                    }
                }
                
                [subscriber sendError:nil];
                return nil;
            }];
        }];
    }
    return _loginCommand;
}
@end


@implementation LDContentModel

- (NSString *)description{
    return [NSString stringWithFormat:@"username=%@&password=%@", _userName, _passwd];
}
@end

@implementation LDUserM

- (instancetype)init{
    self = [super init];
    if (self) {
        _age = @"";
        _sex = @"";
    }
    return self;
}

- (NSString *)description{
    return [NSString stringWithFormat:@"age=%@&six=%@", _age, _sex];
}
@end
