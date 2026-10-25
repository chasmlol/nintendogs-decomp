#include "ctx.h"

void func_02026638(u8 *param_1)
{
    s32 x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    *(u32 *)(param_1 + 0x240) = (u32)(((s64)x * 57 + 0x800) >> 12);
    *(u32 *)(param_1 + 0x244) = 160;
    *(u32 *)(param_1 + 0x24c) = 0xb36;
}
