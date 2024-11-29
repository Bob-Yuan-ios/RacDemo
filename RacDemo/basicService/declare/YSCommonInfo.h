//
//  YSCommonInfo.h
//  RacDemo
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

#define YSWeakSelf(type) __weak typeof(type) weak##type = type;
#define YSStronSelf(type) __strong typeof(type) type = weak##type;

#endif /* YSCommonInfo_h */
