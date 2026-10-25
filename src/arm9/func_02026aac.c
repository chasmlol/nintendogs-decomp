#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_02026aac(u8 *param_1)
{
    u8 *inner = *(u8 **)(param_1 + 0x9e8);
    s32 v = *(s32 *)(inner + 0xc);
    *(s32 *)(param_1 + 0x240) = FX_Mul(v, 186);
    *(s32 *)(param_1 + 0x244) = 0x180;
    *(s32 *)(param_1 + 0x24c) = 0xcd0;
}
