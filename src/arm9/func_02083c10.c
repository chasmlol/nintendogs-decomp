#include "ctx.h"
#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))
void func_02083c10(s32 a, s32 b, s32 *out)
{
    s32 s1 = FX_Mul(4096 - b, 0x555);
    s32 s2 = FX_Mul(a, 0x93d);
    s32 i6 = s1 + s2;
    s32 i2 = s1 - s2;
    s32 i3 = s1 + b;
    out[0] = i3;
    out[3] = i6;
    out[6] = i2;
    out[9] = 0;
    out[1] = i2;
    out[4] = i3;
    out[7] = i6;
    out[10] = 0;
    out[2] = i6;
    out[5] = i2;
    out[8] = i3;
    out[11] = 0;
}
