#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_ov004_02170300[];
extern u32 data_ov004_0217030c[];
extern u8 *data_02159444;
extern u8 data_02152cd8[];
extern u32 data_02126728[];

extern s32 func_ov004_0216e508(s32 a);
extern s32 func_02044ca0(s32 a);
extern s32 func_020ec43c(s32 a);
extern void func_020ec16c(void *a, s32 b, s32 c);
extern void func_020d3444(u8 *p, s32 a, void *b);
extern void func_020aafac(s32 a, void *b, void *c, void *d);
extern s32 func_ov004_0216e540(void);
extern u32 func_02028130(s32 a);
extern void func_01ff832c(s32 a, void *b, void *c, void *d);
extern s32 func_020bc3c4(void);
extern s32 func_02067898(s32 a, s32 b);
extern void func_0200b644(void *a, void *b, void *c, void *d, void *e);
extern s32 func_020aaec4(s32 a, void *b, s32 c);
extern void func_0208ec84(s32 a, void *b, void *c);
extern void func_020a0b98(s32 a, void *b);
extern s32 func_02006a30(void *a, void *b);
extern void func_02067e34(void *a, void *b, void *c);
extern void func_02067d04(void *a, void *b, void *c);
extern void func_02067e68(void *a, void *b, void *c);
extern u32 func_02067df0(void *a, void *b);
extern void func_02027654(s32 a, void *b);
extern void func_02027618(s32 a, void *b);
extern void func_02027604(s32 a, void *b);
extern void func_020275f0(s32 a, void *b);
extern void func_020d345c(u8 *p, s32 a, void *b);
extern void func_020d3410(u8 *p, s32 a, void *b);
extern void func_0202819c(s32 a);
extern u32 func_0206782c(s32 a);
extern void func_020d3354(u8 *p);
extern void func_020d30d4(u8 *p, s32 a, s32 b);
extern void func_020d2fac(u8 *p, s32 a, s32 b);
extern void func_020d2978(u8 *p);
extern void func_020d31e8(u8 *p, s32 a);
extern void func_01ffe474(u8 *p);

static inline s32 FXM(s32 v1, s32 v2) { return (s32)(((s64)v1 * v2 + 0x800LL) >> 12); }

void func_ov004_0216ea4c(u8 *param_1)
{
    s32 iVar4;
    s32 iVar5;
    s32 iStack_194;
    s32 iStack_18c;
    s32 iStack_14;
    s32 aiStack_188[3];
    s32 iStack_17c[3];
    s32 uStack_170[3];
    s32 iStack_164[3];
    s32 iStack_158[3];
    s32 iStack_14c[3];
    s32 iStack_140[3];
    s32 aiStack_134[3];
    u32 auStack_128[6];
    s32 iStack_110[3];
    s32 iStack_104[3];
    s32 aiStack_f8[3];
    s32 aiStack_ec[3];
    s32 aiStack_e0[3];
    u32 auStack_d4[6];
    s32 aiStack_bc[3];
    u32 uStack_b0[3];
    u32 uStack_a4[3];
    s32 aiMat[12];
    u32 auStack_68[4];
    u32 auStack_58[4];
    s32 aiStack_48[3];
    u32 uStack_3c[3];
    s32 iStack_30[3];
    s32 iVar12;
    s32 iVar10;
    s32 iVar6;
    s32 iVar7;
    s32 iVar8;
    s32 iVar9;
    s32 iVar13;
    s32 *piVar14;
    s32 iVar14;
    s32 iVar15;
    s32 iVar16;
    u32 uVar7;
    u32 uVar9;
    u32 uVar11;
    s64 lVar1;
    s64 lVar2;

    iVar4 = func_ov004_0216e508(*(s16 *)(param_1 + 0xdc));
    iVar5 = func_02044ca0(0);
    if ((*(u16 *)(param_1 + 0x20) & 1) != 0) {
        return;
    }
    if (iVar4 == 0) {
        return;
    }
    iVar7 = func_020ec43c(iVar4);
    if (iVar7 == -1) {
        iVar7 = 0;
    }
    func_020ec16c(aiStack_188, iVar4, iVar7);
    func_020d3444(param_1 + 0x88, 8, aiStack_188);
    if (*(u8 *)(param_1 + 0xa4) == 1) {
        *(T3 *)iStack_17c = *(T3 *)data_ov004_02170300;
        *(T3 *)uStack_170 = *(T3 *)data_ov004_0217030c;
        func_020aafac(iVar5, param_1 + 0xa8, iStack_17c, uStack_170);
        if (((*(u16 *)(data_02159444 + 0x84) & 1) == 0) || (func_ov004_0216e540() == 0)) {
            *(param_1 + 0xa4) = 0;
        }
    } else if (*(u8 *)(param_1 + 0xa4) == 0) {
        iVar12 = *(s32 *)(param_1 + 0xa8);
        iVar10 = iVar12 - aiStack_188[0];
        uVar11 = func_02028130(iVar4);
        uVar11 = FXM(uVar11, 0x99a);
        iVar8 = uVar11 * 9;
        if (iVar10 > 0) {
            iVar15 = iVar10;
        } else {
            iVar15 = -iVar10;
        }
        if (iVar15 > iVar8) {
            if (iVar10 > 0) {
                iVar12 = aiStack_188[0] + iVar8;
            } else {
                iVar12 = aiStack_188[0] - iVar8;
            }
        }
        iVar10 = *(s32 *)(param_1 + 0xa8);
        iVar8 = iVar12 - iVar10;
        *(s32 *)(param_1 + 0xa8) = iVar10 + (iVar8 / 10);
        if (func_ov004_0216e540() != 0) {
            u8 *P = data_02159444;
            *(T3 *)iStack_164 = *(T3 *)(*(u8 **)(P + 0x1c) + 0x30);
            *(T3 *)iStack_158 = *(T3 *)(*(u8 **)(P + 0x1c) + 0x48);
            iStack_14c[0] = *(s32 *)(data_02152cd8 + 0x50);
            iStack_14c[1] = *(s32 *)(data_02152cd8 + 0x5c);
            iStack_14c[2] = *(s32 *)(data_02152cd8 + 0x68);
            func_01ff832c(0x1000, iStack_158, iStack_164, iStack_140);
            iVar16 = func_020bc3c4();
            iVar8 = func_020bc3c4();
            iVar6 = func_02067898((s16)*(s16 *)(iVar16 + 0x6c), (s16)*(s16 *)(iVar8 + 0x6e));
            func_01ff832c(iVar6, iStack_14c, iStack_140, iStack_140);
            aiStack_134[2] = *(s32 *)(param_1 + 0xb0);
            aiStack_134[0] = 0;
            aiStack_134[1] = 0;
            auStack_128[0] = 0;
            auStack_128[1] = 0;
            auStack_128[2] = 0x1000;
            func_0200b644(iStack_140, iStack_164, iStack_140, aiStack_134, auStack_128);
            iVar6 = *(s32 *)(param_1 + 0xac);
            if (iVar6 > iStack_140[1] + (s32)0xfffff333) {
                iVar8 = (iStack_140[1] + (s32)0xfffff333) - iVar6;
                *(s32 *)(param_1 + 0xac) = iVar6 + (iVar8 / 10);
            }
            iVar16 = func_020bc3c4();
            iVar12 = *(s32 *)(iVar16 + 0x70);
            iVar16 = func_020bc3c4();
            iVar8 = func_020bc3c4();
            iVar6 = func_02067898((s16)*(s16 *)(iVar16 + 0x6c), (s16)*(s16 *)(iVar8 + 0x6e));
            uVar11 = FXM(iVar6, iVar12);
            {
                u8 *P2 = data_02159444;
                *(T3 *)&auStack_128[3] = *(T3 *)(*(u8 **)(P2 + 0x1c) + 0x30);
                *(T3 *)iStack_110 = *(T3 *)(*(u8 **)(P2 + 0x1c) + 0x48);
                iStack_104[0] = *(s32 *)(data_02152cd8 + 0x4c);
                iStack_104[1] = *(s32 *)(data_02152cd8 + 0x58);
                iStack_104[2] = *(s32 *)(data_02152cd8 + 0x64);
                iStack_104[0] = -iStack_104[0];
                iStack_104[1] = -iStack_104[1];
                iStack_104[2] = -iStack_104[2];
            }
            func_01ff832c(0x1000, iStack_110, &auStack_128[3], aiStack_ec);
            func_01ff832c(uVar11, iStack_104, aiStack_ec, aiStack_f8);
            func_01ff832c(-uVar11, iStack_104, aiStack_ec, aiStack_ec);
            aiStack_e0[2] = *(s32 *)(param_1 + 0xb0);
            aiStack_e0[0] = 0;
            aiStack_e0[1] = 0;
            auStack_d4[0] = 0;
            auStack_d4[1] = 0;
            auStack_d4[2] = 0x1000;
            func_0200b644(aiStack_f8, &auStack_128[3], aiStack_f8, aiStack_e0, auStack_d4);
            func_0200b644(aiStack_ec, &auStack_128[3], aiStack_ec, aiStack_e0, auStack_d4);
            iVar6 = *(s32 *)(param_1 + 0xa8);
            if (iVar6 > aiStack_ec[0] + (s32)0xfffff333) {
                iVar8 = (aiStack_ec[0] + (s32)0xfffff333) - iVar6;
                *(s32 *)(param_1 + 0xa8) = iVar6 + (iVar8 / 10);
            } else if (iVar6 < aiStack_f8[0] + 0xccd) {
                iVar8 = (aiStack_f8[0] + 0xccd) - iVar6;
                *(s32 *)(param_1 + 0xa8) = iVar6 + (iVar8 / 10);
            }
        }
        if (*(s32 *)(param_1 + 0xe0) == 0 && func_ov004_0216e540() != 0 &&
            (iVar6 = func_020aaec4(iVar5, param_1 + 0xa8, 0xccd), iVar6 != 0)) {
            func_0208ec84(func_020bc3c4(), param_1 + 0xa8, &auStack_d4[3]);
            func_020a0b98(5, &auStack_d4[3]);
            *(param_1 + 0xa4) = 1;
        }
    }
    if (*(s32 *)(param_1 + 0xac) < 0x333) {
        *(s32 *)(param_1 + 0xac) = 0x333;
    }
    if (*(s32 *)(param_1 + 0xe0) != 0) {
        func_02028130(iVar4);
    }
    func_02067e34(aiStack_188, param_1 + 0xa8, param_1 + 0xcc);
    lVar1 = (s64)*(s32 *)(param_1 + 0xcc) * *(s32 *)(param_1 + 0xcc) +
            (s64)*(s32 *)(param_1 + 0xd0) * *(s32 *)(param_1 + 0xd0) +
            (s64)*(s32 *)(param_1 + 0xd4) * *(s32 *)(param_1 + 0xd4);
    lVar2 = *(s64 *)data_02126728;
    if (lVar1 >= lVar2) {
        iVar9 = func_02006a30(param_1 + 0xcc, param_1 + 0xcc);
    } else {
        iVar9 = 0;
    }
    if (iVar9 == 0) {
        *(T3 *)(param_1 + 0xcc) = *(T3 *)(*(u8 **)(data_02159444 + 0x1c) + 0x48);
    }
    uVar9 = *(u32 *)(data_02152cd8 + 0x68);
    uVar7 = *(u32 *)(data_02152cd8 + 0x5c);
    *(u32 *)(param_1 + 0xc0) = *(u32 *)(data_02152cd8 + 0x50);
    *(u32 *)(param_1 + 0xc4) = uVar7;
    *(u32 *)(param_1 + 0xc8) = uVar9;
    func_02067d04(param_1 + 0xc0, param_1 + 0xcc, param_1 + 0xb4);
    lVar1 = (s64)*(s32 *)(param_1 + 0xb4) * *(s32 *)(param_1 + 0xb4) +
            (s64)*(s32 *)(param_1 + 0xb8) * *(s32 *)(param_1 + 0xb8) +
            (s64)*(s32 *)(param_1 + 0xbc) * *(s32 *)(param_1 + 0xbc);
    if (lVar1 >= lVar2) {
        iVar9 = func_02006a30(param_1 + 0xb4, param_1 + 0xb4);
    } else {
        iVar9 = 0;
    }
    if (iVar9 == 0) {
        uVar9 = *(u32 *)(data_02152cd8 + 0x64);
        uVar7 = *(u32 *)(data_02152cd8 + 0x58);
        *(u32 *)(param_1 + 0xb4) = *(u32 *)(data_02152cd8 + 0x4c);
        *(u32 *)(param_1 + 0xb8) = uVar7;
        *(u32 *)(param_1 + 0xbc) = uVar9;
        *(s32 *)(param_1 + 0xb4) = -*(s32 *)(param_1 + 0xb4);
        *(s32 *)(param_1 + 0xb8) = -*(s32 *)(param_1 + 0xb8);
        *(s32 *)(param_1 + 0xbc) = -*(s32 *)(param_1 + 0xbc);
    }
    func_02067d04(param_1 + 0xcc, param_1 + 0xb4, param_1 + 0xc0);
    func_01ff832c(0x1000, param_1 + 0xcc, param_1 + 0xa8, aiStack_bc);
    func_020d3444(param_1 + 0x88, 0, aiStack_bc);
    if (iVar4 != 0) {
        u32 uVarB;
        s32 iVarA;
        s32 iVarB;

        uVarB = FXM(func_02028130(iVar4), 0x99a);
        {
            u8 *P = data_02159444;
            iVarA = *(s32 *)(P + 0x94);
            iVarB = *(s32 *)(P + 0x98);
        }
        uStack_b0[0] = *(s32 *)(data_02152cd8 + 0x4c);
        uStack_b0[1] = *(s32 *)(data_02152cd8 + 0x58);
        uStack_b0[2] = *(s32 *)(data_02152cd8 + 0x64);
        uStack_a4[0] = *(s32 *)(data_02152cd8 + 0x50);
        uStack_a4[1] = *(s32 *)(data_02152cd8 + 0x5c);
        uStack_a4[2] = *(s32 *)(data_02152cd8 + 0x68);
        uStack_b0[0] = FXM(uStack_b0[0], iVarA);
        uStack_b0[1] = FXM(uStack_b0[1], iVarA);
        uStack_b0[2] = FXM(uStack_b0[2], iVarA);
        uStack_a4[0] = FXM(uStack_a4[0], iVarB);
        uStack_a4[1] = FXM(uStack_a4[1], iVarB);
        uStack_a4[2] = FXM(uStack_a4[2], iVarB);
        func_02067e68(uStack_b0, uStack_a4, uStack_b0);
        if (*(u8 *)(param_1 + 0xa4) == 1 &&
            (s32)func_02067df0(uStack_b0, param_1 + 0xcc) < 0 &&
            (100 < iVarA * iVarA + iVarB * iVarB)) {
            *(s32 *)(param_1 + 0xa0) = FXM(*(s32 *)(param_1 + 0xa0), 0x400);
        } else {
            *(s32 *)(param_1 + 0xa0) = *(s32 *)(param_1 + 0xa0) + ((s32)uVarB >> 5);
            if (*(s32 *)(param_1 + 0xa0) > (s32)uVarB) {
                *(s32 *)(param_1 + 0xa0) = uVarB;
            }
        }
        *(s32 *)(param_1 + 0xd8) = *(s32 *)(param_1 + 0xa0) * 9;
        func_02027654(iVar4, aiMat);
        func_02027618(iVar4, aiMat + 3);
        func_02027604(iVar4, aiMat + 6);
        func_020275f0(iVar4, aiMat + 9);
        uVarB = func_02028130(iVar4);
        auStack_68[0] = FXM(uVarB, 0xd00);
        uVarB = func_02028130(iVar4);
        auStack_68[1] = FXM(uVarB, 0xb00);
        uVarB = func_02028130(iVar4);
        auStack_68[2] = FXM(uVarB, 0xe00);
        uVarB = func_02028130(iVar4);
        auStack_68[3] = FXM(uVarB, 0xb00);
        iVar13 = 0;
        do {
            auStack_58[iVar13] = FXM(auStack_68[iVar13], auStack_68[iVar13]);
            iVar13 = iVar13 + 1;
        } while (iVar13 < 4);
        iStack_194 = 0;
        iStack_18c = 0;
        iStack_14 = 0;
        do {
            uStack_3c[0] = iStack_18c;
            uStack_3c[1] = iStack_18c;
            uStack_3c[2] = iStack_18c;
            func_020d345c(param_1 + 0x88, iStack_194, aiStack_48);
            iVar14 = iStack_14;
            piVar14 = aiMat;
            do {
                func_02067e34(aiStack_48, piVar14, iStack_30);
                if (iStack_30[1] < 0) {
                    iStack_30[1] = -iStack_30[1];
                }
                if (iStack_30[2] < 0) {
                    iStack_30[2] = -iStack_30[2];
                }
                iVar6 = FXM(iStack_30[2], iStack_30[2]) +
                        (FXM(iStack_30[0], iStack_30[0]) + FXM(iStack_30[1], iStack_30[1]));
                if (iVar6 < (s32)auStack_58[iVar14]) {
                    uVar7 = func_0206782c(iVar6);
                    iVar6 = func_02067898(auStack_68[iVar14], uVar7);
                    func_01ff832c(iVar6, iStack_30, uStack_3c, uStack_3c);
                }
                iVar14 = iVar14 + 1;
                piVar14 = piVar14 + 3;
            } while (iVar14 < 4);
            uStack_3c[0] = FXM(uStack_3c[0], 0x200);
            uStack_3c[1] = FXM(uStack_3c[1], 0x200);
            uStack_3c[2] = FXM(uStack_3c[2], 0x200);
            func_020d3410(param_1 + 0x88, iStack_194, uStack_3c);
            iStack_194 = iStack_194 + 1;
        } while (iStack_194 < 8);
        if (*(s32 *)(param_1 + 0xe0) == 0 && func_ov004_0216e540() != 0) {
            func_0202819c(iVar4);
        }
    }
    func_020d3354(param_1 + 0x88);
    func_020d30d4(param_1 + 0x88, 0xfd7, 0x7b);
    func_020d2fac(param_1 + 0x88, 0x19a, 0xccd);
    func_020d2978(param_1 + 0x88);
    func_020d31e8(param_1 + 0x88, 0xcd);
    func_01ffe474(param_1);
}
