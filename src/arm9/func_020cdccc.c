#include "ctx.h"

#define FXM(a, b) ((u32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

void func_020cdccc(s32 *p1, s32 *p2, s32 *p3, s32 *p4, s32 p5, s32 *p6)
{
    s32 u11;
    s32 u10;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    u11 = (s32)FXM(p5, p5);
    u10 = (s32)FXM(u11, p5);
    b = (u10 * 3 + u11 * -5 + 0x2000) / 2;
    c = (p5 + (u10 * -3 + u11 * 4)) / 2;
    d = (u11 * 2 - u10 - p5) / 2;
    a = (u10 - u11) / 2;
    p6[0] = FXM(a, p4[0]) + (FXM(c, p3[0]) + (FXM(d, p1[0]) + FXM(b, p2[0])));
    p6[1] = FXM(a, p4[1]) + (FXM(c, p3[1]) + (FXM(d, p1[1]) + FXM(b, p2[1])));
    p6[2] = FXM(a, p4[2]) + (FXM(c, p3[2]) + (FXM(d, p1[2]) + FXM(b, p2[2])));
}
