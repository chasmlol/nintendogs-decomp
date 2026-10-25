#include "ctx.h"

extern u8 *data_0215be48;
extern u32 func_02085ccc(u32 a, u32 b);

u32 func_02112854(s32 param_1, s32 param_2)
{
    u8 *p = data_0215be48 + 0x1dec + param_1 * 660;
    u32 r = func_02085ccc(*(u32 *)(p + 0xc), *(u32 *)(*(u8 **)(p + 8) + param_2 * 8 + 0xc));
    return ((*(u32 *)(r + 4)) << 16) >> 28;
}
