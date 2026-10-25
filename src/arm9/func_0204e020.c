#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

#define FX(a, b) ((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12))
#define FXU(a, b) ((s32)(((s64)(s32)(a) * (u32)(b) + 0x800) >> 12))

extern s16 data_02126868[];

extern void func_020275c8(s32 a, u8 *b);
extern void func_020275dc(s32 a, u8 *b);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_02027668(s32 a, s32 *b);
extern void func_0202767c(s32 a, s32 *b);
extern void func_02027690(s32 a, s32 *b);
extern s32 func_02028130(u8 *p);
extern s32 func_02028124(u8 *p);
extern s16 func_02068078(s32 a, s32 b);
extern void func_02039448(u8 *p);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern s32 func_02036b94(u8 *p, u8 *q);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_02026bac(u8 *p);
extern void func_0202675c(u8 *p);


void func_0204e020(u8 *p1, s32 p2, s32 p3, s32 p4, s32 p5)
{
    s32 V0[3];
    s32 V1[3];
    s32 V2[3];
    s32 V3[3];
    s32 V4[3];
    s32 iVarC;
    s32 iVar3;
    u8 iVarI;
    s32 k9;
    s32 t;
    int idx;
    s16 sVar4;
    s32 q268;
    s32 uVar6;
    s32 uVar9;
    s32 iVar7;
    s32 u10;
    u32 iVar8;
    s32 iVar5;

    if (p2 == 0) {
        return;
    }
    if (p3 != 0) {
        func_020275dc(p2, p1 + 948);
    } else {
        func_020275c8(p2, p1 + 948);
    }
    switch (p4) {
    case 0: goto P0;
    case 1: goto P1;
    case 2: goto P2;
    }
    goto PEND;
P0:
    *(T3 *)(p1 + 620) = *(T3 *)(p1 + 948);
    func_0203942c(p1);
    func_02037450(p1, 0x304);
    goto PEND;
P1:
    func_02027668(p2, V0);
    func_0202767c(p2, V1);
    func_02027690(p2, V2);
    iVar8 = V0[0] - *(s32 *)(p1 + 0x2a0);
    iVar7 = V0[2] - *(s32 *)(p1 + 0x2a8);
    iVar5 = FX(iVar8, iVar8) + FX(iVar7, iVar7);
    iVar3 = func_02028130((u8 *)p2);
    u10 = FX(iVar3, 0x2000);
    func_02027668(p2, V3);
    {
        s32 da = V3[0] - *(s32 *)(p1 + 0x2a0);
        s32 db;
        t = FX(da, *(s32 *)(0x18c + p1));
        db = V3[2] - *(s32 *)(p1 + 0x2a8);
        t = t + FX(db, *(s32 *)(p1 + 0x194));
    }
    {
        s16 neg = (t <= 0);
        if (0 == neg) {
            uVar6 = iVar8 + FX(V1[0], u10);
            uVar9 = iVar7 + FX(V1[2], u10);
        } else {
            uVar6 = iVar8 - FX(V1[0], u10);
            uVar9 = iVar7 - FX(V1[2], u10);
        }
    }
    iVar3 = func_02028124(p1);
    k9 = 9 * iVar3;
    if (iVar5 > k9) {
        sVar4 = func_02068078(uVar6, uVar9);
        iVar3 = func_02028124(p1);
        idx = (sVar4 >> 4) * 2;
        {
            s32 pm0 = ((s16 *)data_02126868)[idx] * 3;
            *(s32 *)(0x260 + p1) = *(s32 *)(p1 + 0x260) + FXU(FX(pm0, iVar3), 41);
        }
        iVar3 = func_02028124(p1);
        q268 = *(s32 *)(p1 + 0x268);
        {
            s32 pm1 = ((s16 *)data_02126868)[idx + 1] * 3;
            uVar6 = FX(pm1, iVar3);
        }
        *(s32 *)(p1 + 0x268) = q268 + FXU(uVar6, 41);
    } else {
        *(s32 *)(0x260 + p1) = *(s32 *)(p1 + 0x260) + FXU(uVar6, 41);
        *(s32 *)(p1 + 0x268) = *(s32 *)(p1 + 0x268) + FXU(uVar9, 41);
    }
    func_02039448(p1);
    func_01ff832c(-0x4000, V2, (s32 *)(p1 + 0x2a0), (s32 *)(p1 + 0x278));
    func_02037450(p1, 0x300);
    iVar3 = func_02028124(p1);
    if (iVar5 > iVar3 * 25) {
        func_0203e8cc(p1, 0, 0x12);
        *(s32 *)(p1 + 0x464) = 0;
    } else if (iVar5 > k9) {
        func_0203e8cc(p1, 0, 0x11);
        *(s32 *)(p1 + 0x464) = 0;
    } else {
        *(s32 *)(p1 + 0x464) = 1;
    }
    goto PEND;
P2:
    func_02039448(p1);
    func_0203942c(p1);
    func_02037450(p1, 0x300);
    *(s32 *)(p1 + 0x464) = 1;
PEND:
    iVarC = func_02036b94(p1, 948 + p1);
    if (*(s32 *)(p1 + 0x464) != 0) {
        iVar3 = func_02028130(p1);
        if (*(s32 *)(0x3b8 + p1) > FXU(iVar3, 0x300c)) {
            iVarI = 2;
        } else {
            iVar3 = func_02028130(p1);
            iVarI = 0;
            if (*(s32 *)(0x3b8 + p1) > FXU(iVar3, 0x2008)) {
                iVarI = 1;
            }
        }
        if (*(s8 *)(p1 + 0xa1) == 0) {
            if (p5 != 0) {
                func_02027668(p2, V4);
                {
                    s32 d4b = V4[2] - *(s32 *)(p1 + 0x2a8);
                    s32 d4a = V4[0] - *(s32 *)(p1 + 0x2a0);
                    s16 neg2 = (FX(d4a, *(s32 *)(p1 + 0x18c))
                                + FX(d4b, *(s32 *)(p1 + 0x194))) <= 0;
                    if (neg2 == 0) {
                        func_0203e8cc(p1, 0, 0x88);
                    } else {
                        func_0203e8cc(p1, 0, 0x89);
                    }
                }
                if (iVarI == 0) goto A0;
                if (iVarI == 1) goto A1;
                if (iVarI != 2) goto ENDA;
                func_0203e8cc(p1, 1, 0x1f);
                goto ENDA;
            A1:
                func_0203e8cc(p1, 1, 0x20);
                goto ENDA;
            A0:
                func_0203e8cc(p1, 1, 0x21);
            ENDA:
                ;
            } else {
                if (iVarI == 0) goto B0;
                if (iVarI == 1) goto B1;
                if (iVarI != 2) goto ENDB;
                func_0203e8cc(p1, 0, 0x85);
                func_0203e8cc(p1, 1, 0);
                goto ENDB;
            B1:
                func_0203e8cc(p1, 0, 0x86);
                func_0203e8cc(p1, 1, 0);
                goto ENDB;
            B0:
                func_0203e8cc(p1, 0, 0x87);
                func_0203e8cc(p1, 1, 0);
            ENDB:
                ;
            }
        } else {
            func_0203e8cc(p1, 0, 0x8a);
            if (iVarI == 0) goto C0;
            if (iVarI == 1) goto C1;
            if (2 != iVarI) goto ENDC;
            func_0203e8cc(p1, 1, 0x1f);
            goto ENDC;
        C1:
            func_0203e8cc(p1, 1, 0x20);
            goto ENDC;
        C0:
            func_0203e8cc(p1, 1, 0x21);
        ENDC:
            ;
        }
        iVar3 = func_02028130(p1);
        if (iVarC < FXU(iVar3, 0x300c)) {
            *(vu8 *)(p1 + 0x93) = 0x10;
        } else {
            *(vu8 *)(p1 + 0x93) = 7;
        }
        if (p4 != 0) {
            return;
        }
        if (0x6000 >= iVarC) {
            return;
        }
        func_0203e8cc(p1, 0, 0x12);
        func_0203e8cc(p1, 1, 0);
        func_0202675c(p1);
        *(vu8 *)(0x93 + p1) = 7;
        *(s32 *)(0x464 + p1) = 0;
        return;
    }
    if (0x3000 <= iVarC) {
        return;
    }
    func_0203e8cc(p1, 0, 0);
    func_02026bac(p1);
    *(s32 *)(p1 + 0x464) = 1;
}
