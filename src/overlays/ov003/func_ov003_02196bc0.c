#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { s32 v[3]; } V3;

typedef struct Obj {
    u8 g0[0xa0];
    s8 fa0;
    s8 fa1;
    u8 g1[0xfa - 0xa2];
    s16 ffa;
    u8 g2[0x26c - 0xfc];
    V3 v26c;
    V3 v278;
    u8 g3[0x2a0 - 0x284];
    V3 v2a0;
    u8 g4[0x464 - 0x2ac];
    s32 f464;
    u8 g5[0x488 - 0x468];
    s32 f488;
} Obj;

typedef struct Sub {
    u8 g0[0x90];
    s16 f90;
    u8 g1[2];
    s16 f94;
    s16 f96;
    u8 g2[0xbc - 0x98];
    V3 vbc;
} Sub;

extern u8 *data_02159444;
extern u8 data_02152cd8[];
extern u8 *data_0215942c;

extern void func_02035aa0(Obj *);
extern Sub *func_020364cc(Obj *);
extern void func_01ff832c(s32, s32 *, s32 *, s32 *);
extern void func_02067e34(s32 *, s32 *, s32 *);
extern u32 func_02067df0(s32 *, s32 *);
extern s32 func_02028124(Obj *);
extern void func_0203942c(Obj *);
extern void func_02037450(Obj *, s32);
extern s32 func_02009f38(s32 *, s32 *);
extern s32 func_020289d0(Obj *, s32, s32);
extern s32 func_0203592c(Obj *, Sub *);
extern s32 func_020c1f34(Sub *);
extern s32 func_02026c40(Obj *, Sub *);
extern void func_0202fd7c(Obj *);
extern void func_020362f8(Obj *);
extern void func_0203e908(Obj *, s32);
extern void func_ov003_0219a368(Obj *);

void func_ov003_02196bc0(Obj *p)
{
    V3 a0;
    s32 v1;
    s32 t[6];
    u32 v0;
    s32 v2;
    u32 v4;
    s32 v3;
    s32 v5;
    V3 a36;
    V3 aS60;
    V3 aS54;
    V3 aS48;
    Sub *iVar6;
    V3 aS3c;
    V3 aS30;
    V3 a108;
    s32 iVar12;
    s32 iVar9;
    int uVar7;
    s32 iVar11;
    u32 bVar4;
    s32 iVar10;
    u32 uVar8;
    s32 bVar5;

    bVar4 = 0;
    iVar11 = 0;
    func_02035aa0(p);
    iVar6 = func_020364cc(p);
    if (iVar6 != 0) {
        a36 = p->v2a0;
        iVar11 = *(s32 *)(data_02159444 + 0x1c);
        a0 = *(V3 *)(iVar11 + 0x30);
        v0 = *(s32 *)(data_02152cd8 + 0x4c);
        t[0] = v0;
        v1 = *(s32 *)(data_02152cd8 + 0x58);
        t[1] = v1;
        v2 = *(s32 *)(data_02152cd8 + 0x64);
        t[2] = v2;
        v3 = *(s32 *)(data_02152cd8 + 0x54);
        t[3] = v3;
        v4 = *(s32 *)(data_02152cd8 + 0x60);
        t[4] = v4;
        v5 = *(s32 *)(data_02152cd8 + 0x6c);
        t[5] = v5;
        func_01ff832c(0x3000, &t[0], &t[3], aS54.v);
        func_01ff832c(-0x3000, &t[0], &t[3], aS48.v);
        func_02067e34(a36.v, a0.v, aS60.v);
        uVar7 = func_02067df0(aS60.v, aS54.v);
        uVar8 = func_02067df0(aS60.v, aS48.v);
        if (0 < uVar7) {
            func_01ff832c(-uVar7, aS54.v, a36.v, a36.v);
        }
        if (0 < (s32)uVar8) {
            func_01ff832c(-uVar8, aS48.v, a36.v, a36.v);
        }
        iVar12 = a36.v[0] - a0.v[0];
        iVar11 = a36.v[2] - a0.v[2];
        iVar10 = FX_Mul(iVar12, iVar12) + FX_Mul(iVar11, iVar11);
        iVar9 = func_02028124(p);
        if (iVar10 < 0xe1000 - 0x32 * iVar9) {
            p->v26c.v[0] = a36.v[0] + iVar12;
            p->v26c.v[1] = 0;
            p->v26c.v[2] = a36.v[2] + iVar11;
            func_0203942c(p);
        } else {
            iVar9 = func_02028124(p);
            if (iVar10 > iVar9 * 0x32 + 0xe1000) {
                p->v26c = a0;
                func_0203942c(p);
            } else {
                p->v26c = a36;
                p->v278 = a0;
            }
        }
        func_02037450(p, 0x392);
        a108 = iVar6->vbc;
        func_02067e34(a108.v, p->v2a0.v, aS3c.v);
        func_02067e34(a0.v, p->v2a0.v, aS30.v);
        bVar4 = !func_02009f38(aS3c.v, aS30.v);
        iVar11 = (0x800 > a108.v[1]) ? 1 : 0;
        if (iVar6->f90 != 3) {
            p->f464 = p->f464 + 1;
        }
    }
    iVar9 = func_020289d0(p, 0, 1);
    if (0 != iVar9) {
        return;
    }
    bVar5 = func_0203592c(p, iVar6);
    if (bVar5) {
        return;
    }
    p->f488 = p->f488 + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bVar5 = 0;
    } else if (p->ffa == 0x23) {
        bVar5 = 0;
    } else {
        if (iVar6 != 0) {
            if (iVar6->f90 == 0 || 2 == iVar6->f90) {
                bVar5 = 1;
            } else if (iVar6->f94 == 0x35 && func_020c1f34(iVar6) == 0) {
                bVar5 = 1;
            } else {
                bVar5 = 0;
            }
            if (!bVar5) {
                goto P26c;
            }
        }
        func_0203e908(p, 0x5d);
        func_020362f8(p);
        bVar5 = 1;
        goto LAB;
P26c:
        bVar5 = func_02026c40(p, iVar6);
        if (bVar5) {
            func_0202fd7c(p);
            func_020362f8(p);
            bVar5 = 1;
        } else {
            bVar5 = 0;
        }
    }
LAB:
    if (bVar5) {
        return;
    }
    if (bVar4 || 0 != iVar11 || 8 < p->f464) {
        func_ov003_0219a368(p);
        return;
    }
    if (0 != p->fa0) {
        return;
    }
    if (p->fa1 != 0) {
        return;
    }
    if (iVar6->f96 == 0x11) {
        func_0203e908(p, 0x437);
        return;
    }
    func_0203e908(p, 0x3f1);
}
