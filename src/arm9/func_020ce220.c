#include "ctx.h"

#define FX(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

s32 func_020ce220(s32 p1, s32 p2, s32 p3, s32 p4, s32 p5)
{
    s32 u6;
    s32 u7;
    s32 i5;
    s32 a2;
    s32 a4;
    u6 = FX(p5, p5);
    u7 = FX(u6, p5);
    i5 = (p5 - u6) * -3 + 0x1000 - u7;
    a4 = u7 / 2 - u6 + 0xaaa;
    a2 = (-u7) / 2 + u6 / 2 + p5 / 2 + 0x2aa;
    return FX(u7 / 6, p4) + (FX(a2, p3) + (FX(i5 / 6, p1) + FX(a4, p2)));
}
