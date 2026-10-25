#include "ctx.h"
void func_020265d8(u8 *param_1)
{
    s32 x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    *(s32 *)(param_1 + 0x240) = (s32)(((s64)x * 114 + 0x800) >> 12);
    *(u32 *)(param_1 + 0x244) = 160;
    *(u32 *)(param_1 + 0x24c) = 0x668;
}
