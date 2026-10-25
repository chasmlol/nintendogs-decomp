#include "ctx.h"

void func_02025ed4(u8 *param_1)
{
    s32 a = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    s64 x = (s64)a * 0x20 + 0x800;
    *(s32 *)(param_1 + 0x240) = (s32)(x >> 12);
    *(s32 *)(param_1 + 0x244) = 0x200;
    *(s32 *)(param_1 + 0x24c) = 0x99c;
}
