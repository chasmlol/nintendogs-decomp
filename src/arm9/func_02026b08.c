#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_02026b08(u8 *param_1)
{
    s32 v = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 12);
    *(s32 *)(param_1 + 0x240) = FX_Mul(v, 27);
    *(s32 *)(param_1 + 0x244) = 0x100;
    *(s32 *)(param_1 + 0x24c) = 0xe6a;
}
