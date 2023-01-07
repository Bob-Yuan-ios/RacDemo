//
//  YSCommonInfo.h
//  LanguageDemo
//
//  Created by Bob on 2021/6/10.
//

#ifndef YSCommonInfo_h
#define YSCommonInfo_h


#if DEBUG

#define DSLog(fmt, ...) NSLog((@"Info----%s," "[lineNum:%d]" fmt) , __FUNCTION__, __LINE__, ##__VA_ARGS__); //带函数名和行数

#define WSLog(fmt, ...) NSLog((@"Warn====%s" fmt), __FUNCTION__, ##__VA_ARGS__);

#define ESLog(fmt, ...) NSLog((@"Error####%s" fmt), __FUNCTION__, ##__VA_ARGS__);

#else

#define DSLog(fmt, ...)

#define WSLog(fmt, ...)

#define ESLog(fmt, ...)

#endif

#define GTWeakObj(o)   __weak typeof(o) Weak##o = o;
#define GTStrongObj(o) autoreleasepool{ __strong typeof(o) o = Weak##o};

#endif /* YSCommonInfo_h */
