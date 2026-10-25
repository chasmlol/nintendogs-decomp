#include "ctx.h"
void func_0202675c(u8 *param_1)
{
    s32 x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    *(s32 *)(param_1 + 0x240) = (s32)(((s64)x * 109 + 0x800) >> 12);
    *(u32 *)(param_1 + 0x244) = 448;
    *(u32 *)(param_1 + 0x24c) = 3280;
}
