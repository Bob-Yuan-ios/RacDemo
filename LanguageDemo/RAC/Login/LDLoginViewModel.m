//
//  LDLoginViewModel.m
//  LanguageDemo
//
//  Created by Bob on 2021/12/24.
//

#import "LDLoginViewModel.h"

@implementation LDLoginViewModel

- (LDContentModel *)contentModel{
    if (!_contentModel) {
        _contentModel = [[LDContentModel alloc] init];
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

            @strongify(self);
            NSLog(@"接收信号:%@", input);
            return [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
                //https请求 获取数据返回
                sleep(1.f);
                NSDictionary *dic = @{@"code": @(0),@"msg": @"登录成功",
                                      @"data": @{@"age": @"18",@"sex": @"male"}};
                if (0 == [[dic objectForKey:@"code"] intValue]) {

                    NSDictionary *data = [dic objectForKey:@"data"];
                    if (data && [data isKindOfClass:[NSDictionary class]]) {
                        self.userModel = [LDUserM modelWithDictionary:data];
                        NSLog(@"返回数据:%@", self.userModel.description);
                        [subscriber sendNext:@{@"code": @(0)}];
                        return nil;
                    }
                }
                
                [subscriber sendNext:@{@"code": @(-100), @"msg": dic[@"msg"]}];
                return nil;
            }];
        }];
    }
    return _loginCommand;
}
@end


@implementation LDContentModel

- (instancetype)init{
    self = [super init];
    if (self) {
        _userName = @"";
        _passwd = @"";
    }
    return self;
}

- (NSString *)description{
    return [NSString stringWithFormat:@"username=%@&password=%@", _userName, _passwd];
}

- (void)setValue:(id)value forUndefinedKey:(NSString *)key{
    NSLog(@"undefinedKey:%@ ===", key);
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

- (void)setValue:(id)value forUndefinedKey:(NSString *)key{
    NSLog(@"undefinedKey:%@ ===", key);
}
@end
