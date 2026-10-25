#include "ctx.h"

extern void func_02067728(u32 a, u32 b);
extern u32 func_020677c8(void);

typedef struct { u8 pad0[0x18]; s32 X; s32 Y; s16 s20; s16 s22; u8 pad1[8]; u16 a; u16 b; } In;

void func_0207b920(u32 *out, In *in)
{
    u32 ia;
    u32 ib;
    s32 u10, u9, u8v, u7;
    u32 f;
    s32 i1, i2;
    s64 l4, l5, l3;

    ia = in->a << 12;
    ib = in->b << 12;
    func_02067728(ib, ia);
    u10 = (s32)(((s64)in->X * in->s22) >> 12);
    u9 = (s32)(((s64)in->X * in->s20) >> 12);
    u8v = (s32)(((s64)in->Y * in->s22) >> 12);
    u7 = (s32)(((s64)in->Y * in->s20) >> 12);
    out[0] = u10;
    out[5] = u8v;
    f = func_020677c8();
    out[1] = (u32)((s32)(u7 * f) >> 12);
    func_02067728(ia, ib);
    i1 = -(s32)in->b * 0x800;
    i2 = -(s32)in->a * 0x800;
    l4 = (s64)u10 * i2;
    l5 = (s64)u9 * i1;
    l3 = (s64)u7 * i2 + (s64)u8v * i1;
    out[12] = (u32)((l4 - l5) >> 8) + in->a * 0x8000;
    out[13] = (u32)(l3 >> 8) + in->b * 0x8000;
    f = func_020677c8();
    out[4] = (u32)((s32)(-u9 * f) >> 12);
}
