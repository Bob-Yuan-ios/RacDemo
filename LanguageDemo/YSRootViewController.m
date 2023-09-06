//
//  YSRootViewController.m
//  LanguageDemo
//
//  Created by Bob on 2023/7/27.
//

#import "YSRootViewController.h"
#import <Masonry/Masonry.h>


#import "YSJJListModel.h"

@interface YSRootViewController ()

@property (nonatomic, strong) YSJJListModel *jjListModel;

@end

@implementation YSRootViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    
    // 释放主线程压力
    dispatch_async(dispatch_queue_create(0, 0), ^{
        [self.jjListModel.jjCommand execute:nil];
    });
}

- (YSJJListModel *)jjListModel{
    if(!_jjListModel){
        _jjListModel = [[YSJJListModel alloc] init];
        [_jjListModel.jjCommand.executionSignals.switchToLatest.deliverOnMainThread subscribeNext:^(id  _Nullable x) {
            [(NSArray *)x enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
              YSJJModel *model = (YSJJModel *)obj;
              NSLog(@"%@", model.description);
            }];
            
        }];
        
        [_jjListModel.jjCommand.errors.deliverOnMainThread subscribeNext:^(NSError * _Nullable x) {
            NSLog(@"jj error is:(%@)", x.userInfo);
        }];
        
    }
    return _jjListModel;
}

 

@end
