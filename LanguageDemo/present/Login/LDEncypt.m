//
//  LDEncypt.m
//  LanguageDemo
//
//  Created by Bob on 2023/3/30.
//

#import "LDEncypt.h"

@implementation LDEncypt

+ (NSDictionary *)jwtDecodeWithJwtString:(NSString *)jwtStr {
    NSArray * segments = [jwtStr componentsSeparatedByString:@"."];
    NSString * base64String = [segments objectAtIndex:1];
    int requiredLength = (int)(4 * ceil((float)[base64String length]/4.0));
    int nbrPaddings = requiredLength - (int)[base64String length];
    if(nbrPaddings > 0) {
        NSString * pading = [[NSString string] stringByPaddingToLength:nbrPaddings withString:@"=" startingAtIndex:0];
        base64String = [base64String stringByAppendingString:pading];
    }
    base64String = [base64String stringByReplacingOccurrencesOfString:@"-" withString:@"+"];
    base64String = [base64String stringByReplacingOccurrencesOfString:@"_" withString:@"/"];
    NSData * decodeData = [[NSData alloc] initWithBase64EncodedData:[base64String dataUsingEncoding:NSUTF8StringEncoding] options:0];
    NSString * decodeString = [[NSString alloc] initWithData:decodeData encoding:NSUTF8StringEncoding];
    NSData * enCodeData = [decodeString dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary * jsonDict = [NSJSONSerialization JSONObjectWithData:enCodeData options:0 error:nil];
    return jsonDict;
}

+ (NSString *)hexStringFromString:(NSString *)str{
    NSData *myD = [str dataUsingEncoding:NSUTF8StringEncoding];
    Byte *bytes = (Byte *)[myD bytes];
    //下面是Byte 转换为16进制。
    NSString *hexStr=@"";
    for(int i=0;i<[myD length];i++)
    {
        NSString *newHexStr = [NSString stringWithFormat:@"%x",bytes[i]&0xff];///16进制数
        if([newHexStr length]==1)
            hexStr = [NSString stringWithFormat:@"%@0%@",hexStr,newHexStr];
        else
            hexStr = [NSString stringWithFormat:@"%@%@",hexStr,newHexStr];
    }
    return hexStr;
}

@end
