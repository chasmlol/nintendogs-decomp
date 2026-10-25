#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_02026938(u8 *param_1)
{
    s32 x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    *(s32 *)(param_1 + 0x240) = FX_Mul(x, 205);
    *(s32 *)(param_1 + 0x244) = 640;
    *(s32 *)(param_1 + 0x24c) = 3280;
}
