#include "ctx.h"

extern u8 *data_0215be44;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

u32 func_020f3b00(void)
{
    s32 x = *(s32 *)(data_0215be44 + 0xc);
    return (u32)FX_Mul(x, 0x19a);
}
