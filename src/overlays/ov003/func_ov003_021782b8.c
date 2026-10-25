#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_02152cd8[];
extern s32 data_0214f460;
extern u8 *data_02159444;
extern u32 *data_0214f464;

extern s32 func_02028130(u8 *p);
extern void func_01ff832c(s32 a, s32 *b, u8 *c, s32 *d);
extern void func_020ab02c(s32 a, s32 *b, s32 *c);
extern void func_02067e34(u8 *a, s32 *b, s32 *c);
extern void func_02039448(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_020aaf38(s32 a, u8 *b, s32 c);
extern void func_02037450(u8 *p, s32 a);
extern void func_ov003_02179bb8(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);

typedef struct { s32 w[3]; } T3;

#define FX(k, x) ((s32)(((s64)(x) * (k) + 0x800) >> 12))
#define FXSQ(x) ((s32)(((s64)(x) * (x) + 0x800) >> 12))

static inline void SwapB(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

static inline u32 SwapR(u32 v, vu8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_021782b8(u8 *p)
{
    s32 local_38[3];
    s32 local_2c[3];
    s32 uVar9;
    s32 iVar8;
    s32 uVar5;
    s32 l2;
    s32 sqA;
    s32 first;
    s32 second;
    s32 l0;
    s32 flag;
    s16 sVar1;
    u32 v;
    u32 r;

    local_2c[0] = *(s32 *)(data_02152cd8 + 0x54);
    local_2c[1] = *(s32 *)(data_02152cd8 + 0x60);
    local_2c[2] = *(s32 *)(data_02152cd8 + 0x6c);
    uVar9 = 0;
    iVar8 = 60;
    uVar5 = func_02028130(p);
    func_01ff832c(FX(0x1338, uVar5), local_2c, p + 0x2dc, local_2c);
    func_020ab02c(data_0214f460, local_38, local_2c);
    uVar5 = func_02028130(p);
    local_38[1] += FX(0x802, uVar5);
    func_02067e34(p + 0x278, local_38, local_2c);
    if (*(s8 *)(p + 0xa1) != 0) goto LAB_body;
    l0 = local_2c[0];
    sqA = FXSQ(l0);
    l2 = local_2c[2];
    if (sqA + FXSQ(l2) <= FX(0x1004, func_02028130(p))) goto LAB_skip;
LAB_body:
    func_02039448(p);
    *(T3 *)(p + 0x278) = *(T3 *)local_38;
LAB_skip:
    *(T3 *)(p + 0x3b4) = *(T3 *)local_38;
    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) goto LAB_clear;
    sVar1 = *(s16 *)(data_02159444 + 0x88);
    iVar8 = 300;
    if (sVar1 > 20) {
        func_0203e8cc(p, 0, 133);
    } else if (sVar1 > -40) {
        func_0203e8cc(p, 0, 134);
    } else {
        func_0203e8cc(p, 0, 135);
    }
    if (((*(vu16 *)0x04000304 & 0x8000) >> 15) != 0) goto LAB_7;
    first = func_02028130(p);
    second = func_02028130(p);
    if (func_020aaf38(data_0214f460, p + 0x2dc, FX(0x1806, (s32)(((s64)second * first + 0x800) >> 12))) != 0) {
        SwapB(16, p + 0x93);
        uVar9 = 1;
        goto LAB_end;
    }
LAB_7:
    SwapB(7, p + 0x93);
    goto LAB_end;
LAB_clear:
    func_0203e8cc(p, 0, 0);
    SwapB(3, p + 0x93);
LAB_end:
    func_02037450(p, 0x300);
    flag = 0;
    if (*(u16 *)(p + 0xfc) > 40) {
        u32 *pp = data_0214f464;
        v = *pp * 0x10dcd + 1;
        *pp = v;
        if ((u16)((u32)iVar8 * (u16)v >> 16) == 0) flag = 1;
    }
    func_ov003_02179bb8(p, 0, 0x1f8, 1, 0, 1, uVar9, flag, 0, 0, 3, 0);
    if (*(s8 *)(p + 0x93) == 16) {
        r = SwapR(1, p + 0xb9);
    } else {
        r = SwapR(0, p + 0xb9);
    }
    return;
}
