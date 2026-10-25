#pragma avoid_byte strb
#include "ctx.h"

#define FX(a, b) ((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12))

extern s32 data_02152cd8[];
extern u8 *data_02159444;
extern s32 data_0214f460;
extern u32 *data_0214f464;

s32 func_02028130(u8 *p);
void func_02044acc(s32 *v);
void func_01ff832c(s32 k, s32 *a, s32 *b, s32 *c);
void func_020aafac(s32 x, s32 *a, s32 *b, s32 *c);
void func_0203942c(u8 *p);
void func_02037450(u8 *p, s32 n);
void func_02067e34(s32 *a, s32 *b, s32 *c);
s32 func_0206782c(s32 a);
s32 func_01ff8958(s32 a, s32 b);
s32 func_02067df0(s32 *a, s32 *b);
s32 func_0203567c(u8 *p);
void func_0203e8cc(u8 *p, s32 a, s32 b);
void func_0203e908(u8 *p, s32 v);
void func_0209bf30(s32 *p, s32 n);
s32 func_02026df0(u8 *p);
void func_0202fd7c(u8 *p);
void func_0202db24(u8 *p, s32 a);

typedef struct { s32 v[3]; } V3;

s32 func_ov003_02176714(u8 *p)
{
    s32 bVar2 = 0;
    s32 local_b8 = 0;
    s32 b4[3];
    s32 a8[3];
    s32 vA[3];
    s32 vB[3];
    s32 vC[3];
    s32 aiStack_78[3];
    s32 aiStack_6c[3];
    s32 L60[6];
    s32 v48[3];
    s32 v3c[3];
    s32 v30[3];
    s32 *puVar13;
    s32 uVar6, uVar12, iVar7, iVar8, iVar11, sum, pq;
    s64 lA, lB, lC;
    s32 bVar5;
    s32 *piVar9;

    uVar6 = func_02028130(p);
    uVar12 = FX(uVar6, 0x2ca6);
    func_02044acc(a8);
    vA[0] = data_02152cd8[20];
    vA[1] = data_02152cd8[23];
    vA[2] = data_02152cd8[26];
    vB[0] = data_02152cd8[21];
    vB[1] = data_02152cd8[24];
    vB[2] = data_02152cd8[27];
    pq = *(s32 *)(data_02159444 + 0x1c);
    *(V3 *)vC = *(V3 *)(pq + 0x3c);

    uVar6 = func_02028130(p);
    func_01ff832c(FX(uVar6, 0x5000), vB, vC, aiStack_78);
    uVar6 = func_02028130(p);
    func_01ff832c(FX(uVar6, 0xffffe000), vB, vC, aiStack_6c);
    L60[0] = 0;
    L60[2] = 0;
    L60[1] = 0x10000;
    func_01ff832c(-0x1000, a8, L60, L60);
    func_020aafac(data_0214f460, b4, aiStack_78, L60);
    func_020aafac(data_0214f460, (s32 *)(p + 0x3b4), aiStack_6c, L60);

    uVar6 = func_02028130(p);
    func_01ff832c(FX(uVar6, 0xffffc800), vB, b4, b4);
    uVar6 = func_02028130(p);
    func_01ff832c((s32)((((s64)1 - (s64)(s32)uVar6) * 0x800) >> 12), a8, b4, b4);
    uVar6 = func_02028130(p);
    func_01ff832c(FX(uVar6, 0xf000), vB, (s32 *)(p + 0x3b4), (s32 *)(p + 0x3b4));
    uVar6 = func_02028130(p);
    func_01ff832c(FX(uVar6, 0x1000), vA, (s32 *)(p + 0x3b4), (s32 *)(p + 0x3b4));
    uVar6 = func_02028130(p);
    func_01ff832c(FX(uVar6, 0xffffe800), a8, b4, (s32 *)(p + 0x26c));

    func_0203942c(p);
    func_02037450(p, 0x200);
    *(V3 *)(p + 0x390) = *(V3 *)b4;

    if (*(s32 *)(p + 0x48c) < 8) {
        iVar7 = *(s32 *)(p + 0x48c) << 9;
    } else {
        iVar7 = 0x1000;
    }
    func_02067e34(b4, (s32 *)(p + 0x2a0), &L60[3]);

    iVar8 = FX(uVar12, uVar12) - FX(L60[4], L60[4]);
    iVar11 = 0;
    if (iVar8 > 0) {
        iVar11 = func_0206782c(iVar8);
    }
    iVar8 = FX(L60[3], L60[3]) + FX(L60[5], L60[5]);
    if (iVar8 != 0) {
        iVar8 = func_0206782c(iVar8);
        if (iVar8 < iVar11) {
            iVar8 -= iVar11;
            uVar6 = -FX(iVar8, iVar7);
            puVar13 = a8;
        } else {
            iVar8 = func_01ff8958(iVar8 - iVar11, iVar8);
            uVar6 = FX(iVar8, iVar7);
            puVar13 = &L60[3];
        }
        if (*(s32 *)(p + 0x2a4) > 0) {
            uVar6 = FX(uVar6, 0xe0);
            *(s32 *)(p + 0x260) = FX(*(s32 *)(p + 0x260), 0xf00) + FX(puVar13[0], uVar6);
            *(s32 *)(p + 0x268) = FX(*(s32 *)(p + 0x268), 0xf00) + FX(puVar13[2], uVar6);
        } else {
            uVar6 = FX(uVar6, 0x80);
            *(s32 *)(p + 0x260) = *(s32 *)(p + 0x260) + FX(puVar13[0], uVar6);
            *(s32 *)(p + 0x268) = *(s32 *)(p + 0x268) + FX(puVar13[2], uVar6);
        }
    }

    if (*(s16 *)(p + 0xea) == 0x3a8) {
        func_02067e34(b4, (s32 *)(p + 0x2c4), v48);
        lA = (s64)v48[2] * v48[2] + 0x800;
        lB = (s64)v48[0] * v48[0] + 0x800;
        lC = (s64)v48[1] * v48[1] + 0x800;
        sum = (s32)(lA >> 12) + ((s32)(lB >> 12) + (s32)(lC >> 12));
        uVar6 = func_02028130(p);
        if (sum > FX(uVar6, 0x200)) {
            uVar12 = func_02067df0((s32 *)(p + 0x18c), v48);
            uVar6 = uVar12;
            if (uVar12 > 0) {
                bVar2 = 1;
            } else {
                uVar6 = 1;
                local_b8 = uVar6;
            }
        }
    }

    iVar7 = *(s16 *)(p + 0x152);
    if (iVar7 > 0x120) goto gt;
    if (iVar7 >= 0x120) goto lcg;
    if (iVar7 > 1) goto end;
    if (iVar7 < 0) goto end;
    if (iVar7 == 0) goto c0;
    if (iVar7 != 1) goto end;
    goto c1;
gt:
    if (iVar7 > 290) goto end;
    if (iVar7 < 289) goto end;
    if (iVar7 == 289) goto c289;
    if (iVar7 != 290) goto end;
    goto c290;
lcg:
    uVar6 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar6;
    if ((u16)((((u16)uVar6) * 40u) >> 16) == 0) goto end;
c0:
    func_0203e8cc(p, 0, 289);
    goto end;
c1:
    func_0203e8cc(p, 0, 290);
    goto end;
c289:
    if (func_0203567c(p) != 0) {
        func_0203e8cc(p, 0, 290);
    }
    goto end;
c290:
    if (func_0203567c(p) != 0) {
        func_0203e8cc(p, 0, 289);
    }
end:
    piVar9 = (s32 *)(p + 0x95c);
    *(s32 *)(p + 0x48c) = *(s32 *)(p + 0x48c) + 1;
    func_0209bf30(piVar9, 0x26);
    *(u8 *)(p + 0xb9) = 2;
    bVar5 = func_02026df0(p);
    if (bVar5) {
        func_0202fd7c(p);
        return 1;
    }
    if (*(s32 *)(p + 0x48c) > 300) {
        func_0202db24(p, 0);
        v3c[0] = data_02152cd8[19];
        v3c[1] = data_02152cd8[22];
        v3c[2] = data_02152cd8[25];
        uVar6 = func_02067df0(v3c, (s32 *)(p + 0x198));
        if ((s32)uVar6 < 0) {
            *(s32 *)(p + 0x488) = 0;
            func_0203e908(p, 0x20b);
        } else {
            *(s32 *)(p + 0x488) = 0;
            func_0203e908(p, 0x20c);
        }
        return 1;
    }
    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) {
        func_0202db24(p, 0);
        v30[0] = data_02152cd8[19];
        v30[1] = data_02152cd8[22];
        v30[2] = data_02152cd8[25];
        uVar6 = func_02067df0(v30, (s32 *)(p + 0x198));
        if ((s32)uVar6 < 0) {
            *(s32 *)(p + 0x488) = 0;
            func_0203e908(p, 0x20b);
        } else {
            *(s32 *)(p + 0x488) = 0;
            func_0203e908(p, 0x20c);
        }
        return 1;
    }
    if (bVar2) {
        func_0203e908(p, 0x3a9);
        return 1;
    }
    if (local_b8 == 0) {
        return 0;
    }
    func_0203e908(p, 0x3aa);
    return 1;
}
