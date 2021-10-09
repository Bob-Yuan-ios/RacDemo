//
//  TestUrlAppend.m
//  LanguageDemo
//
//  Created by Bob on 2021/9/30.
//

#import "TestUrlAppend.h"
#import "UIDevice+YYAdd.h"
#import <AdSupport/AdSupport.h>
 

@implementation TestUrlAppend

//+ (void)test1{
//
//    NSString *relation = @"api/login";
//    NSString *baseStr = @"https://www.baidu.com/v2";
//    NSString *str = [NSString stringWithFormat:@"%@%@", baseStr, relation];
//
//    NSURL *url1 = [NSURL URLWithString:str relativeToURL:nil];
//    NSMutableString *url1Str = [[url1 absoluteString] mutableCopy];
//    NSLog(@"======%@", url1Str);
//
//    [url1Str insertString:@"/" atIndex:baseStr.length];
//    url1 = [NSURL URLWithString:url1Str];
//    NSLog(@"======%@", url1Str);
//    NSLog(@"#######%@", url1.absoluteString);
//
//}

#define UTM_SOURCE_KEY @"utm_source"
#define UTM_TERM_KEY @"utm_term"
#define UTM_MEDIUM_KEY @"utm_medium"
#define UTM_CAMPAIGN_KEY @"utm_campaign"
#define UTM_CONTENT_KEY @"utm_content"
#define UTM_CLIENTOS_KEY @"clientOs"
#define UTM_CLIENTOSVERSION_KEY @"clientOsVersion"
#define UTM_CLIENTBRAND_KEY @"clientBrand"
#define UTM_CLIENTDEVICENAME_KEY @"clientDeviceName"


#define UTM_SOURCE @"GW1"
#define UTM_MEDIUM @"appstore"
#define UTM_CAMPAIGN @"-"
#define UTM_CONTENT @"-"

/// 获取Media_Source
static inline NSString *getMediaSources(){
    NSString *media_source = [[NSUserDefaults standardUserDefaults] objectForKey:@"Media_Source_Key"];
    if (media_source == nil || [media_source isEqualToString:@""]) {
        return @"organic";
    }
    return media_source;
}

+ (void)test2{
    
    NSString *baseUrl = @"https://proxytrade.btcuserapp.com:6001/v2";
    NSString *clientOs = @"iOS";
    NSString *clientOsVersion = [[UIDevice currentDevice] systemVersion];
    NSString *clientBrand = @"Apple";
    NSString *clientDeviceName = [UIDevice currentDevice].machineModelName;
    NSString *idfa = [[ASIdentifierManager sharedManager].advertisingIdentifier UUIDString];
    
    NSString *urlStr = [NSString stringWithFormat:@"%@/customer/createAccount_4_6_0?%@=%@&%@=%@&%@=%@&%@=%@&%@=%@&%@=%@&%@=%@&%@=%@&%@=%@&device_id=%@", baseUrl, UTM_SOURCE_KEY, UTM_SOURCE, UTM_MEDIUM_KEY, UTM_MEDIUM, UTM_CAMPAIGN_KEY, UTM_CAMPAIGN, UTM_CONTENT_KEY, UTM_CONTENT, UTM_TERM_KEY, getMediaSources(), UTM_CLIENTOS_KEY, clientOs,UTM_CLIENTOSVERSION_KEY, clientOsVersion,UTM_CLIENTBRAND_KEY, clientBrand,UTM_CLIENTDEVICENAME_KEY, clientDeviceName, idfa];
    
    urlStr = [urlStr stringByReplacingOccurrencesOfString:@" " withString:@""];
    NSLog(@"urlStr is:%@", urlStr);
}

+ (void)test1{
    
    NSString *inputData = @"BTCC-官网";
    NSString *afterSource =  [inputData stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    NSLog(@"afterSource1...%@", afterSource);
    
    inputData = @"BTCC";
    afterSource =  [inputData stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];;
    NSLog(@"afterSource2...%@", afterSource);
}
@end
