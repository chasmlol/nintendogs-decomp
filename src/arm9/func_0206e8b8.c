#include "ctx.h"

void func_0206e8b8(u8 *param_1, s32 param_2)
{
    *(s32 *)(param_1 + 0x10) = *(s32 *)(param_1 + 0x10) + 1;
    *(s32 *)(param_1 + 0xc) = param_2;
    {
        u32 *bits = *(u32 **)(param_1 + 0x14);
        bits[param_2 >> 5] = bits[param_2 >> 5] | (1 << (param_2 & 0x1f));
    }
}
