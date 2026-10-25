#include "ctx.h"

extern u8 data_0214e858[];
extern void func_02005c94(void);

void func_02003dc4(u16 param_1)
{
    u8 *p = data_0214e858;
    *(u16 *)(p + 0) = 0;
    *(u16 *)(p + 4) = 1;
    *(u16 *)(p + 8) = 0;
    *(u16 *)(p + 10) = param_1;
    *(u32 *)(p + 0x10) = (u32)func_02005c94;
    *(u16 *)(p + 14) = 0;
}
