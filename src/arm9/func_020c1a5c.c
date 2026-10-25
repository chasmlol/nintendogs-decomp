#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

u32 func_020c1a5c(s32 a, s32 b)
{
    return (u32)FX_Mul(a, b);
}
