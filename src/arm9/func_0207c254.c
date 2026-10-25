#include "ctx.h"

extern void func_02067728(u32 a, u32 b);
extern u32 func_020677c8(void);

void func_0207c254(u32 *out, u8 *P)
{
    u32 a12;
    u32 b12;
    s32 sVar2;
    s32 sVar3;
    s32 iVar6;
    s32 iVar11;
    u32 uVar7;
    u32 uVar10;
    u32 uVar9;
    u32 uVar13;
    u32 a2;
    s64 lv4;
    s64 lv5;
    s64 lv6;
    s64 lv7;
    s64 lv8;
    s64 A;
    s64 B;
    s64 Ax;
    s64 Bx;

    a12 = (u32)*(u16 *)(P + 0x2c) << 12;
    b12 = (u32)*(u16 *)(P + 0x2e) << 12;
    func_02067728(b12, a12);
    sVar2 = *(s16 *)(P + 0x22);
    iVar6 = *(s32 *)(P + 0x18);
    sVar3 = *(s16 *)(P + 0x20);
    iVar11 = *(s32 *)(P + 0x1c);
    out[0] = (u32)(((s64)iVar6 * (s64)sVar2) >> 12);
    uVar10 = (u32)(((s64)iVar6 * (s64)sVar3) >> 12);
    uVar9 = (u32)(((s64)iVar11 * (s64)sVar2) >> 12);
    out[5] = uVar9;
    uVar7 = func_020677c8();
    {
        s32 xs = (s32)(u32)(((s64)iVar11 * (s64)sVar3) >> 12);
        s32 pr = xs * (s32)uVar7;
        out[1] = (u32)(pr >> 12);
    }
    func_02067728(a12, b12);

    uVar13 = *(u32 *)(P + 0x1c);
    lv4 = (s64)*(s32 *)(P + 0x24) * (s64)*(s16 *)(P + 0x20);
    a2 = *(u16 *)(P + 0x2c);
    B = (s64)*(s32 *)(P + 0x24) * (s64)*(s16 *)(P + 0x22)
        + (s64)*(s32 *)(P + 0x28) * (s64)*(s16 *)(P + 0x20);
    lv6 = (s64)*(s32 *)(P + 0x28) * (s64)*(s16 *)(P + 0x22);
    A = lv4 - lv6;

    Ax = A >> 12;
    Bx = B >> 12;
    lv7 = Ax * (s64)(s32)uVar13;
    lv8 = Bx * (s64)*(s32 *)(P + 0x18);
    out[12] = a2 * (uVar10 - (u32)(lv8 >> 12)) * 16;
    out[13] = (u32)(-(u32)*(u16 *)(P + 0x2e)) * ((uVar9 + (u32)(lv7 >> 12)) - 4096) * 16;
    uVar7 = func_020677c8();
    out[4] = (u32)((s32)(-uVar10 * uVar7) >> 12);
}
