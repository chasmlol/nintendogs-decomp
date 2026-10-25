#include "ctx.h"
extern u8 *data_0215be48;
u32 func_02112dec(s32 param_1, s32 param_2)
{
    u8 *p = data_0215be48 + param_1 * 660 + 0x1000;
    u8 *e = *(u8 **)(p + 0xdf4);
    return *(u32 *)(e + param_2 * 8 + 0xc);
}
