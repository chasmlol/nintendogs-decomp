#include "ctx.h"

extern s16 data_02126868[];

/* camera position/up from the angle[3] at +0x6c (FX_SinIdx/FX_CosIdx over the sin/cos table) */
void func_ov009_0215cb20(u8 *p)
{
    s16 *tb;
    s32 *q;
    s32 i0, i1, i2;
    s32 j0, j1, j2;
    s32 a0, a1, b0, b1, c0, c1;
    s64 l0, l1;

    i1 = *(u16 *)(p + 0x6e) >> 4;
    j1 = i1 * 2;
    i0 = *(u16 *)(p + 0x6c) >> 4;
    tb = data_02126868;
    q = (s32 *)(p + 20);
    j0 = i0 * 2;
    i2 = *(u16 *)(p + 0x70) >> 4;
    b0 = tb[j1];
    a0 = tb[j0];
    b1 = tb[j1 + 1];
    j2 = i2 * 2;
    a1 = tb[j0 + 1];
    c0 = tb[j2];
    *(s32 *)(p + 0x14) = (a1 * *(s32 *)(p + 0x68)) >> 12;
    l0 = (s64)c0 * b1 + 0x800;
    l1 = (s64)c0 * b0 + 0x800;
    q[1] = (a0 * *(s32 *)(p + 0x68)) >> 12;
    q[2] = (a1 * *(s32 *)(p + 0x68)) >> 12;
    *(s32 *)(p + 0x14) = (*(s32 *)(p + 0x14) * b0 + q[3]) >> 12;
    q[1] = q[1] + q[4];
    q[2] = (q[2] * b1 + q[5]) >> 12;
    c1 = tb[j2 + 1];
    q[6] = (s32)(l0 >> 12);
    q[7] = c1;
    q[8] = -(s32)(l1 >> 12);
}
