#include "ctx.h"

void func_0202687c(u8 *param_1)
{
    s32 a = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    s64 x = (s64)a * 0x1b3 + 0x800;
    *(s32 *)(param_1 + 0x240) = (s32)(x >> 12);
    *(s32 *)(param_1 + 0x244) = 0x380;
    *(s32 *)(param_1 + 0x24c) = 0xcd0;
}
