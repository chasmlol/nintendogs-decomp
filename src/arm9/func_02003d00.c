#include "ctx.h"

extern u8 data_0214e858[];
extern u8 data_0214e77c[];
extern void func_02005c94(void);

void func_02003d00(u16 param_1)
{
    u8 *p = data_0214e858;
    u8 *q = data_0214e77c;
    *(u16 *)(p + 0) = 0;
    *(u16 *)(p + 4) = 3;
    *(u16 *)(p + 6) = 0;
    *(u16 *)(p + 8) = 0;
    *(u16 *)(p + 10) = param_1;
    *(u32 *)(p + 0x10) = (u32)func_02005c94;
    *(u16 *)(q + 0) = 0;
    *(u16 *)(q + 4) = 3;
    *(u16 *)(q + 6) = 0;
    *(u16 *)(q + 8) = 0;
    *(u16 *)(q + 10) = param_1;
    *(u32 *)(q + 0x10) = (u32)func_02005c94;
}
