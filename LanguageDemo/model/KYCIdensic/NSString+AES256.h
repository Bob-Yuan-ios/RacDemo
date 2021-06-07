//
//  NSString+AES256.h
//  PM_GTS2
//
//  Created by kiveen.zhao on 16/10/9.
//  Copyright © 2016年 GW. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>

#import "NSData+AES.h"

@interface NSString(AES256)

-(NSString *) aes256_encrypt:(NSString *)key;
-(NSString *) aes256_decrypt:(NSString *)key;
-(NSString *) aes256_encrypt2:(NSString *)key;

@end
