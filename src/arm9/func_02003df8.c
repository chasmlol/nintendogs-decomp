#include "ctx.h"

extern u8 data_0214e858[];
extern u8 data_0214e77c[];
extern void func_02005c94(void);

void func_02003df8(u16 param_1)
{
    u8 *a = data_0214e858;
    u8 *b = data_0214e77c;
    *(u16 *)(a + 0) = 0;
    *(u16 *)(a + 4) = 1;
    *(u16 *)(a + 8) = 0;
    *(u16 *)(a + 10) = param_1;
    *(u32 *)(a + 0x10) = (u32)func_02005c94;
    *(u16 *)(a + 14) = 0;
    *(u16 *)(b + 0) = 0;
    *(u16 *)(b + 4) = 1;
    *(u16 *)(b + 8) = 0;
    *(u16 *)(b + 10) = param_1;
    *(u32 *)(b + 0x10) = (u32)func_02005c94;
    *(u16 *)(b + 14) = 0;
}
