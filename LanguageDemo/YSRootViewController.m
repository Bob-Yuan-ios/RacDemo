//
//  YSRootViewController.m
//  LanguageDemo
//
//  Created by Bob on 2023/7/27.
//

#import "YSRootViewController.h"
#import <Masonry/Masonry.h>
#import <BlinkCard/BlinkCard.h>

@interface YSRootViewController ()
<
MBCBlinkCardOverlayViewControllerDelegate
>

@property (nonatomic, strong) MBCBlinkCardRecognizer *blinkCardRecognizer;
 
@property (nonatomic, strong) UILabel *resultLabel;

@end

@implementation YSRootViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    
//    sRwAAAELY29tLmJ0Y2MuaHkTtqprNKdAhMAPlpqIJyeH0Mo2Ad/f0hPI7kYmr/RsWB3sijCadDiiR78GUQRi3FDVY5ggCuY2wfG59k+J6HzwwHpgotDP4MlpZwSOXzsszJAnPId2tG0LwLqS/OKHCmcv8GyHhGWbubWGKKZqX7KOxgarsJ9P1WBvnzlmRpLhRsR29b1ECjMh6Bucg7ROtof8kJERZIZN5NfMkdI0KBRkAZEFF2aMujzSMXEglb/b
    
    [[MBCMicroblinkSDK sharedInstance] setLicenseKey:@"sRwAAAEWY29tLmhlbGxvLmxhbmd1YWdlRGVtbxzBkVxEoMc1vGbQVzIJY5pqVJy/tzRCThZ8nJht5i1JamCmIO4QIT5JGIxpCGMcH4aWqVi7boa7d0imkd0K0lHWUt+bZV84wy5k4WI9S9YmYB37YifyjIYBhdwDY0ksI199VWg6xr7+RsIF6chLRLfpgnwB2eI/fcKjNs3k7FvjNp9VvUoOBBTMUmnW9E9AV6BT6Kq/LKqRomB9kZN91mqzTlqlJXPmGrXEoO7T018=" errorCallback:^(MBCLicenseError licenseError) {
        
        NSLog(@"#### error information is:(%@)", @(licenseError));
    }];

    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [self.view addSubview:btn];
    
    [btn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.offset(100);
        make.centerX.mas_equalTo(self.view);
        make.width.mas_equalTo(@(140));
        make.height.mas_equalTo(@(40));
    }];
    
    btn.backgroundColor = [UIColor redColor];
    
    [btn setTitle:@"扫描"
         forState:UIControlStateNormal];
    
    [btn addTarget:self
            action:@selector(startBlinkCard)
  forControlEvents:UIControlEventTouchUpInside];
    
    _resultLabel = [UILabel new];
    _resultLabel.numberOfLines = 0;
    [self.view addSubview:_resultLabel];
    
    [_resultLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(btn.mas_bottom).mas_offset(@(15));
        make.left.mas_offset(@(20));
        make.right.mas_offset(@(-20));
    }];
    _resultLabel.backgroundColor = [UIColor brownColor];
}

- (void)startBlinkCard{
    /** Create BlinkCard recognizer */
       self.blinkCardRecognizer = [[MBCBlinkCardRecognizer alloc] init];
 
        /** Create BlinkCard settings */
       MBCBlinkCardOverlaySettings* settings = [[MBCBlinkCardOverlaySettings alloc] init];
        settings.enableEditScreen = NO;

       /** Create recognizer collection */
       MBCRecognizerCollection *recognizerCollection = [[MBCRecognizerCollection alloc] initWithRecognizers:@[self.blinkCardRecognizer]];
 
    /** Create your ovc erlay view controller */
       MBCBlinkCardOverlayViewController *blinkCardOverlayViewController = [[MBCBlinkCardOverlayViewController alloc] initWithSettings:settings recognizerCollection:recognizerCollection delegate:self];
    
    /** Create recognizer view controller with wanted overlay view controller */
       UIViewController<MBCRecognizerRunnerViewController>* recognizerRunnerViewController = [MBCViewControllerFactory recognizerRunnerViewControllerWithOverlayViewController: blinkCardOverlayViewController];
    
       /** Present the recognizer runner view controller. You can use other presentation methods as well (instead of presentViewController) */
       [self presentViewController:recognizerRunnerViewController animated:YES completion:nil];
}

- (void)blinkCardOverlayViewControllerDidFinishScanning:(MBCBlinkCardOverlayViewController *)blinkCardOverlayViewController state:(MBCRecognizerResultState)state {

    NSLog(@"#### ggg : state:(%@)", @(state));
    // this is done on background thread
    // check for valid state
    if (state == MBCRecognizerResultStateValid) {
        
        // first, pause scanning until we process all the results
        [blinkCardOverlayViewController.recognizerRunnerViewController pauseScanning];

        dispatch_async(dispatch_get_main_queue(), ^{
            // All UI interaction needs to be done on main thread
            MBCBlinkCardRecognizerResult *result = self.blinkCardRecognizer.result;
            if(result){
                self.resultLabel.text = result.description;
                NSLog(@"#### cardNum = (%@)", result.cardNumber);
                [blinkCardOverlayViewController.recognizerRunnerViewController dismissViewControllerAnimated:NO completion:^{
                                    ;
                }];
            }
        });
    }
}

- (void)blinkCardOverlayViewControllerDidTapClose:(nonnull MBCBlinkCardOverlayViewController *)blinkCardOverlayViewController {
    // Your action on cancel
    NSLog(@"#### cancel");
    
    [blinkCardOverlayViewController.recognizerRunnerViewController pauseScanning];
    [blinkCardOverlayViewController.recognizerRunnerViewController dismissViewControllerAnimated:NO completion:^{
                ;
    }];
}
@end
