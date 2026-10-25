#include "ctx.h"

extern s32 func_01ffdb08(s32 a);
extern void func_02027668(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_02067df0(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s32 func_0206782c(s32 a);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);
extern s32 func_02026dc0(s32 a, s32 b);
extern void func_020a0e04(s32 a);
extern void func_020a0b40(s32 a, s32 b);

#define FX(a, b) ((s32)((((s64)(s32)(a)) * (s64)(s32)(b) + 0x800) >> 12))

typedef struct {
    s32 l98, l94, l90, l8c, l88, l84, l80, l7c, l78;
    s32 a74[3];
    s32 a68[3];
    s32 a5c[3];
    s32 a50[3];
    s32 u44, u40, u3c, u38, u34, u30, u2c, u28, u24;
} Frame;

void func_ov006_02163314(u8 *param_1)
{
    Frame F;
    u32 uVar5;
    u32 ta, tb, tc;
    u32 *puVar7;
    u32 *puVar6;
    s32 iVar9;
    s32 iVar8;
    s32 iVar3;
    s32 uVar4;
    s32 uVar10;
    s32 sq0;
    s32 iVar11;
    s32 fxa, fxb;

    puVar7 = *(u32 **)(param_1 + 0x2c);
    iVar8 = 0;
    uVar5 = puVar7[0x17];
    puVar7[0] = puVar7[0] + 1;
    puVar6 = (u32 *)(uVar5 + 0x3c);
    tc = puVar6[2];
    tb = puVar6[1];
    ta = *(u32 *)(uVar5 + 0x3c);
    F.l98 = ta;
    F.l94 = tb;
    F.l90 = tc;
    iVar9 = 0;
    tc = puVar6[5];
    tb = puVar6[4];
    ta = puVar6[3];
    F.l8c = ta;
    F.l88 = tb;
    F.l84 = tc;
    tc = puVar6[8];
    tb = puVar6[7];
    ta = puVar6[6];
    F.l80 = ta;
    F.l7c = tb;
    F.l78 = tc;
    do {
        iVar3 = func_01ffdb08(iVar9);
        if (iVar3 != 0) {
            iVar8 = func_01ffdb08(iVar9);
        }
        iVar9 = (s16)(iVar9 + 1);
    } while (iVar9 < 3);
    if (iVar8 != 0) {
        puVar7[6] = puVar7[6] + 1;
        if ((puVar7[6] & 7) == 0) {
            iVar9 = func_02026dc0(iVar8, (s16)puVar7[1]);
            if (iVar9 == 0) {
                puVar7[7] = puVar7[7] + 6;
            } else {
                func_02027668(iVar8, F.a74);
                iVar9 = func_02028130(iVar8);
                func_01ff832c(0x1000, &F.l8c, (s32 *)(puVar7 + 2), F.a5c);
                func_02067e34(F.a74, F.a5c, F.a50);
                uVar4 = func_02067df0(F.a50, &F.l80);
                func_01ff832c(uVar4, &F.l80, F.a5c, F.a68);
                fxa = FX(iVar9, iVar9);
                fxb = FX(uVar4, 12);
                uVar10 = FX(fxa, fxb);
                iVar9 = func_02067898(uVar10, 0xf000);
                iVar9 = -iVar9;
        puVar7[7] = puVar7[7] + iVar9;
            }
            if ((s32)puVar7[7] < -0x29) {
                puVar7[7] = 0xffffffd7;
            }
            if (0x29 < (s32)puVar7[7]) {
                puVar7[7] = 0x29;
            }
        }
    }
    iVar11 = func_0206782c(FX(puVar7[7], puVar7[7]));
    uVar4 = F.l7c + puVar7[7];
    uVar10 = FX(uVar4, 0xf000);
    sq0 = 0x1000 - FX(F.l7c, F.l7c);
    F.l7c = uVar4;
    if ((s32)uVar10 > 0x3000) {
        F.l7c = puVar7[5];
        if (puVar7[8] == 0) {
            func_020a0b40(0x10, iVar11);
        }
        puVar7[8] = 1;
        if (0 < (s32)puVar7[7]) {
            puVar7[7] = 0;
        }
    } else {
        if (puVar7[8] != 0) {
            func_020a0e04(0x11);
        }
        puVar7[8] = 0;
    }
    if ((s32)uVar10 < -0x3000) {
        F.l7c = -puVar7[5];
        if (puVar7[9] == 0) {
            func_020a0b40(0x10, iVar11);
        }
        puVar7[9] = 1;
        if ((s32)puVar7[7] < 0) {
            puVar7[7] = 0;
        }
    } else {
        if (puVar7[9] != 0) {
            func_020a0e04(0x11);
        }
        puVar7[9] = 0;
    }
    iVar9 = func_02067898(0x1000 - FX(F.l7c, F.l7c), sq0);
    iVar9 = func_0206782c(iVar9);
    F.l80 = FX(F.l80, iVar9);
    F.l78 = FX(F.l78, iVar9);
    func_02067d04(&F.l80, &F.l98, &F.l8c);
    *puVar6 = F.l98;
    puVar6[1] = F.l94;
    puVar6[2] = F.l90;
    puVar6[3] = F.l8c;
    puVar6[4] = F.l88;
    puVar6[5] = F.l84;
    puVar6[6] = F.l80;
    puVar6[7] = F.l7c;
    puVar6[8] = F.l78;
    if ((puVar7[0] & 0x1f) != 0) {
        return;
    }
    tc = puVar6[2];
    tb = puVar6[1];
    ta = puVar6[0];
    F.u44 = ta;
    F.u40 = tb;
    F.u3c = tc;
    tc = puVar6[5];
    tb = puVar6[4];
    ta = puVar6[3];
    F.u38 = ta;
    F.u34 = tb;
    F.u30 = tc;
    func_02067d04(&F.u44, &F.u38, &F.u2c);
    func_02006a30(&F.u44, &F.u44);
    func_02006a30(&F.u2c, &F.u2c);
    func_02067d04(&F.u2c, &F.u44, &F.u38);
    *puVar6 = F.u44;
    puVar6[1] = F.u40;
    puVar6[2] = F.u3c;
    puVar6[3] = F.u38;
    puVar6[4] = F.u34;
    puVar6[5] = F.u30;
    puVar6[6] = F.u2c;
    puVar6[7] = F.u28;
    puVar6[8] = F.u24;
}
