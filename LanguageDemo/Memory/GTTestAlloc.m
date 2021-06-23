//
//  GTTestAlloc.m
//  LanguageDemo
//
//  Created by Bob on 2021/6/10.
//

#import "GTTestAlloc.h"
#import "GTCommonInfo.h"
#import "RacRedModel.h"

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
@end
