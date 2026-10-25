#include "ctx.h"

extern u32 data_0215be48;
extern u32 func_02085ca4(u32 a, u32 b);

u8 func_02112b28(s32 param_1, s32 param_2)
{
    u8 *e = (u8 *)(param_1 * 660 + (data_0215be48 + 0x1dec));
    u32 r;
    r = func_02085ca4(*(u32 *)(e + 0xc), *(u32 *)(*(u8 **)(e + 8) + param_2 * 8 + 0xc));
    return *(u8 *)(r + 1);
}
