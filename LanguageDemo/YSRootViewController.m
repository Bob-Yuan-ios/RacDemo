//
//  YSRootViewController.m
//  LanguageDemo
//
//  Created by Bob on 2023/7/27.
//

#import "YSRootViewController.h"
#import <Masonry/Masonry.h>


#import "YSJJListModel.h"
#import "AppDelegate.h"

@interface YSRootViewController ()

@property (nonatomic, strong) YSJJListModel *jjListModel;
@property (nonatomic, strong) UIButton *btn;

@end

@implementation YSRootViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = @"根视图-1";
    self.view.backgroundColor = [UIColor whiteColor];
    
    NSString *hexString = [self convertStringToHex:@"123"];
    NSLog(@"##### hexString...(%@)", hexString);
    
    _btn = [UIButton buttonWithType:UIButtonTypeSystem];
    [self.view addSubview:_btn];
    
    [_btn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_offset(20);
        make.right.bottom.mas_offset(-20);
        make.height.mas_equalTo(44);
    }];
    
    _btn.backgroundColor = [UIColor yellowColor];
    [_btn addTarget:self action:@selector(changeRootViewController) forControlEvents:UIControlEventTouchUpInside];
}

- (void)changeRootViewController{
    AppDelegate *delegate = (AppDelegate *)[UIApplication sharedApplication].delegate;
    [delegate launchKLine];
}

- (NSString *)convertStringToHex:(NSString *)str{
    if (!str || [str length] == 0) {
        return @"";
    }
    NSData *data = [str dataUsingEncoding:NSUTF8StringEncoding];

    NSMutableString *string = [[NSMutableString alloc] initWithCapacity:[data length]];

    [data enumerateByteRangesUsingBlock:^(const void *bytes, NSRange byteRange, BOOL *stop) {
        unsigned char *dataBytes = (unsigned char*)bytes;
        for (NSInteger i = 0; i < byteRange.length; i++) {
            NSString *hexStr = [NSString stringWithFormat:@"%x", (dataBytes[i]) & 0xff];
            if ([hexStr length] == 2) {
                [string appendString:hexStr];
            } else {
                [string appendFormat:@"0%@", hexStr];
            }
        }
    }];

    return string;
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    
    // 释放主线程压力
    dispatch_async(dispatch_queue_create(0, 0), ^{
//        [self.jjListModel.jjCommand execute:nil];
        [self.jjListModel.blockTopCommand execute:nil];
    });
}

- (void)dealloc{
    NSLog(@"########:%s", __func__);
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
        
        [_jjListModel.blockTopCommand.executionSignals.switchToLatest.deliverOnMainThread subscribeNext:^(id  _Nullable x) {
            NSArray *elementArr = x;
            NSLog(@"blockTop count is:(%@)", @(elementArr.count));
            [elementArr enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
                YSBlockTopModel *blockTopModel = obj;
                NSLog(@"stock_list count is:(%@)", @(blockTopModel.stock_list.count));
            }];
        }];
        
        [_jjListModel.blockTopCommand.errors.deliverOnMainThread subscribeNext:^(NSError * _Nullable x) {
            NSLog(@"blockTop error is:(%@)", x.userInfo);
        }];
    }
    return _jjListModel;
}

 

@end
