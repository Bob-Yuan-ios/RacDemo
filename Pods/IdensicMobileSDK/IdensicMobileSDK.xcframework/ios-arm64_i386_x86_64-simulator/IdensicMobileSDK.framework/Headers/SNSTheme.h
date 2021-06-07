//
//  SNSTheme.h
//  IdensicMobileSDK
//

#import <UIKit/UIKit.h>

typedef NSString* SNSIdDocType;

typedef NS_ENUM(NSInteger, SNSThemeDimmingEffect) {
    SNSThemeDimmingEffect_None,
    SNSThemeDimmingEffect_Blur,
    SNSThemeDimmingEffect_FadeIn,
};

@interface SNSTheme : NSObject

+ (nonnull instancetype)darkTheme;

#pragma mark - General

@property (nonatomic) UIStatusBarStyle sns_preferredStatusBarStyle;

@property (nonatomic, nullable) UIColor *sns_navbarBarTintColor;
@property (nonatomic, nullable) UIColor *sns_navbarTintColor;

@property (nonatomic, nullable) UIImage *sns_closeButtonImage;
@property (nonatomic, nullable) UIImage *sns_searchIconImage;

@property (nonatomic, nullable) UIColor *sns_alertTintColor;

@property (nonatomic, nullable) UIFont *sns_poweredByFont;
@property (nonatomic, nullable) UIColor *sns_poweredByColor;

@property (nonatomic, nullable) UIFont *sns_loadingMessageFont;
@property (nonatomic, nullable) UIColor *sns_loadingMessageColor;
@property (nonatomic) UIActivityIndicatorViewStyle sns_loadingSpinnerStyle;

#pragma mark - Buttons

@property (nonatomic, nullable) UIFont *sns_actionButtonFont;
@property (nonatomic) CGFloat sns_actionButtonCornerRadius;
@property (nonatomic) CGFloat sns_actionButtonHeight;

@property (nonatomic, nullable) UIColor *sns_actionButtonTitleColor;
@property (nonatomic, nullable) UIColor *sns_actionButtonBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_actionButtonHighlightedTitleColor;
@property (nonatomic, nullable) UIColor *sns_actionButtonHighlightedBackgroundColor;

@property (nonatomic, nullable) UIColor *sns_alternativeButtonTitleColor;
@property (nonatomic, nullable) UIColor *sns_alternativeButtonBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_alternativeButtonHighlightedTitleColor;
@property (nonatomic, nullable) UIColor *sns_alternativeButtonHighlightedBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_alternativeButtonBorderColor;

#pragma mark - Oops Screen

@property (nonatomic, nullable) UIFont *sns_OopsScreenTitleFont;
@property (nonatomic, nullable) UIFont *sns_OopsScreenTextFont;
@property (nonatomic, nullable) UIColor *sns_OopsScreenTitleColor;
@property (nonatomic, nullable) UIColor *sns_OopsScreenTextColor;
@property (nonatomic, nullable) UIColor *sns_OopsScreenLinkColor;

@property (nonatomic, nullable) UIImage *sns_OopsScreenNetworkFailImage;
@property (nonatomic, nullable) UIImage *sns_OopsScreenFatalFailImage;

@property (nonatomic, nullable) UIImage *sns_OopsScreenWordlessNetworkFailImage;
@property (nonatomic, nullable) UIImage *sns_OopsScreenWordlessFatalFailImage;
@property (nonatomic, nullable) UIImage *sns_OopsScreenWordlessRetryButtonImage;
@property (nonatomic, nullable) UIImage *sns_OopsScreenWordlessGoBackButtonImage;

#pragma mark - Status Screen

@property (nonatomic, nullable) UIColor *sns_StatusScreenBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_StatusScreenSpinnerColor;

@property (nonatomic, nullable) UIFont *sns_StatusHeaderTitleFont;
@property (nonatomic, nullable) UIFont *sns_StatusHeaderSubtitleFont;
@property (nonatomic, nullable) UIFont *sns_StatusHeaderTextFont;
@property (nonatomic, nullable) UIColor *sns_StatusHeaderTitleColor;
@property (nonatomic, nullable) UIColor *sns_StatusHeaderSubtitleColor;
@property (nonatomic, nullable) UIColor *sns_StatusHeaderTextColor;

@property (nonatomic) SNSThemeDimmingEffect sns_StatusFooterDimmingEffect;
@property (nonatomic) SNSThemeDimmingEffect sns_StatusFooterDimmingEffectDark;
@property (nonatomic) UIBlurEffectStyle sns_StatusFooterBlurEffectStyle;
@property (nonatomic, nullable) UIFont *sns_StatusFooterTextFont;
@property (nonatomic, nullable) UIColor *sns_StatusFooterBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_StatusFooterTextColor;
@property (nonatomic, nullable) UIColor *sns_StatusFooterLinkColor;

@property (nonatomic) CGSize sns_StatusHeaderImageSize;

/// An optional image displayed on Status Screen when the applicant has been approved. If it's defined, it will be used instead of the steps list.
@property (nonatomic, nullable) UIImage *sns_StatusScreenApprovedImage;
/// An optional image displayed on Status Screen when the applicant has been finally rejected.
@property (nonatomic, nullable) UIImage *sns_StatusScreenFinalRejectImage;

#pragma mark - idDocs

@property (nonatomic) UIEdgeInsets sns_idDocStatusPaddings;

@property (nonatomic, nullable) UIFont *sns_idDocStatusPromptTextFont;
@property (nonatomic, nullable) UIColor *sns_idDocStatusPromptTextColor;
@property (nonatomic, nullable) UIColor *sns_idDocStatusPromptBackgroundColor;

@property (nonatomic, nullable) UIFont *sns_idDocStatusSubmittedTitleFont;
@property (nonatomic, nullable) UIFont *sns_idDocStatusSubmittedSubtitleFont;
@property (nonatomic, nullable) UIColor *sns_idDocStatusSubmittedTextColor;
@property (nonatomic, nullable) UIColor *sns_idDocStatusSubmittedBackgroundColor;
@property (nonatomic, nullable) UIImage *sns_idDocStatusSubmittedImage;

@property (nonatomic, nullable) UIFont *sns_idDocStatusNotSubmittedTitleFont;
@property (nonatomic, nullable) UIFont *sns_idDocStatusNotSubmittedSubtitleFont;
@property (nonatomic, nullable) UIColor *sns_idDocStatusNotSubmittedTextColor;
@property (nonatomic, nullable) UIColor *sns_idDocStatusNotSubmittedBackgroundColor;
@property (nonatomic, nullable) UIImage *sns_idDocStatusNotSubmittedImage;

@property (nonatomic, nullable) UIFont *sns_idDocStatusReviewingTitleFont;
@property (nonatomic, nullable) UIFont *sns_idDocStatusReviewingSubtitleFont;
@property (nonatomic, nullable) UIColor *sns_idDocStatusReviewingTextColor;
@property (nonatomic, nullable) UIColor *sns_idDocStatusReviewingBackgroundColor;
@property (nonatomic, nullable) UIImage *sns_idDocStatusReviewingImage;

@property (nonatomic, nullable) UIFont *sns_idDocStatusDeclinedTitleFont;
@property (nonatomic, nullable) UIFont *sns_idDocStatusDeclinedSubtitleFont;
@property (nonatomic, nullable) UIColor *sns_idDocStatusDeclinedTextColor;
@property (nonatomic, nullable) UIColor *sns_idDocStatusDeclinedBackgroundColor;
@property (nonatomic, nullable) UIImage *sns_idDocStatusDeclinedImage;

@property (nonatomic, nullable) UIFont *sns_idDocStatusApprovedTitleFont;
@property (nonatomic, nullable) UIFont *sns_idDocStatusApprovedSubtitleFont;
@property (nonatomic, nullable) UIColor *sns_idDocStatusApprovedTextColor;
@property (nonatomic, nullable) UIColor *sns_idDocStatusApprovedBackgroundColor;
@property (nonatomic, nullable) UIImage *sns_idDocStatusApprovedImage;

@property (nonatomic) CGFloat sns_idDocBackgroundCornerRadius;
@property (nonatomic) CGFloat sns_idDocHighlightDarkFactor;

/**
 * The dark factor has no effect when `sns_idDocDisclosureTintColor` is not nil.
 */
@property (nonatomic) CGFloat sns_idDocDisclosureDarkFactor;
/**
 * The disclosure color, if defined, is applied instead of the `sns_idDocDisclosureDarkFactor`.
 */
@property (nonatomic, nullable) UIColor *sns_idDocDisclosureTintColor;
@property (nonatomic, nullable) UIImage *sns_idDocDisclosureImage;

@property (nonatomic, nullable) UIImage *sns_idDocTypeDefaultImage;
@property (nonatomic, nullable) NSDictionary<SNSIdDocType, UIImage *> *sns_idDocTypeImages;

#pragma mark - DocType Selector Screen

@property (nonatomic, nullable) UIColor *sns_DocTypeScreenBackgroundColor;

@property (nonatomic, nullable) UIFont *sns_DocTypeScreenFooterTextFont;
@property (nonatomic, nullable) UIColor *sns_DocTypeScreenFooterTextColor;
@property (nonatomic, nullable) UIColor *sns_DocTypeScreenFooterLinkColor;

@property (nonatomic, nullable) UIFont *sns_DocTypeScreenSectionTitleFont;
@property (nonatomic, nullable) UIColor *sns_DocTypeScreenSectionTitleColor;
@property (nonatomic) NSTextAlignment sns_DocTypeScreenSectionTitleAlignment;

@property (nonatomic, nullable) UIFont *sns_DocTypeScreenItemTextFont;
@property (nonatomic, nullable) UIColor *sns_DocTypeScreenItemBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_DocTypeScreenItemTextColor;
@property (nonatomic, nullable) UIColor *sns_DocTypeScreenItemPlaceholderColor;

@property (nonatomic, nullable) UIImage *sns_DocTypeScreenItemDisclosureImage;

#pragma mark - Countries Screen

@property (nonatomic, nullable) UIColor *sns_CountriesScreenBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_CountriesScreenSeparatorColor;

@property (nonatomic, nullable) UIFont *sns_CountriesScreenItemTextFont;
@property (nonatomic, nullable) UIColor *sns_CountriesScreenItemTextColor;
@property (nonatomic, nullable) UIColor *sns_CountriesScreenSelectedItemBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_CountriesScreenSelectedItemTextColor;

@property (nonatomic, nullable) UIFont *sns_CountriesScreenSearchFieldFont;
@property (nonatomic, nullable) UIColor *sns_CountriesScreenSearchFieldTextColor;
@property (nonatomic, nullable) UIColor *sns_CountriesScreenSearchFieldBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_CountriesScreenSearchFieldBorderColor;

#pragma mark - Camera Screen

@property (nonatomic, nullable) UIColor *sns_CameraScreenBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_CameraScreenSpinnerColor;

@property (nonatomic, nullable) UIColor *sns_CameraScreenCloseButtonTintColor;
@property (nonatomic, nullable) UIColor *sns_CameraScreenTorchButtonTintColor;

@property (nonatomic, nullable) UIColor *sns_CameraScreenCaptureButtonColor;
@property (nonatomic, nullable) UIColor *sns_CameraScreenCaptureButtonHighlightedColor;

@property (nonatomic, nullable) UIFont *sns_CameraScreenScanResultStatusTextFont;
@property (nonatomic, nullable) UIColor *sns_CameraScreenScanResultStatusTextColor;
@property (nonatomic, nullable) UIColor *sns_CameraScreenScanResultStatusBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_CameraScreenScanActivityIndicatorColor;

@property (nonatomic, nullable) UIFont *sns_CameraScreenInfoTitleFont;
@property (nonatomic, nullable) UIFont *sns_CameraScreenInfoTextFont;
@property (nonatomic, nullable) UIColor *sns_CameraScreenInfoBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_CameraScreenInfoTitleColor;
@property (nonatomic, nullable) UIColor *sns_CameraScreenInfoTextColor;
@property (nonatomic, nullable) UIColor *sns_CameraScreenInfoHandlerOutsideColor;
@property (nonatomic, nullable) UIColor *sns_CameraScreenInfoHandlerInsideColor;

@property (nonatomic, nullable) UIImage *sns_CameraScreenTorchOnImage;
@property (nonatomic, nullable) UIImage *sns_CameraScreenTorchOffImage;

@property (nonatomic, nullable) UIImage *sns_CameraScreenGalleryImage;

#pragma mark - Video Screen

@property (nonatomic, nullable) UIColor *sns_VideoScreenBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_VideoScreenDimColor;
@property (nonatomic, nullable) UIColor *sns_VideoScreenSpinnerColor;

@property (nonatomic, nullable) UIFont *sns_VideoScreenCountDownFont;
@property (nonatomic, nullable) UIColor *sns_VideoScreenCountDownColor;

@property (nonatomic, nullable) UIColor *sns_VideoScreenCloseButtonTintColor;

@property (nonatomic, nullable) UIColor *sns_VideoScreenRecordButtonBorderColor;
@property (nonatomic, nullable) UIColor *sns_VideoScreenRecordingColor;

@property (nonatomic, nullable) UIColor *sns_VideoScreenViewPortBorderColor;
@property (nonatomic, nullable) UIColor *sns_VideoScreenViewPortBorderActiveColor;
@property (nonatomic) CGFloat sns_VideoScreenViewPortBorderWidth;

@property (nonatomic, nullable) UIFont *sns_VideoScreenReadAloudTextFont;
@property (nonatomic, nullable) UIColor *sns_VideoScreenReadAloudTextColor;
@property (nonatomic, nullable) UIColor *sns_VideoScreenReadAloudBackgroundColor;

@property (nonatomic, nullable) UIFont *sns_VideoScreenFooterHeaderFont;
@property (nonatomic, nullable) UIFont *sns_VideoScreenFooterTextFont;
@property (nonatomic, nullable) UIColor *sns_VideoScreenFooterHeaderColor;
@property (nonatomic, nullable) UIColor *sns_VideoScreenFooterTextColor;

#pragma mark - FaceScan Screen

@property (nonatomic, nullable) UIFont *sns_FaceScanScreenResultTitleFont;
@property (nonatomic, nullable) UIFont *sns_FaceScanScreenResultTextFont;
@property (nonatomic, nullable) UIFont *sns_FaceScanScreenHintFont;

@property (nonatomic, nullable) UIColor *sns_FaceScanScreenBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_FaceScanScreenCloseButtonTintColor;
@property (nonatomic, nullable) UIColor *sns_FaceScanScreenSpinnerColor;

@property (nonatomic, nullable) UIColor *sns_FaceScanScreenResultTitleColor;
@property (nonatomic, nullable) UIColor *sns_FaceScanScreenResultTextColor;
@property (nonatomic, nullable) UIColor *sns_FaceScanScreenHintColor;
@property (nonatomic, nullable) UIColor *sns_FaceScanScreenOvalColor;

@property (nonatomic, nullable) UIColor *sns_FaceScanScreenLowLightHintColor;
@property (nonatomic, nullable) UIColor *sns_FaceScanScreenLowLightCloseButtonTintColor;

@property (nonatomic, nullable) UIImage *sns_FaceScanScreenSuccessImage;
@property (nonatomic, nullable) UIImage *sns_FaceScanScreenFailedImage;
@property (nonatomic, nullable) UIImage *sns_FaceScanScreenSubmittedImage;

#pragma mark - Preview Screen

@property (nonatomic, nullable) UIFont *sns_PreviewScreenTitleFont;
@property (nonatomic, nullable) UIFont *sns_PreviewScreenSubtitleFont;
@property (nonatomic, nullable) UIColor *sns_PreviewScreenBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_PreviewScreenTitleColor;
@property (nonatomic, nullable) UIColor *sns_PreviewScreenSubtitleColor;
@property (nonatomic, nullable) UIColor *sns_PreviewScreenSpinnerColor;

@property (nonatomic, nullable) UIImage *sns_PreviewScreenVideoPlayImage;

@property (nonatomic) CGFloat sns_PreviewScreenSliderCornerRadius;
@property (nonatomic) CGPoint sns_PreviewScreenSliderIconPosition;
@property (nonatomic, nullable) UIFont *sns_PreviewScreenSliderBriefFont;
@property (nonatomic, nullable) UIFont *sns_PreviewScreenSliderDetailsFont;
@property (nonatomic, nullable) UIColor *sns_PreviewScreenSliderBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_PreviewScreenSliderHandlerColor;
@property (nonatomic, nullable) UIColor *sns_PreviewScreenSliderBriefColor;
@property (nonatomic, nullable) UIColor *sns_PreviewScreenSliderDetailsColor;

@property (nonatomic, nullable) UIImage *sns_PreviewScreenSliderIconImage;

#pragma mark - Support Screen

@property (nonatomic, nullable) UIFont *sns_SupportScreenItemButtonFont;
@property (nonatomic, nullable) UIFont *sns_SupportScreenItemDescriptionFont;
@property (nonatomic, nullable) UIColor *sns_SupportScreenBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_SupportScreenItemButtonColor;
@property (nonatomic, nullable) UIColor *sns_SupportScreenItemDescriptionColor;

@property (nonatomic, nullable) UIColor *sns_SupportScreenEmailImageTintColor;
@property (nonatomic, nullable) UIImage *sns_SupportScreenEmailImage;

#pragma mark - ToS Screen

@property (nonatomic, nullable) UIColor *sns_TosScreenBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_TosScreenSpinnerColor;

#pragma mark - Applicant Data Screen

@property (nonatomic, nullable) UIColor *sns_DataScreenBackgroundColor;
@property (nonatomic, nullable) UIColor *sns_DataScreenSpinnerColor;
@property (nonatomic, nullable) UIColor *sns_DataScreenSeparatorColor;

@property (nonatomic, nullable) UIFont *sns_DataScreenNameFont;
@property (nonatomic, nullable) UIFont *sns_DataScreenValueFont;
@property (nonatomic, nullable) UIColor *sns_DataScreenNameColor;
@property (nonatomic, nullable) UIColor *sns_DataScreenValueColor;
@property (nonatomic, nullable) UIColor *sns_DataScreenErrorColor;

@end
