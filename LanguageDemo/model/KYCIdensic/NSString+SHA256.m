//
//  NSString+SHA256.m
//  LanguageDemo
//
//  Created by Bob on 2021/6/2.
//

#import "NSString+SHA256.h"

#import <CommonCrypto/CommonHMAC.h>
#import <CommonCrypto/CommonDigest.h>

@implementation NSString (SHA256)

/**
*  加密方式,MAC算法: HmacSHA256
*
*  @param secret       秘钥
*  @param content     要加密的文本
*
*  @return 加密后的字符串
*/
+ (NSString *)hmacSHA256WithSecret:(NSString *)secret content:(NSString *)content
{
   const char *cKey  = [secret cStringUsingEncoding:NSASCIIStringEncoding];
   const char *cData = [content cStringUsingEncoding:NSUTF8StringEncoding];
    
   unsigned char cHMAC[CC_SHA256_DIGEST_LENGTH];
   CCHmac(kCCHmacAlgSHA256, cKey, strlen(cKey), cData, strlen(cData), cHMAC);
   NSData *HMACData = [NSData dataWithBytes:cHMAC length:sizeof(cHMAC)];
   const unsigned char *buffer = (const unsigned char *)[HMACData bytes];
   NSMutableString *HMAC = [NSMutableString stringWithCapacity:HMACData.length * 2];
   for (int i = 0; i < HMACData.length; ++i){
       [HMAC appendFormat:@"%02x", buffer[i]];
   }
   
   return HMAC;
}


@end
