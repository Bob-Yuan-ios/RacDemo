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


@property (nonatomic, assign)  MBCLicenseError licenseError;

@end

@implementation YSRootViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    
//    sRwAAAELY29tLmJ0Y2MuaHkTtqprNKdAhMAPlpqIJyeH0Mo2Ad/f0hPI7kYmr/RsWB3sijCadDiiR78GUQRi3FDVY5ggCuY2wfG59k+J6HzwwHpgotDP4MlpZwSOXzsszJAnPId2tG0LwLqS/OKHCmcv8GyHhGWbubWGKKZqX7KOxgarsJ9P1WBvnzlmRpLhRsR29b1ECjMh6Bucg7ROtof8kJERZIZN5NfMkdI0KBRkAZEFF2aMujzSMXEglb/b
    
//    sRwCAAtjb20uYnRjYy5oeQFsZXlKRGNtVmhkR1ZrVDI0aU9qRTJPVEE1TmpZNE1UQTJNVFlzSWtOeVpXRjBaV1JHYjNJaU9pSTROamd5TlRKaVpDMDVZelUxTFdZMk5qRXRNVGxpTUMwM1pqZ3dPVE15Tm1RNE1XRWlmUT09kh5w6UJ22lIFewAz0RVi7HNYLN1C8QBfLWZhSDW6zJN69VXucAuDf1wNIkh3ZOufZXUhJg3fqwfQ2aidskF2xXaorwPTt3c36ivk8epm4PS9HTtmTBQUGUlVJEBSI3hp
    
//    base64 string
    
    /*
     - (NSString *)base64EncodedString;
     {
         NSData *data = [self dataUsingEncoding: NSUTF8StringEncoding];
         return [data base64EncodedStringWithOptions:0];
     }
     */
    [[MBCMicroblinkSDK sharedInstance] setLicenseKey:@"sRwCAAtjb20uYnRjYy5oeQFsZXlKRGNtVmhkR1ZrVDI0aU9qRTJPVEE1TmpZNE1UQTJNVFlzSWtOeVpXRjBaV1JHYjNJaU9pSTROamd5TlRKaVpDMDVZelUxTFdZMk5qRXRNVGxpTUMwM1pqZ3dPVE15Tm1RNE1XRWlmUT09kh5w6UJ22lIFewAz0RVi7HNYLN1C8QBfLWZhSDW6zJN69VXucAuDf1wNIkh3ZOufZXUhJg3fqwfQ2aidskF2xXaorwPTt3c36ivk8epm4PS9HTtmTBQUGUlVJEBSI3hp" errorCallback:^(MBCLicenseError licenseError) {
        self.licenseError = licenseError;
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
    
    if(self.licenseError) return;
    
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
