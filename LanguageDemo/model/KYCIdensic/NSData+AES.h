//
//  NSData+AES.h
//  PM_GTS2
//
//  Created by kiveen.zhao on 16/10/8.
//  Copyright © 2016年 GW. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (Encryption)

//加密
- (NSData *)AES256EncryptWithKey:(NSString *)key;
//解密
- (NSData *)AES256DecryptWithKey:(NSString *)key;

@end
