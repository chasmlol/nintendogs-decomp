#include "ctx.h"
#pragma opt_lifetimes off

extern u8 data_02133d64[];
extern u8 data_02133ab0[];
extern u8 data_027c0bbc[];
extern s32 func_01ffdb08(s32 a);
extern s32 func_020ec148(s32 a);
extern u16 func_02028118(s32 a);
extern s32 func_02028130(s32 a);
extern u8 func_0202810c(s32 a);
extern void func_0202762c(s32 a, s32 *b);
extern void func_02027654(s32 a, s32 *b);
extern void func_02027178(s32 a, s32 *b, s32 c);
extern void func_0208f7e4(s32 a, s32 b);

typedef struct { s32 w[3]; } T3;

static inline s32 FXI(s32 x, s32 k)
{
    return (s32)((((s64)x) * ((s64)k) + 0x800) >> 12);
}
#define FX(x, k) FXI((s32)(x), (s32)(k))

void func_020ec854(s32 param_1)
{
    s32 st[13];
    s32 iVar9;
    u32 uVar11;
    s32 iVar6;
    s32 iVar8;
    s32 uVar10;
    s32 iVar7;
    u8 cVar3;
    u8 bVar4;
    u16 uVar5;
    s32 k;

    iVar6 = func_01ffdb08((s32)*(s16 *)(param_1 + 0x8c));
    if (iVar6 == 0) {
        return;
    }
    iVar8 = *(s32 *)(param_1 + 0x88) * 0xa8;
    cVar3 = data_02133d64[iVar8];
    iVar8 = (s32)(data_02133d64 + iVar8);
    uVar11 = *(u16 *)(iVar8 + 2);
    if (cVar3 != 0 && cVar3 == 1 && func_020ec148(iVar6) == 2) {
        uVar11 = 0xb;
    }
    uVar5 = func_02028118(iVar6);
    uVar10 = (u32)uVar5;
    iVar7 = func_02028130(iVar6);
    if (uVar10 == 2 && (cVar3 = func_0202810c(iVar6)) >= 1 && (bVar4 = func_0202810c(iVar6)) <= 3) {
        uVar10 = 0x16;
    }
    if (uVar11 == 0xb) {
        func_0202762c(iVar6, &st[0]);
    }
    if (uVar11 == 0xc) {
        func_02027654(iVar6, &st[0]);
    }
    func_02027178(iVar6, (s32 *)(param_1 + 0x3c), uVar11);
    {
        s32 a2 = *(s32 *)(param_1 + 0x44);
        s32 a1 = *(s32 *)(param_1 + 0x40);
        s32 a0 = *(s32 *)(param_1 + 0x3c);
        st[3] = a0;
        st[4] = a1;
        st[5] = a2;
    }
    {
        s32 b2 = *(s32 *)(param_1 + 0x50);
        s32 b1 = *(s32 *)(param_1 + 0x4c);
        s32 b0 = *(s32 *)(param_1 + 0x48);
        st[6] = b0;
        st[7] = b1;
        st[8] = b2;
    }
    {
        s32 c2 = *(s32 *)(param_1 + 0x5c);
        s32 c1 = *(s32 *)(param_1 + 0x58);
        s32 c0 = *(s32 *)(param_1 + 0x54);
        st[9] = c0;
        st[10] = c1;
        st[11] = c2;
    }
    if (*(u8 *)(iVar8 + 1) == 0) {
        *(s32 *)(param_1 + 0x24) = iVar7;
        *(s32 *)(param_1 + 0x28) = iVar7;
        *(s32 *)(param_1 + 0x2c) = iVar7;
    } else {
        iVar9 = *(u8 *)(iVar8 + 1) * 0x8a + (s32)data_02133ab0;
        iVar6 = iVar9 + uVar10 * 6;
        *(u32 *)(param_1 + 0x24) = FX(*(s16 *)(iVar9 + uVar10 * 6), iVar7);
        *(u32 *)(param_1 + 0x28) = FX(*(s16 *)(iVar6 + 2), iVar7);
        *(u32 *)(param_1 + 0x2c) = FX(*(s16 *)(iVar6 + 4), iVar7);
    }
    iVar8 = uVar10 * 6 + iVar8;
    k = *(s16 *)(iVar8 + 4);
    st[3] = FX(st[3], k);
    st[4] = FX(st[4], k);
    st[5] = FX(st[5], k);
    k = *(s16 *)(iVar8 + 6);
    st[6] = FX(st[6], k);
    st[7] = FX(st[7], k);
    st[8] = FX(st[8], k);
    k = *(s16 *)(iVar8 + 8);
    st[9] = FX(st[9], k);
    st[10] = FX(st[10], k);
    st[11] = FX(st[11], k);
    *(s32 *)(param_1 + 0x30) = st[0] + FX(iVar7, st[9] + (st[3] + st[6]));
    *(s32 *)(param_1 + 0x34) = st[1] + FX(iVar7, st[10] + (st[4] + st[7]));
    *(s32 *)(param_1 + 0x38) = st[2] + FX(iVar7, st[11] + (st[5] + st[8]));
    if (param_1 == 0) {
        return;
    }
    func_0208f7e4(param_1, (u16)(data_027c0bbc[0] | (data_027c0bbc[1] << 5) | (data_027c0bbc[2] << 10)));
}
