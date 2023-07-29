//
//  AppDelegate.h
//  LanguageDemo
//
//  Created by Bob on 2021/4/12.
//

#import <UIKit/UIKit.h>


/*   ***************************** fontSize  *****************************  */
#define PF_SB(fontSize) [UIFont fontWithName:@"PingFangSC-Semibold" size:fontSize]
#define PF_R(fontSize) [UIFont fontWithName:@"PingFangSC-Regular" size:fontSize]
#define PF_M(fontSize) [UIFont fontWithName:@"PingFangSC-Medium" size:fontSize]
#define PF_B(fontSize) [UIFont fontWithName:@"PingFangSC-Bold" size:fontSize]
#define PF_H(fontSize) [UIFont fontWithName:@"PingFangSC-Heavy" size:fontSize]


/*   ***************************** color  *****************************  */
#define UIColorHexFromRGB(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]


#define UIColorWithHex(rgbValue,alp) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:alp]


#define GTcLocal(var) [NSBundle.mainBundle localizedStringForKey:(var) value:@"" table:@"lang"]


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow * window;

- (void)launchObjCRootViewController;

@end

