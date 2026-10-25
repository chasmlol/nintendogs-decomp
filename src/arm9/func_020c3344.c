#include "ctx.h"

extern s16 data_02159474;
extern s16 data_02159478;
extern s32 data_02142a0c;
extern s32 data_02142a08;
extern s32 data_02142a04;
extern s32 data_02159488;
extern s32 data_02159484;
extern s32 data_021429bc;
extern s32 data_021429c0;
extern s32 data_021429f4;
extern s16 data_02126868[];

u32 func_0206782c(s32 a);
s32 func_02067c30(s32 *p);
void func_02067e68(s32 *a, s32 *b, s32 *c);
s32 func_02067898(s32 a, s32 b);
void func_02006a30(s32 *a, s32 *b);
void func_02067d04(s32 *a, s32 *b, s32 *c);
void func_02067288(s32 *a, s32 *b, s32 a2, s32 a3);
void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
void func_01ff810c(s32 *a, s32 *b, s32 *c);

#define FX(x, y) ((s32)((((s64)(x)) * (s64)(y) + 0x800) >> 12))

void func_020c3344(u8 *param_1)
{
    u8 *pp;
    s32 *puVar11;
    s32 l78[3];
    s32 v1[3];
    s32 v2[3];
    s32 v3[3];
    s32 auStack_48[12];
    s64 pq;

    pp = param_1;
    puVar11 = *(s32 **)(pp + 0x214);
    *(s32 *)(pp + 0xb4) = *(s32 *)(pp + 0xb4) + puVar11[3];
    if (data_02159474 == 0) {
        s64 w5;
        s32 iVar6;
        s32 uVar5;
        s32 uVar9;
        s32 uVar10;
        s32 k5;
        s32 iVar7;
        s32 iVar8;
        s32 fx10;
        s32 t2;
        s32 t1;
        s32 t0;

        uVar5 = func_0206782c(FX(*(s32 *)(pp + 0xb0), *(s32 *)(pp + 0xb0)) +
                              FX(*(s32 *)(pp + 0xb8), *(s32 *)(pp + 0xb8)));
        if (uVar5 <= 0) {
            uVar5 = -uVar5;
        }
        uVar9 = FX(data_02142a0c, uVar5);
        if (uVar9 > data_02142a08) {
            uVar9 = data_02142a08;
        }
        uVar10 = *(s32 *)(pp + 0xd8);
        w5 = uVar5;
        fx10 = FX(uVar10, 0x1000);
        *(s32 *)(pp + 0xb4) = *(s32 *)(pp + 0xb4) + FX(fx10, uVar9);
        iVar6 = func_02067c30((s32 *)(pp + 0xb0));
        t2 = *(s32 *)(pp + 0xdc);
        k5 = (s32)(((s64)data_02142a04 * w5 + 0x800) >> 12);
        t1 = *(s32 *)(pp + 0xd8);
        t0 = *(s32 *)(pp + 0xd4);
        l78[0] = t0;
        l78[1] = t1;
        l78[2] = t2;
        l78[1] = 0;
        l78[0] = FX(l78[0], k5);
        l78[1] = FX(l78[1], k5);
        l78[2] = FX(t2, k5);
        func_02067e68((s32 *)(pp + 0xb0), l78, (s32 *)(pp + 0xb0));
        iVar7 = func_02067c30((s32 *)(pp + 0xb0));
        if (iVar7 > iVar6) {
            iVar8 = func_02067c30(l78);
            iVar6 = iVar6 - (iVar8 * 20) / 100;
            if (iVar6 < 0) {
                iVar6 = 0;
            }
            iVar7 = func_02067898(iVar6, iVar7);
            *(s32 *)(pp + 0xb0) = FX(*(s32 *)(pp + 0xb0), iVar7);
            *(s32 *)(pp + 0xb4) = FX(*(s32 *)(pp + 0xb4), iVar7);
            *(s32 *)(pp + 0xb8) = FX(*(s32 *)(pp + 0xb8), iVar7);
        }
    }
    if (data_02159478 == 0) {
        puVar11[0] = puVar11[0] + FX(-data_02159488, puVar11[0]);
        *(s32 *)(pp + 0xb0) = *(s32 *)(pp + 0xb0) + FX(-data_02159484, *(s32 *)(pp + 0xb0));
        *(s32 *)(pp + 0xb8) = *(s32 *)(pp + 0xb8) + FX(-data_02159484, *(s32 *)(pp + 0xb8));
        if (*(s32 *)(pp + 0xb4) < 0) {
            *(s32 *)(pp + 0xb4) = *(s32 *)(pp + 0xb4) + FX(-data_021429bc, *(s32 *)(pp + 0xb4));
        } else {
            *(s32 *)(pp + 0xb4) = *(s32 *)(pp + 0xb4) + FX(-data_021429c0, *(s32 *)(pp + 0xb4));
        }
    }
    func_02067e68((s32 *)(pp + 0xbc), (s32 *)(pp + 0xb0), (s32 *)(pp + 0xbc));
    {
        s32 t2 = *(s32 *)(pp + 0xdc);
        s32 t1 = *(s32 *)(pp + 0xd8);
        s32 t0 = *(s32 *)(pp + 0xd4);
        v1[0] = t0;
        v1[1] = t1;
        v1[2] = t2;
    }
    func_01ff832c(-data_021429f4, (s32 *)(pp + 0xb0), v1, v1);
    func_02006a30(v1, v1);
    {
        s32 iVar7;
        s32 iVar6;
        s32 v11;

        iVar7 = func_0206782c(FX(v1[0], v1[0]) + FX(v1[2], v1[2]));
        v11 = v1[1];
        if (iVar7 > 409) {
            iVar6 = func_02067898(v11, iVar7);
            if (iVar6 < puVar11[1]) {
                v1[1] = FX(iVar7, puVar11[1]);
                func_02006a30(v1, v1);
            }
        }
    }
    {
        s32 a2 = *(s32 *)(pp + 0xd0);
        s32 a1 = *(s32 *)(pp + 0xcc);
        s32 a0 = *(s32 *)(pp + 0xc8);
        v2[0] = a0;
        v2[1] = a1;
        v2[2] = a2;
    }
    {
        s32 b2 = *(s32 *)(pp + 0xe8);
        s32 b1 = *(s32 *)(pp + 0xe4);
        s32 b0 = *(s32 *)(pp + 0xe0);
        v3[0] = b0;
        v3[1] = b1;
        v3[2] = b2;
    }
    func_02067d04(v2, v1, v3);
    func_02006a30(v3, v3);
    func_02067d04(v1, v3, v2);
    func_02006a30(v2, v2);
    *(s32 *)(pp + 0xc8) = v2[0];
    *(s32 *)(pp + 0xcc) = v2[1];
    *(s32 *)(pp + 0xd0) = v2[2];
    *(s32 *)(pp + 0xd4) = v1[0];
    *(s32 *)(pp + 0xd8) = v1[1];
    *(s32 *)(pp + 0xdc) = v1[2];
    *(s32 *)(pp + 0xe0) = v3[0];
    *(s32 *)(pp + 0xe4) = v3[1];
    *(s32 *)(pp + 0xe8) = v3[2];
    {
        s32 iVar7;

        pq = (s64)puVar11[0] * 0x28be60db9391LL + ((s64)0x800 << 32);
        iVar7 = (s32)(((u32)(s32)(u32)(pq >> 32) << 4) >> 16) >> 4;
        func_02067288(auStack_48, v1, data_02126868[iVar7 * 2], data_02126868[iVar7 * 2 + 1]);
    }
    func_01ff810c((s32 *)(pp + 0xc8), auStack_48, (s32 *)(pp + 0xc8));
}
