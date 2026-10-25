#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 data_0213b80c[];
extern s32 *data_0214f464;
extern s32 func_020365c8(u8 *p, u8 *q);
extern s32 func_02035570(u8 *p);
extern s32 func_0203555c(u8 *p);
extern s32 func_02028124(u8 *p);
extern void func_0203e908(u8 *p, s32 id);

s32 func_ov003_02198ba0(u8 *p, s32 p2, s32 p3, u8 *p4)
{
    s32 r5;
    s32 t;
    s32 m;
    s32 A;
    s32 term;
    u32 uv;
    u32 uv4;
    u8 bVar1;

    if (p4 == 0) {
        goto RET0;
    }
    r5 = func_020365c8(p, p4);
    if (func_02035570(p)) {
        goto R1;
    }
    if (func_0203555c(p) == 0) {
        goto C1;
    }
R1:
    return 0;
C1:
    t = *(s16 *)(p4 + 0x96);
    if (t == 5) {
        return 0;
    }
    if ((u16)t <= 1) {
        return 0;
    }
    bVar1 = data_0213b80c[*(s8 *)(p + 0x8d)];
    m = (u16)(6 - bVar1);
    A = (u16)(m * 50);
    uv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uv;
    uv4 = (u16)(((u32)A * (u16)uv) >> 16);
    if (*(s16 *)(p + 0xea) == 0x3f8) {
        uv4 = (u16)(uv4 + 1);
    }
    if (r5 == 0) {
        goto Z;
    }
    if (r5 == 1) {
        goto Z;
    }
    if (r5 != 2) {
        goto RET0;
    }
    term = FX_Mul(p3 + 0x4000, func_02028124(p));
    if (p2 >= term) {
        goto S2;
    }
    switch (uv4) {
    case 0:
        func_0203e908(p, 0x3f8);
        return 1;
    case 1:
        func_0203e908(p, 0x3fa);
        return 1;
    case 2:
        func_0203e908(p, 0x3fb);
        return 1;
    case 3:
        func_0203e908(p, 0x3fc);
        return 1;
    case 4:
        func_0203e908(p, 0x3fd);
        return 1;
    default:
        return 0;
    }
S2:
    switch (uv4) {
    case 0:
        func_0203e908(p, 0x3f8);
        return 1;
    case 1:
        func_0203e908(p, 0x3f9);
        return 1;
    case 2:
        func_0203e908(p, 0x3fa);
        return 1;
    case 3:
        func_0203e908(p, 0x3fb);
        return 1;
    case 4:
        func_0203e908(p, 0x3fc);
        return 1;
    case 5:
        func_0203e908(p, 0x3fd);
        return 1;
    default:
        return 0;
    }
Z:
    if (uv4 == 0) {
        goto A;
    }
    if (uv4 != 1) {
        goto R2;
    }
    goto B;
A:
    func_0203e908(p, 0x3f8);
    return 1;
B:
    func_0203e908(p, 0x3fb);
    return 1;
R2:
    return 0;
RET0:
    return 0;
}
