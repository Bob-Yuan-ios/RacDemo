//
//  ThreadModel.m
//  RacDemo
//
//  Created by Bob on 2021/8/9.
//

#import "ThreadModel.h"

#import <os/lock.h>
#import <pthread/pthread.h>

#define TICK NSDate *startTime = [NSDate date];
#define TOCK NSLog(@"===========Time:%lf", -[startTime timeIntervalSinceNow]);

@implementation ThreadModel

+ (void)testLock{

    NSUInteger count = 1000 * 10000;
    
    TICK
    for (int i = 0; i < count; i++) {
        
//        os_unfair_lock &osLock = &(OS_UNFAIR_LOCK_INIT);
//        os_unfair_lock_lock(osLock);
//        os_unfair_lock_unlock(osLock);
//        2021-08-09 16:44:32.022665+0800 RacDemo[20878:325180] ===========Time:0.151102

//        dispatch_semaphore_t semaphore_t = dispatch_semaphore_create(1);
//        dispatch_semaphore_wait(semaphore_t, DISPATCH_TIME_FOREVER);
//        dispatch_semaphore_signal(semaphore_t);
//        2021-08-09 16:49:46.795690+0800 RacDemo[20941:328919] ===========Time:0.160759

//        pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
//        pthread_mutex_lock(&mutex);
//        pthread_mutex_unlock(&mutex);
//        2021-08-09 16:52:55.179425+0800 RacDemo[21020:333999] ===========Time:0.223802

//        NSLock *testlock = [[NSLock alloc] init];
//        [testlock lock];
//        [testlock unlock];
//        2021-08-09 16:54:08.381847+0800 RacDemo[21056:336456] ===========Time:0.254232
        
    }
    TOCK
}

+ (void)sourceCon{
    
//    dispatch_queue_t queue = dispatch_queue_create(0, 0);
//    dispatch_source_t timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, queue);
//    if (timer) {
//        dispatch_source_set_timer( timer, dispatch_walltime(NULL, 0), 30ull * NSEC_PER_SEC, 1ull * NSEC_PER_SEC);
//        dispatch_source_set_event_handler( timer, ^{
//            NSLog(@"helllo source timer");
//        });
//        dispatch_resume(timer);
//    }
    
    int fd = open("/Users/bob/Desktop/tf_.rtf", O_RDONLY);
    if (-1 == fd) {
        NSLog(@"...........error");
        return;
    }
    
    fcntl(fd, F_SETFL, O_NONBLOCK);
    
    dispatch_queue_t globalQ = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
    dispatch_source_t readSource = dispatch_source_create(DISPATCH_SOURCE_TYPE_READ, fd, 0, globalQ);
    if (!readSource) {
        NSLog(@"readSource create error");
        close(fd);
        return;
    }
    
    dispatch_source_set_event_handler(readSource, ^{
        size_t estimated = dispatch_source_get_data(readSource) + 1;
        char *buffer = (char *)malloc(estimated);
        
        NSLog(@"......(%ld)", estimated);
        if (buffer) {
//            ssize_t actual = read(fd, buffer, (estimated));
            __block BOOL done = YES;
//            dispatch_async(globalQ, ^{
//                sleep(1.f);
//                done = YES;
//                NSLog(@"done...:(%@)", @(done));
//            });
            free(buffer);
            
            NSLog(@"1111... done...:(%@)", @(done));
            if (done) {
                NSLog(@"cancel readSource");
                dispatch_source_cancel(readSource);
            }
        }
    });
    
    dispatch_source_set_cancel_handler(readSource, ^{
        NSLog(@"close read...");
        close(fd);
    });
    
    dispatch_resume(readSource);
}

#pragma mark NSOperation
+ (void)invocationOperation{
    
    NSDictionary *dict = @{
        @"key1": @"Hello World"
    };
    
    NSInvocationOperation *op = [[NSInvocationOperation alloc] initWithTarget:self selector:@selector(operationSel:) object:dict];
    
    NSLog(@"start before");
    [op start];
    NSLog(@"start after");
}

+ (void)operationSel:(NSDictionary *)dict{
    
    NSLog(@"dictValue = %@", [dict valueForKey:@"key1"]);
    sleep(2);
    NSLog(@"currentThread = %@", [NSThread currentThread]);
    NSLog(@"mainThread = %@", [NSThread mainThread]);
}

+ (void)blockOperation{
    
    NSBlockOperation *op = [NSBlockOperation blockOperationWithBlock:^{
        NSLog(@"BlockOperation 1 begain");
        sleep(2);
        NSLog(@"BlockOperation 1 currentThread = %@", [NSThread currentThread]);
        NSLog(@"BlockOperation 1 mainThread = %@", [NSThread mainThread]);
    }];
    

    [op addExecutionBlock:^{
        NSLog(@"BlockOperation 2 begain");
        sleep(2);
        NSLog(@"BlockOperation 2 currentThread = %@", [NSThread currentThread]);
        NSLog(@"BlockOperation 2 mainThread = %@", [NSThread mainThread]);
    }];
    
    [op addExecutionBlock:^{
        NSLog(@"BlockOperation 3 begain");
        sleep(2);
        NSLog(@"BlockOperation 3 currentThread = %@", [NSThread currentThread]);
        NSLog(@"BlockOperation 3 mainThread = %@", [NSThread mainThread]);
    }];
    
    NSLog(@"start before");
    [op start];
    NSLog(@"start after");

}

@end
