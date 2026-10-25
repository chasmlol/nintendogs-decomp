/* Shared context for this run. Declare the externs you need (globals, callees) in your own file,
   using the exact names shown in target.s (dsd names such as data_ov004_02170320, func_02029290). */
#ifndef CTX_H
#define CTX_H
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
#define NULL ((void *)0)
#endif
