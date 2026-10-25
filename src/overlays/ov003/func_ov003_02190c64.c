#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u8 *data_02159444;
extern u8 data_02152cd8[];
extern u8 *data_0214f464;
extern s32 func_020364cc(u8 *p);
extern void func_0202f9b4(u8 *p);
extern void func_020c17cc(s32 a, s32 *b);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_02067df0(s32 *a, s32 *b);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern s32 func_02028124(u8 *p);
extern void func_02028894(u8 *p, s32 *a, s32 *b);
extern s32 func_02028130(u8 *p);
extern void func_02014198(u8 *p, s32 a);
extern void func_0209bf30(u8 *p, s32 a);
extern s32 func_ov003_02197dd8(u8 *p);
extern s32 func_020bc114(void);
extern void func_02029504(u8 *p);
extern void func_020340f4(u8 *p);
extern void func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_02027e64(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 a);

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s32)(b) + 0x800) >> 12))

void func_ov003_02190c64(u8 *param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u8 *iVar4;
    s32 iVar7;
    s32 uVar5;
    s32 aV[3];
    u32 uVar6;
    s32 aRes[9];
    s32 aT[9];
    s32 aP[3];
    s32 aQ[3];

    iVar4 = (u8 *)func_020364cc(param_1);
    iVar7 = *(s32 *)(param_1 + 0x484) >> 3;
    func_0202f9b4(param_1);
    if (*(s16 *)(iVar4 + 0x96) == 6) {
        func_020c17cc((s32)iVar4, aP);
    } else {
        *(T3 *)aP = *(T3 *)(data_02159444 + 0x9c);
    }
    *(T3 *)(param_1 + 0x3b4) = *(T3 *)aP;
    func_02067e34((s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x2c4), aV);
    {
        u32 v3, v2;
        v2 = *(vu32 *)(data_02152cd8 + 0x58);
        v3 = *(vu32 *)(data_02152cd8 + 0x4c);
        aT[1] = v2;
        v2 = *(vu32 *)(data_02152cd8 + 0x50);
        *(volatile s32 *)&aT[0] = v3;
        v3 = *(vu32 *)(data_02152cd8 + 0x64);
        aT[3] = v2;
        v2 = *(vu32 *)(data_02152cd8 + 0x68);
        aT[2] = v3;
        v3 = *(vu32 *)(data_02152cd8 + 0x5c);
        aT[5] = v2;
        v2 = *(vu32 *)(data_02152cd8 + 0x60);
        aT[4] = v3;
        v3 = *(vu32 *)(data_02152cd8 + 0x54);
        *(volatile s32 *)&aT[7] = v2;
        v2 = *(vu32 *)((int)data_02152cd8 + 0x6c);
        aT[6] = v3;
        aT[8] = v2;
    }
    uVar5 = func_02067df0(&aT[0], aV);
    aRes[0] = FXM(aT[0], uVar5);
    aRes[1] = FXM(aT[1], uVar5);
    aRes[2] = FXM(aT[2], uVar5);
    uVar5 = func_02067df0(&aT[3], aV);
    aRes[3] = FXM(aT[3], uVar5);
    aRes[4] = FXM(aT[4], uVar5);
    aRes[5] = FXM(aT[5], uVar5);
    uVar5 = func_02067df0(&aT[6], aV);
    aRes[6] = FXM(aT[6], uVar5);
    aRes[7] = FXM(aT[7], uVar5);
    aRes[8] = FXM(aT[8], uVar5);
    func_01ff832c(0x2008, &aRes[0], (s32 *)(param_1 + 0x2c4), (s32 *)(param_1 + 0x3b4));
    func_01ff832c(0x300c, &aRes[3], (s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x3b4));
    func_02067e68(&aRes[6], (s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x3b4));
    func_02067e34(aP, (s32 *)(param_1 + 0x2e8), aV);
    uVar5 = func_02067df0(&aT[0], aV);
    if (param_3 != 0) {
        uVar6 = func_02028124(param_1);
        *(s32 *)(param_1 + 0x25c) = FXM(uVar6, -15);
        *(s32 *)(param_1 + 0x264) = *(s32 *)(param_1 + 0x25c) * -9;
    }
    if (param_4 != 0) {
        func_02028894(param_1, aQ, (s32 *)0);
        uVar6 = func_02067df0(&aT[6], aQ);
        aQ[0] = FXM(aT[6], uVar6);
        aQ[1] = FXM(aT[7], uVar6);
        aQ[2] = FXM(aT[8], uVar6);
        if (uVar5 > 0) {
            uVar6 = func_02028130(param_1);
            func_01ff832c(FXM(-0x300c, uVar6), &aT[0], aQ, aQ);
        } else {
            uVar6 = func_02028130(param_1);
            func_01ff832c(FXM(0x300c, uVar6), &aT[0], aQ, aQ);
        }
        *(s32 *)(param_1 + 0x260) = (aQ[0] - *(s32 *)(param_1 + 0x2a0)) >> 4;
        *(s32 *)(param_1 + 0x268) = (aQ[2] - *(s32 *)(param_1 + 0x2a8)) >> 4;
        if (uVar5 > iVar7) {
            func_01ff832c(uVar5 - iVar7, &aT[0], aV, aV);
        } else if (uVar5 < -iVar7) {
            func_01ff832c(uVar5 - iVar7, &aT[0], aV, aV);
        }
        *(s32 *)(param_1 + 0x260) = *(s32 *)(param_1 + 0x260) + (aV[0] >> 6);
        *(s32 *)(param_1 + 0x268) = *(s32 *)(param_1 + 0x268) + (aV[2] >> 6);
    }
    func_02014198(param_1, param_2);
    func_0209bf30(param_1 + 0x95c, 0x27);
    *(s32 *)(param_1 + 0x48c) = *(s32 *)(param_1 + 0x48c) - 1;
    iVar7 = func_ov003_02197dd8(param_1);
    if (iVar7 != 0) {
        return;
    }
    iVar7 = func_020bc114();
    if (iVar7 == 0) {
        func_02029504(param_1);
        func_020340f4(param_1);
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        return;
    }
    if (*(s32 *)(param_1 + 0x48c) > 0) {
        goto L4e4;
    }
    func_02027e64(param_1, 5, 0x19);
    func_0203e908(param_1, 0x415);
    return;
L4e4:
    if (param_5 == 0) {
        return;
    }
    {
        u32 lcg = *(u32 *)data_0214f464 * 0x10dcd + 1;
        *(u32 *)data_0214f464 = lcg;
        uVar6 = (u16)((((u32)(u16)lcg) * 7u) >> 16);
    }
    if (uVar6 == 0) {
        goto L41a;
    }
    if (uVar6 == 1) {
        goto LCHK;
    }
    func_0203e908(param_1, 0x419);
    return;
L41a:
    func_0203e908(param_1, 0x41a);
    return;
LCHK:
    if (uVar5 <= 0) {
        goto L41b;
    }
    func_0203e908(param_1, 0x41c);
    return;
L41b:
    func_0203e908(param_1, 0x41b);
}
