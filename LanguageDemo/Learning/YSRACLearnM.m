//
//  YSRACLearnM.m
//  LanguageDemo
//
//  Created by Bob on 2021/5/25.
//

//大纲：https://www.jianshu.com/p/2b12b6659413
 
#import "YSRACLearnM.h"
#import "ReactiveObjC.h"
#import "RACReturnSignal.h"
 
@implementation YSRACLearnM
 
+ (void)learningSignal{
    [YSRACLearnM swiToLastest];
}
 
#pragma mark 创建信号 -- 订阅和发送一对一
/*
 输出日志
 2021-10-09 11:30:22.778498+0800 LanguageDemo[14744:216391] next infor:10
 2021-10-09 11:30:22.778817+0800 LanguageDemo[14744:216391] error code:-1
 */
+ (void)signalTest{
    RACSignal *signal = [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
        NSLog(@"发送数据///");
        [subscriber sendNext:@10];
        [subscriber sendError:[NSError errorWithDomain:@"www.baidu.com" code:-1 userInfo:nil]];
        [subscriber sendCompleted];
        
        return nil;
    }];

    [signal subscribeNext:^(id  _Nullable x) {
        NSLog(@"next infor:%@", x);
    } error:^(NSError * _Nullable error) {
        NSLog(@"error code:%ld", (long)error.code);
    } completed:^{
        NSLog(@"test done!");
    }];
}

#pragma mark 创建信号 -- 返回对象
+ (void)disposableTest{
 
    RACSignal *signal = [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
       
        [subscriber sendNext:@10];
        [subscriber sendCompleted];
        
        RACDisposable *dis = [RACDisposable disposableWithBlock:^{
            // 取消订阅时触发 如果对象被强引用 则不会触发释放 主动调用 则取消订阅 
            NSLog(@"RACDisposable...");
        }];
        
        return dis;
    }];
    
    [signal subscribeNext:^(id  _Nullable x) {
       NSLog(@"next...%@", x);
    } completed:^{
        NSLog(@"next done!");
    }];
}

#pragma mark 热信号 -- 可以主动发送信号
+ (void)subjectTest{
    // 只能先订阅后发送
    RACSubject *subject = [RACSubject subject];
    [subject subscribeNext:^(id  _Nullable x) {
        NSLog(@"x = %@", x);
    }];
    [subject sendNext:@21];
    
    // 先发送后订阅 也能正常执行
    RACReplaySubject *subject1 = [RACReplaySubject subject];
    [subject1 sendNext:@"12"];
    [subject1 subscribeNext:^(id  _Nullable x) {
        NSLog(@"next x = %@", x);
    }];
}

#pragma mark 网络请求
/*
 2021-10-09 13:19:51.818736+0800 LanguageDemo[15309:287357] 第一个网络请求
 2021-10-09 13:19:51.819551+0800 LanguageDemo[15309:287357] 第二个网络请求
 2021-10-09 13:19:51.820169+0800 LanguageDemo[15309:287357]
 第一个网络请求数据:Hello First
 第二个网络请求数据:World Second
 */
+ (void)liftTest{
    RACSignal *first = [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
        NSLog(@"第一个网络请求");
        [subscriber sendNext:@{@"returnCode": @(200), @"returnMsg":@"Hello First"}];
        return nil;
    }];
    
    RACSignal *second = [RACSignal createSignal:^RACDisposable * _Nullable(id<RACSubscriber>  _Nonnull subscriber) {
        NSLog(@"第二个网络请求");
        [subscriber sendNext:@{@"returnCode": @(200), @"returnMsg":@"World Second"}];
        return nil;
    }];
    
    [YSRACLearnM rac_liftSelector:@selector(updateUIWithData1:data2:)
      withSignalsFromArray:@[first, second]];
}

+ (void)updateUIWithData1:(NSDictionary *)data1 data2:(NSDictionary *)data2{
    NSLog(@"\n第一个网络请求数据:%@\n第二个网络请求数据:%@", [data1 objectForKey:@"returnMsg"], [data2 objectForKey:@"returnMsg"]);
}


#pragma mark 订阅信息避免重复执行 -- 确保信号Block代码只执行一次
/*
 2021-10-09 13:22:32.220507+0800 LanguageDemo[15333:290442] 开始请求数据
 2021-10-09 13:22:32.220772+0800 LanguageDemo[15333:290442] 第一次订阅读取数据:数据已正常返回
 2021-10-09 13:22:32.220998+0800 LanguageDemo[15333:290442] 第二次订阅读取数据:数据已正常返回
 */
+ (void)castConnectionTest{
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

#pragma mark 不同的指令 不同的响应
+ (void)commandTest{
    RACCommand *command = [[RACCommand alloc] initWithSignalBlock:^RACSignal * _Nonnull(id  _Nullable input) {
        NSLog(@"input is:%@, %@", NSStringFromClass([input class]), input);
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

/*
 2021-10-09 13:38:24.723308+0800 LanguageDemo[15475:307155] executing === className:(__NSCFBoolean), value:(0)
 2021-10-09 13:38:24.723945+0800 LanguageDemo[15475:307155] input is:(发送input命令)
 2021-10-09 13:38:24.733708+0800 LanguageDemo[15475:307155] executing === className:(__NSCFNumber), value:(1)
 2021-10-09 13:38:24.734595+0800 LanguageDemo[15475:307155] switchToLatest === className:(__NSCFConstantString), value:(接收到input指令)
 2021-10-09 13:38:24.736193+0800 LanguageDemo[15475:307155] executing === className:(__NSCFNumber), value:(0)

 */
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


#pragma mark 实时监听数据的刷新
/*
 2021-10-09 13:34:48.883179+0800 LanguageDemo[15438:303270] 订阅数据 ... (do bind: ### Hello World ###) ...
 */
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

#pragma mark 异步线程信号
+ (void)schedulerTest{
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



#pragma mark 数组遍历
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
    NSDictionary *dic2 = @{ @"name": @"bob1", @"userId": @"2" };
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

#pragma mark 冷信号
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
