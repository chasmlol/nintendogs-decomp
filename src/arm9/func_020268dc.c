#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_020268dc(u8 *param_1)
{
    s32 v = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 12);
    *(s32 *)(param_1 + 0x240) = FX_Mul(v, 280);
    *(s32 *)(param_1 + 0x244) = 0x300;
    *(s32 *)(param_1 + 0x24c) = 0xcd0;
}
