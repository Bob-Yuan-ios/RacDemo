//
//  GTWkWebViewVC.m
//  LanguageDemo
//
//  Created by Bob on 2021/5/11.
//

#import "GTWkWebViewVC.h"
#import <WebKit/WebKit.h>
#import <Masonry/Masonry.h>
#import "AppDelegate.h"

#import "GTWkBottomOperationView.h"

#define BOTTOMHEIGHT       49
//#define URLSTR           @"https://h5.btcccn.com/?utm_source=bishijie"
//#define URLSTR              @"https://h5.btcc.com/detail/146516"
#define URLSTR             @"https://h5.btcc.com/detail/146516?token=&_token=&amp;account=&deviceId=76:53:d5:6f:1a:36&from=app&login=false"
#define WeakSelf(type)      __weak typeof(type) weak##type = type;

@interface GTWkWebViewVC ()<WKNavigationDelegate>

@property (nonatomic, strong) WKWebView *wkWebV;

@property (nonatomic, strong) UIProgressView *progressV;

@property (nonatomic, strong) GTWkBottomOperationView *operationV;

@property (nonatomic, copy)  NSString *wkTitle;
@end

@implementation GTWkWebViewVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    
    [self loadHomePage];
    self.progressV.hidden = YES;
    [self loadBottomOperationView];
}

- (void)dealloc{
    NSLog(@"#dealloc...");
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

#pragma mark 自由方法

/// 获取根视图
- (UIWindow *)keyWindow{
    AppDelegate *appD = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    if ([appD respondsToSelector:@selector(window)]) {
        UIWindow *keyWindow = [appD window];
        if (keyWindow) return keyWindow;
    }

    if (@available(iOS 13, *)) {
        NSArray *arr  = [[[UIApplication sharedApplication] connectedScenes] allObjects];
        UIWindowScene *wScene = (UIWindowScene *)arr[0];
        if (wScene.windows)  return [wScene.windows lastObject];
    }
    
    return [UIApplication sharedApplication].keyWindow;
}


/// 加载底部操作按钮
- (void)loadBottomOperationView{
    WeakSelf(self);
    self.operationV.clickFirstBlock = ^{
        [weakself loadHomePage];
    };
    
    self.operationV.clickSecondBlock = ^{
        [weakself goBackPage];
    };
    
    self.operationV.clickThirdBlock = ^{
        [weakself forwardPage];
    };
    
    self.operationV.clickForthBlock = ^{
        [weakself reloadWkWebView];
    };
}

///  加载首页
- (void)loadHomePage{
    NSURL *url = [NSURL URLWithString:URLSTR];
    [self.wkWebV loadRequest:[NSURLRequest requestWithURL:url]];
}

/// 浏览器返回上一页
- (void)goBackPage{
    if ([_wkWebV canGoBack]) [_wkWebV goBack];
}


/// 浏览器向前进页
- (void)forwardPage{
    if ([_wkWebV canGoForward]) [_wkWebV goForward];
}


/// 重载页面
- (void)reloadWkWebView{
    [_wkWebV reload];
}

#pragma mark - WKNavigationDelegate
- (void)webView:(WKWebView *)webView didStartProvisionalNavigation:(WKNavigation *)navigation {
    NSLog(@"didStartProvisionalNavigation...");
    self.progressV.hidden = NO;
}

- (void)webView:(WKWebView *)webView didCommitNavigation:(WKNavigation *)navigation {
    NSLog(@"didCommitNavigation...");
}

- (void)webView:(WKWebView *)webView didFinishNavigation:(WKNavigation *)navigation {
    NSLog(@"didFinishNavigation...");
}

- (void)showProgress{
    [self.progressV setAlpha:1.0f];
    BOOL animated = self.wkWebV.estimatedProgress > self.progressV.progress;
    [self.progressV setProgress:self.wkWebV.estimatedProgress animated:animated];
    
    if (self.wkWebV.estimatedProgress >= 1.0f) {
        [UIView animateWithDuration:0.3f delay:0.3f options:UIViewAnimationOptionCurveEaseOut
                         animations:^{
                             [self.progressV setAlpha:0.0f];
                         }
                         completion:^(BOOL finished) {
                             [self.progressV setProgress:0.0f animated:NO];
                         }];
    }
}

#pragma mark - KVO
//kvo 监听进度
-(void)observeValueForKeyPath:(NSString *)keyPath
                     ofObject:(id)object
                       change:(NSDictionary<NSKeyValueChangeKey,id> *)change
                      context:(void *)context{
    
    if ([keyPath isEqualToString:NSStringFromSelector(@selector(estimatedProgress))]
        && object == self.wkWebV) {
        [self showProgress];
        return;
    }
    
    [super observeValueForKeyPath:keyPath ofObject:object change:change  context:context];
}

- (void)setWkWebViewConstraints{
    CGFloat originY = 0;
    CGFloat height = [[UIScreen mainScreen] bounds].size.height - BOTTOMHEIGHT;
    
    if (@available(iOS 11, *)) {
        UIEdgeInsets insets = [self keyWindow].safeAreaInsets;
        originY = insets.top;
        CGFloat bottomH = insets.bottom;
        height -= (originY + bottomH);
    }
    
    [_wkWebV mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.right.mas_equalTo(self.view);
        make.top.mas_offset(@(originY));
        make.height.mas_equalTo(@(height));
    }];
}

- (void)setProgressConstraints{
    CGFloat originY = CGRectGetHeight([UIApplication sharedApplication].statusBarFrame);
    if (@available(iOS 11, *))  originY += [self keyWindow].safeAreaInsets.top;

    [_progressV mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.right.mas_equalTo(self.view);
        make.top.mas_equalTo(self.view).mas_offset(@(originY));
        make.height.mas_equalTo(@2);
    }];
}

#pragma mark lazy load
- (WKWebView *)wkWebV{
    if (!_wkWebV) {
        // 创建WKWebView
        _wkWebV = [WKWebView new];
        [self.view addSubview:_wkWebV];

        _wkWebV.navigationDelegate = self;
        [_wkWebV addObserver:self forKeyPath:NSStringFromSelector(@selector(estimatedProgress)) options:0 context:nil];
        
        [self setWkWebViewConstraints];
    }
    return _wkWebV;
}
 
- (CGFloat)getOperationOriginY{
    CGFloat originY = [[UIScreen mainScreen] bounds].size.height - BOTTOMHEIGHT;
    if (@available(iOS 11, *))  originY -= [self keyWindow].safeAreaInsets.bottom;
    
    return originY;
}
- (GTWkBottomOperationView *)operationV{
    if (!_operationV) {
        _operationV = [[GTWkBottomOperationView alloc] initWithFrame:CGRectMake(0,
                                                                                [self getOperationOriginY],
                                                                                [[UIScreen mainScreen] bounds].size.width,
                                                                                BOTTOMHEIGHT)];
        [self.view addSubview:_operationV];
    }
    return _operationV;
}

- (UIProgressView *)progressV{
    if (!_progressV) {
        _progressV = [[UIProgressView alloc] initWithProgressViewStyle:UIProgressViewStyleDefault];
        [self.view addSubview:_progressV];
   
        [_progressV setTrackTintColor:[UIColor orangeColor]];
        [_progressV setProgressTintColor:[UIColor greenColor]];
        
        [self setProgressConstraints];
    }
    return _progressV;
}

@end
