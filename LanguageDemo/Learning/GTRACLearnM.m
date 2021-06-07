//
//  GTRACLearnM.m
//  LanguageDemo
//
//  Created by Bob on 2021/5/25.
//

//大纲：https://www.jianshu.com/p/2b12b6659413
//RACMulticastConnection：https://www.dazhuanlan.com/2019/11/30/5de16ed131676/

#import "GTRACLearnM.h"
#import "ReactiveObjC.h"
#import "RACReturnSignal.h"
 
@implementation GTRACLearnM
 
+ (void)learningSignal {
    [GTRACLearnM schedulerTest];
}
 
+ (void)schedulerTest{
//    RACSignal *signal = [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
//
//        NSLog(@"sender thread is:%@", [NSThread currentThread]);
//        [subscriber sendNext:@1];
//        [subscriber sendCompleted];
//
//        return [RACDisposable disposableWithBlock:^{}];
//    }];
//
//    [[signal deliverOn:[RACScheduler schedulerWithPriority:RACSchedulerPriorityBackground]] subscribeNext:^(id  _Nullable x) {
//        NSLog(@"recived Thread is:%@ ====== value is:%@", [NSThread currentThread], x);
//    } error:^(NSError * _Nullable error) {
//        ;
//    } completed:^{
//        ;
//    }];
    
    [[[RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
        NSLog(@"sender thread is:%@", [NSThread currentThread]);
        [subscriber sendNext:@"1"];
        [subscriber sendCompleted];
        return [RACDisposable disposableWithBlock:^{
            ;
        }];
    }] subscribeOn:[RACScheduler schedulerWithPriority:RACSchedulerPriorityDefault name:@"helloScheduler"]]
     subscribeNext:^(id  _Nullable x) {
        NSLog(@"recive thread is:%@, information is:%@", [NSThread currentThread], x);
    }];
}

+ (void)bindTest{
    
    RACSubject *subject = [RACSubject subject];

    // 绑定信号
    RACSignal *bindSignal = [subject bind:^RACSignalBindBlock _Nullable{
        return  ^RACSignal *(id _Nullable value, BOOL *stop){
            NSString *newString = [NSString stringWithFormat:@"do bind: %@", value];
            return [RACReturnSignal return:newString];
        };
    }];
 
    [bindSignal subscribeNext:^(id  _Nullable x) {
        NSLog(@"订阅数据 ... (%@) ...", x);
    }];
    
    [subject sendNext:@"### Hello World ###"];
}

+ (void)swiToLastest{
    RACCommand *command = [[RACCommand alloc] initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {
        NSLog(@"input is:(%@)", input);
        return [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
            [subscriber sendNext:@"接收到input指令"];
            [subscriber sendCompleted];
            return nil;
        }];
    }];
    
    [command.executionSignals.switchToLatest subscribeNext:^(id  _Nullable x) {
        NSLog(@"switchToLatest === className:(%@), value:(%@)", NSStringFromClass([x class]), x);
    }];
    
    [command.executing subscribeNext:^(NSNumber * _Nullable x) {
        NSLog(@"executing === className:(%@), value:(%@)", NSStringFromClass([x class]), x);
    }];
    
    [command execute:@"发送input命令"];
}

+ (void)command{
    RACCommand *command = [[RACCommand alloc] initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {
        NSLog(@"raccommand input value is:%@, %@", NSStringFromClass([input class]), input);
        return [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
            [subscriber sendNext:@{@"returnCode": @(200), @"returnMsg": @"asDf=="}];
            return nil;
        }];
    }];
    
    RACSignal *signal = [command execute:@"触发需要token的操作，需要获取token"];
    
    [signal subscribeNext:^(id  _Nullable x) {
        NSLog(@"接受信号:%@, %@", NSStringFromClass([x class]), x);
    }];
}

+ (void)signalReplay{
    // 使用replay方法 通知不会重复触发 订阅全部都能执行
    RACSignal *signal = [[RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
        NSLog(@"开始请求数据");
        [subscriber sendNext:@"数据已正常返回"];
        return nil;;
    }] replay];
    
    
    [signal subscribeNext:^(id  _Nullable x) {
        NSLog(@"第一次订阅读取数据:%@", x);
    }];
    
    [signal subscribeNext:^(id  _Nullable x) {
        NSLog(@"第二次订阅读取数据:%@", x);
    }];
}

+ (void)replaySubject{
    RACSignal *signal = [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
        NSLog(@"开始请求数据");
        [subscriber sendNext:@"数据已正常返回"];
        return nil;;
    }];
 
    RACMulticastConnection *connection = [signal multicast:[RACReplaySubject subject]];
    [connection.signal subscribeNext:^(id  _Nullable x) {
        NSLog(@"第一次订阅读取数据:%@", x);
    }];
    
    [connection.signal subscribeNext:^(id  _Nullable x) {
        NSLog(@"第二次订阅读取数据:%@", x);
    }];

    [connection connect];
    
    // 此订阅能正常执行
    [connection.signal subscribeNext:^(id  _Nullable x) {
        NSLog(@"第三次订阅读取数据:%@", x);
    }];
}

/// 订阅信号 避免多次重复执行
+ (void)seventh{
    RACSignal *signal = [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
        NSLog(@"开始请求数据");
        [subscriber sendNext:@"数据已正常返回"];
        return nil;;
    }];

    RACMulticastConnection *connection = [signal publish];

    [connection.signal subscribeNext:^(id  _Nullable x) {
        NSLog(@"第一次订阅读取数据:%@", x);
    }];

    [connection.signal subscribeNext:^(id  _Nullable x) {
        NSLog(@"第二次订阅读取数据:%@", x);
    }];

    [connection connect];

    // 此订阅不会执行
    [connection.signal subscribeNext:^(id  _Nullable x) {
        NSLog(@"第三次订阅读取数据:%@", x);
    }];
}

// 序列化请求
+ (void)sixth{
    RACSignal *first = [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
        NSLog(@"第一个网络请求");
        [subscriber sendNext:@{@"returnCode": @(200), @"returnMsg":@"Hello"}];
        return nil;
    }];
    
    RACSignal *second = [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
        NSLog(@"第二个网络请求");
        [subscriber sendNext:@{@"returnCode": @(200), @"returnMsg":@"World"}];
        return nil;
    }];
    
    [GTRACLearnM rac_liftSelector:@selector(updateUIWithData1:data2:)
      withSignalsFromArray:@[first, second]];
}

+ (void)updateUIWithData1:(NSDictionary *)data1 data2:(NSDictionary *)data2{
    NSLog(@"更新UI:%@ %@", [data1 objectForKey:@"returnMsg"], [data2 objectForKey:@"returnMsg"]);
}

//遍历数组 字典转模型
+ (void)fifth{
    NSDictionary *dic1 = @{ @"name": @"bob", @"userId": @"1" };
    NSDictionary *dic2 = @{ @"name": @"bob", @"userId": @"1" };
    NSArray *arr = @[dic1, dic2];
    NSArray *arrM = [[arr.rac_sequence.signal map:^id _Nullable(id  _Nullable value) {
        return  [[UserModel alloc] modelwithDic:value];
    }] toArray];
    NSLog(@"rac数组🏪的封装处理:(%@)", arrM);
}

//遍历数组 字典转模型
+ (void)forth{
    NSDictionary *dic1 = @{ @"name": @"bob", @"userId": @"1" };
    NSDictionary *dic2 = @{ @"name": @"bob", @"userId": @"1" };
    NSArray *arr = @[dic1, dic2];
    NSMutableArray *arrM = [[NSMutableArray alloc] initWithCapacity:2];
    [arr.rac_sequence.signal subscribeNext:^(id  _Nullable x) {
        UserModel *model = [[UserModel alloc] modelwithDic:x];
        [arrM addObject:model];
    } error:^(NSError * _Nullable error) {
        NSLog(@"错误信息:%@", error.userInfo);
    } completed:^{
        NSLog(@"信号处理结束:%@", arrM);
    }];
}

//遍历字典 输出RACTuple
+ (void)third{
    NSDictionary *dic = @{ @"name": @"bob", @"userId": @"1" };
    [dic.rac_sequence.signal subscribeNext:^(RACTuple *tuple) {
        NSLog(@"字典遍历结果:key = (%@), value = (%@)", tuple.first, tuple.last);
    } error:^(NSError * _Nullable error) {
        NSLog(@"字典信号异常结束:(%@)", error.userInfo);
    } completed:^{
        NSLog(@"字典信号正常结束");
    }];
}

+ (void)second{
    NSArray *arr = @[@"1", @"2", @"3"];
    RACSequence *seq = arr.rac_sequence;
    RACSignal *seqSignal = seq.signal;
    [seqSignal subscribeNext:^(id  _Nullable x) {
        NSLog(@"数组遍历结果:(%@)", x);
    } error:^(NSError * _Nullable error) {
        NSLog(@"数组信号异常结束:(%@)", error.userInfo);
    } completed:^{
        NSLog(@"数组信号正常结束");
    }];
}

//RAC 初印象
+ (void)first{
    //创建信号
    RACSignal *signal = [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {

        //发送消息
        [subscriber sendNext:@"Hello"];
        [subscriber sendNext:@"World"];

        //信号结束
#if DEBUG
        NSError *error = [NSError errorWithDomain:@"www.baidu.com" code:1001 userInfo:@{@"msg": @"测试错误"}];
        [subscriber sendError:error];
#else
        [subscriber sendCompleted];
#endif

        //销毁信号
        RACDisposable *disposable = [RACDisposable disposableWithBlock:^{
            NSLog(@"disposable signal");
        }];

        return disposable;
    }];

    //订阅信号
    [signal subscribeNext:^(id  _Nullable x) {
          NSLog(@"接收到数据:%@", x);
    } error:^(NSError * _Nullable error) {
        NSLog(@"信号异常结束:%@", [error.userInfo objectForKey:@"msg"]);
    } completed:^{
        NSLog(@"信号正常结束");
    }];
}
@end

@implementation UserModel

- (UserModel *)modelwithDic:(NSDictionary *)dic{
    if (self) {
        self.name = [dic objectForKey:@"name"];
        self.userId = [dic objectForKey:@"userId"];
    }
    return self;
}
@end
