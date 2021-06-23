//
//  GTCommonInfo.h
//  LanguageDemo
//
//  Created by Bob on 2021/6/10.
//

#ifndef GTCommonInfo_h
#define GTCommonInfo_h


#if DEBUG

#define DSLog(fmt, ...) NSLog((@"%s," "[lineNum:%d]" fmt) , __FUNCTION__, __LINE__, ##__VA_ARGS__); //带函数名和行数

#define WSLog(fmt, ...) NSLog((@"====%s" fmt), __FUNCTION__, ##__VA_ARGS__);

#define ESLog(fmt, ...) NSLog((@"!!!!%s" fmt), __FUNCTION__, ##__VA_ARGS__);

#else

#define DSLog(fmt, ...)

#define WSLog(fmt, ...)

#define ESLog(fmt, ...)


#endif

#endif /* GTCommonInfo_h */
