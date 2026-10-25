#include "ctx.h"
#pragma optimization_level 3

#define FXM(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

void func_020cdfc0(s32 *p1, s32 *p2, s32 *p3, s32 *p4, s32 p5, s32 *p6)
{
    s32 i11;
    s32 *o6;
    s32 i10;
    s32 i9;
    s32 i8;
    s32 u7;
    s32 u6;
    u7 = FXM(p5, p5);
    u6 = FXM(u7, p5);
    i10 = (u6 / 2 - u7) + 0xaaa;
    i11 = (((p5 - u7) * -3) + 0x1000) - u6;
    i9 = i11 / 6;
    i8 = (-u6) / 2 + u7 / 2 + p5 / 2 + 0x2aa;
    i11 = u6 / 6;
    o6 = p6;
    o6[0] = FXM(i11, p4[0]) + (FXM(i8, p3[0]) + (FXM(i9, p1[0]) + FXM(i10, p2[0])));
    o6[1] = FXM(i11, p4[1]) + (FXM(i8, p3[1]) + (FXM(i9, p1[1]) + FXM(i10, p2[1])));
    o6[2] = FXM(i11, p4[2]) + (FXM(i8, p3[2]) + (FXM(i9, p1[2]) + FXM(i10, p2[2])));
}
