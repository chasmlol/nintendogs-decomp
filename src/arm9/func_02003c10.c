#include "ctx.h"

extern u8 data_0214e77c[];
extern void func_02005c94(void);

void func_02003c10(u16 param_1)
{
    u8 *o = data_0214e77c;
    *(u16 *)o = 0;
    *(u16 *)(o + 4) = 3;
    *(u16 *)(o + 6) = 1;
    *(u16 *)(o + 8) = 0;
    *(u16 *)(o + 10) = param_1;
    *(u32 *)(o + 16) = (u32)func_02005c94;
}
