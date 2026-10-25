#include "ctx.h"
#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))
s32 func_02006d34(s32 x)
{
    s32 t;
    s32 s1;
    s32 s2;
    s32 s3;
    if (x <= 0) {
        return 0;
    }
    if (x >= 0x1000) {
        return 0x1000;
    }
    t = x - 0x800;
    s1 = FX_Mul(t, 0x2000);
    s2 = FX_Mul(s1, s1);
    s3 = FX_Mul(s2, s1);
    return FX_Mul(s3, 0x800) + 0x800;
}
