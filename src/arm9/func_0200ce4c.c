#include "ctx.h"

extern s32 func_02028130(u8 *p);

static inline s32 FXM(s32 x, s32 y)
{
    s64 t = (s64)x * (s64)y;
    return (s32)((t + 0x800) >> 12);
}

BOOL func_0200ce4c(u8 *p)
{
    s32 a8, a6, a5, a4, dx, dy, h, i1, i2, f2;

    a8 = *(s32 *)(p + 0x26c);
    a6 = *(s32 *)(p + 0x2a0);
    a5 = *(s32 *)(p + 0x274);
    a4 = *(s32 *)(p + 0x2a8);
    dx = a8 - a6;
    dy = a5 - a4;
    h = func_02028130(p) >> 1;
    i1 = (*(s32 *)(p + 0x26c) - *(s32 *)(p + 0x2e8)) - (s32)((((s64)*(s32 *)(p + 0x1a4) * (s64)h) + 0x800) >> 12);
    h = func_02028130(p) >> 1;
    f2 = FXM(dx, i1);
    i2 = (*(s32 *)(p + 0x274) - *(s32 *)(p + 0x2f0)) - (s32)((((s64)*(s32 *)(p + 0x1ac) * (s64)h) + 0x800) >> 12);
    return (f2 + FXM(dy, i2)) <= 0;
}
