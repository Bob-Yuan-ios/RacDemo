//
//  GTTestAlloc.m
//  LanguageDemo
//
//  Created by Bob on 2021/6/10.
//

#import "GTTestAlloc.h"
#import "GTCommonInfo.h"
#import "RacRedVM.h"

@implementation GTTestAlloc

+ (void)testAlloc{
    RacRedModel *p1 = [[RacRedModel alloc] init];
    RacRedModel *p2 = [p1 mutableCopy];

    void *p3 = &p1;
    DSLog(@"%p  %p %p", p1, p2, p3);
    
    NSNull *pars = [[NSNull alloc] init];
    NSString *str = [NSString stringWithFormat:@"%@", pars];
    DSLog(@"str... %@, %p, %lf", str, &str, [str doubleValue]);
}

+ (void)testStringTaggedPoint{
    
    NSMutableString *mutableStr = [NSMutableString string];
    NSString *immutable = nil;
    
    #define _OBJC_TAG_MASK (1UL<<63)
    char c = 'a';
    do{
        [mutableStr appendFormat:@"%c", c++];
        immutable = [mutableStr copy];
        NSLog(@"%p %@ %@", immutable, immutable, immutable.class);
    }while (((uintptr_t)immutable & _OBJC_TAG_MASK) == _OBJC_TAG_MASK);
    
    
}

// NSTagged Pointer
+ (void)testNumberTaggedPoint{
    NSNumber *n1 = @(0x1);
    NSNumber *n2 = @(0x20);
    NSNumber *n3 = @(0x3F);
    NSNumber *nFFF = @(0xFFFFFFFFFFEFE);
    NSNumber *nMax = @(MAXFLOAT);
    
    NSLog(@"n1 p is %p class is %@", n1, n1.class);
    NSLog(@"n2 p is %p class is %@", n2, n2.class);
    NSLog(@"n3 p is %p class is %@", n3, n3.class);
    NSLog(@"nF p is %p class is %@", nFFF, nFFF.class);
    NSLog(@"nM p is %p class is %@", nMax, nMax.class);
}
@end
