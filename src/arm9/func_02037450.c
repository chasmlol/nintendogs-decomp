#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_0213b6fc[];
extern u32 data_0213b718[];
extern u32 data_0213b734[];
extern u32 data_0213b6b4[];
extern u32 *data_0214f464;
extern u8 *data_0215942c;
extern u32 data_0213b6fc[];

extern void func_02039008(u8 *p, u8 *q, u32 *a, u32 *b, u32 *c);
extern void func_02038b10(u8 *p, u32 *a, u32 *b, u32 *c, s32 d, s32 e, s32 f, u32 g);
extern s32 func_0203292c(u8 *p);
extern void func_0203945c(u8 *p, u32 *a, s32 b);
extern void func_02055760();
extern void func_02037dac(u8 *p, u32 a);

/* byte store through swpb with the old value going to r0 */

/* byte store through swpb with the old value in the value register */

s32 func_02037450(u8 *P0, u32 p20)
{
    u8 *P = P0;
    u32 p2 = p20;
    s32 iVar12;
    s32 r4;
    s32 iVar10;
    s32 iVar9;
    s32 v;
    s32 a2;
    s32 state;
    s32 r12;
    s32 k;
    s64 lv;
    u8 *rp;
    u32 local_38[6];

    r4 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    v = *(s16 *)(P + 0x148);
    if (v < 17) goto L34;
    if (v <= 22) r4 = 1;
L34:
    iVar10 = *(s32 *)(P + 0x26c) - *(s32 *)(P + 0x2a0);
    iVar9 = *(s32 *)(P + 0x274) - *(s32 *)(P + 0x2a8);
    lv = (s64)iVar10 * iVar10;
    lv = lv + 0x800;
    k = (s32)((u32)((u64)lv >> 12));
    lv = (s64)iVar9 * iVar9 + 0x800;
    iVar12 = k + (s32)((u32)((u64)lv >> 12));
    state = *(s8 *)(P + 0xa0);
    if (state != 0) goto L8e4;
    goto L94;
L8e4:
    if (state != 1) goto L910;
    goto L16c;

L94:
    func_02039008(P, P + 0x278, &local_38[0], &local_38[1], &local_38[2]);
    if (r4 == 0) goto Ld0;
    *(u32 *)(P + 0x240) = 0;
    *(u32 *)(P + 0x244) = 0x111;
    *(u32 *)(P + 0x24c) = 0x99c;
Ld0:
    {
        s32 x0 = *(s32 *)(*(u8 **)(P + 0x9e8) + 0xc);
        if (iVar12 <= x0 * 2) goto L130;
    }
    *(vu8 *)(P + 0xa0) = 1;
    *(vu8 *)(P + 0xa1) = 5;
    v = *(s16 *)(P + 0x148);
    if (v < 17) goto L910;
    if (v > 22) goto L910;
    *(s16 *)(P + 0x152) = v;
    ((void (*)(u8 *))data_0213b6b4[*(s16 *)(P + 0x148) - 17])(P);
    goto L910;

L130:
    a2 = *(s8 *)(P + 0xa2);
    if (a2 > 1) goto L15c;
    if (r4 != 0) { *(s16 *)(P + 0x152) = 0; } else { *(s16 *)(P + 0x152) = *(s16 *)(P + 0x148); }
    goto L910;
L15c:
    *(s16 *)(P + 0x152) = a2 + 0x260;
    goto L910;

L16c:
    func_02038b10(P, &local_38[0], &local_38[1], &local_38[2], iVar10, iVar9, iVar12, p2);
    if (r4 == 0) goto L778;
    {
        s32 idx;
        s32 xt;
        s32 t1;
        s32 t2;
        s32 t3;
        if (*(u16 *)data_0215942c == 3) idx = 6;
        else idx = *(s8 *)(P + 0x8b);
        xt = *(s32 *)(*(u8 **)(P + 0x9e8) + 0xc);
        {
            s32 ent1 = (s32)data_0213b6fc[idx];
            lv = (s64)ent1 * xt + 0x800;
        }
        t1 = (s32)((u32)((u64)lv >> 12));
        if (iVar12 >= t1) goto L2bc;

        /* bVar5 gate, value 0x11 */
        {
            s32 bA;
            u8 *XA;
            s32 xA;
            s64 lA;
            bA = 0;
            if (*(s16 *)(P + 0x162) != *(s16 *)(P + 0x152)) goto B5f_1;
            XA = *(u8 **)(P + 0x74);
            if (XA == 0) goto B5f_1;
            if (*(s8 *)(P + 0xbe) <= 0) goto B234_1;
            if (*(s16 *)(P + 0x14e) < *(s16 *)(XA + 0x18) - 1) goto B5f_1;
            bA = 1;
            goto B248_1;
        B234_1:
            if (*(s16 *)(P + 0x14e) > 1) goto B5f_1;
            bA = 1;
            goto B248_1;
        B5f_1:
            bA = 0;
        B248_1:
            if (bA == 0) goto F1_1;
            *(s16 *)(P + 0x152) = 0x11;
        F1_1:
            xA = *(s32 *)(*(u8 **)(P + 0x9e8) + 0xc);
            lA = (s64)xA * 86 + 0x800;
            *(u32 *)(P + 0x240) = (u32)((u64)lA >> 12);
            *(u32 *)(P + 0x244) = 0x111;
            *(u32 *)(P + 0x24c) = 0xb36;
            *(u32 *)(P + 0x250) = *(u32 *)(P + 0x240);
            *(u32 *)(P + 0x254) = *(u32 *)(P + 0x244);
            *(u32 *)(P + 0x258) = *(u32 *)(P + 0x24c);
        }
        goto L778;

    L2bc:
        {
            s32 ent2 = (s32)data_0213b718[idx];
            lv = (s64)ent2 * xt + 0x800;
        }
        t2 = (s32)((u32)((u64)lv >> 12));
        if (iVar12 >= t2) goto L494;
        v = *(s16 *)(P + 0x148);
        if (v != 17) goto L3c8;

        /* bVar5 gate, value 0x11 (second copy) */
        {
            s32 bB;
            u8 *XB;
            s32 xB;
            s64 lB;
            bB = 0;
            if (*(s16 *)(P + 0x162) != *(s16 *)(P + 0x152)) goto B5f_2;
            XB = *(u8 **)(P + 0x74);
            if (XB == 0) goto B5f_2;
            if (*(s8 *)(P + 0xbe) <= 0) goto B234_2;
            if (*(s16 *)(P + 0x14e) < *(s16 *)(XB + 0x18) - 1) goto B5f_2;
            bB = 1;
            goto B248_2;
        B234_2:
            if (*(s16 *)(P + 0x14e) > 1) goto B5f_2;
            bB = 1;
            goto B248_2;
        B5f_2:
            bB = 0;
        B248_2:
            if (bB == 0) goto F1_2;
            *(s16 *)(P + 0x152) = 0x11;
        F1_2:
            xB = *(s32 *)(*(u8 **)(P + 0x9e8) + 0xc);
            lB = (s64)xB * 86 + 0x800;
            *(u32 *)(P + 0x240) = (u32)((u64)lB >> 12);
            *(u32 *)(P + 0x244) = 0x111;
            *(u32 *)(P + 0x24c) = 0xb36;
            *(u32 *)(P + 0x250) = *(u32 *)(P + 0x240);
            *(u32 *)(P + 0x254) = *(u32 *)(P + 0x244);
            *(u32 *)(P + 0x258) = *(u32 *)(P + 0x24c);
        }
        goto L778;

    L3c8:
        /* bVar5 gate, value 0x12 */
        {
            s32 bC;
            u8 *XC;
            s32 xC;
            s64 lC;
            bC = 0;
            if (*(s16 *)(P + 0x162) != *(s16 *)(P + 0x152)) goto B5f_3;
            XC = *(u8 **)(P + 0x74);
            if (XC == 0) goto B5f_3;
            if (*(s8 *)(P + 0xbe) <= 0) goto B234_3;
            if (*(s16 *)(P + 0x14e) < *(s16 *)(XC + 0x18) - 1) goto B5f_3;
            bC = 1;
            goto B248_3;
        B234_3:
            if (*(s16 *)(P + 0x14e) > 1) goto B5f_3;
            bC = 1;
            goto B248_3;
        B5f_3:
            bC = 0;
        B248_3:
            if (bC == 0) goto F1_3;
            *(s16 *)(P + 0x152) = 0x12;
        F1_3:
            xC = *(s32 *)(*(u8 **)(P + 0x9e8) + 0xc);
            lC = (s64)xC * 109 + 0x800;
            *(u32 *)(P + 0x240) = (u32)((u64)lC >> 12);
            *(u32 *)(P + 0x244) = 448;
            *(u32 *)(P + 0x24c) = 3280;
            *(u32 *)(P + 0x250) = *(u32 *)(P + 0x240);
            *(u32 *)(P + 0x254) = *(u32 *)(P + 0x244);
            *(u32 *)(P + 0x258) = *(u32 *)(P + 0x24c);
        }
        goto L778;

    L494:
        {
            s32 ent3 = (s32)data_0213b734[idx];
            lv = (s64)ent3 * xt + 0x800;
        }
        t3 = (s32)((u32)((u64)lv >> 12));
        if (iVar12 >= t3) goto L744;
        v = *(s16 *)(P + 0x148);
        if (v == 17) goto L4e0;
        if (v != 18) goto L678;
        goto L5ac;

    L4e0:
        /* bVar5 gate, value 0x11 (third copy) */
        {
            s32 bD;
            u8 *XD;
            s32 xD;
            s64 lD;
            bD = 0;
            if (*(s16 *)(P + 0x162) != *(s16 *)(P + 0x152)) goto B5f_4;
            XD = *(u8 **)(P + 0x74);
            if (XD == 0) goto B5f_4;
            if (*(s8 *)(P + 0xbe) <= 0) goto B234_4;
            if (*(s16 *)(P + 0x14e) < *(s16 *)(XD + 0x18) - 1) goto B5f_4;
            bD = 1;
            goto B248_4;
        B234_4:
            if (*(s16 *)(P + 0x14e) > 1) goto B5f_4;
            bD = 1;
            goto B248_4;
        B5f_4:
            bD = 0;
        B248_4:
            if (bD == 0) goto F1_4;
            *(s16 *)(P + 0x152) = 0x11;
        F1_4:
            xD = *(s32 *)(*(u8 **)(P + 0x9e8) + 0xc);
            lD = (s64)xD * 86 + 0x800;
            *(u32 *)(P + 0x240) = (u32)((u64)lD >> 12);
            *(u32 *)(P + 0x244) = 0x111;
            *(u32 *)(P + 0x24c) = 0xb36;
            *(u32 *)(P + 0x250) = *(u32 *)(P + 0x240);
            *(u32 *)(P + 0x254) = *(u32 *)(P + 0x244);
            *(u32 *)(P + 0x258) = *(u32 *)(P + 0x24c);
        }
        goto L778;

    L5ac:
        /* bVar5 gate, value 0x12 (second copy) */
        {
            s32 bE;
            u8 *XE;
            s32 xE;
            s64 lE;
            bE = 0;
            if (*(s16 *)(P + 0x162) != *(s16 *)(P + 0x152)) goto B5f_5;
            XE = *(u8 **)(P + 0x74);
            if (XE == 0) goto B5f_5;
            if (*(s8 *)(P + 0xbe) <= 0) goto B234_5;
            if (*(s16 *)(P + 0x14e) < *(s16 *)(XE + 0x18) - 1) goto B5f_5;
            bE = 1;
            goto B248_5;
        B234_5:
            if (*(s16 *)(P + 0x14e) > 1) goto B5f_5;
            bE = 1;
            goto B248_5;
        B5f_5:
            bE = 0;
        B248_5:
            if (bE == 0) goto F1_5;
            *(s16 *)(P + 0x152) = 0x12;
        F1_5:
            xE = *(s32 *)(*(u8 **)(P + 0x9e8) + 0xc);
            lE = (s64)xE * 109 + 0x800;
            *(u32 *)(P + 0x240) = (u32)((u64)lE >> 12);
            *(u32 *)(P + 0x244) = 448;
            *(u32 *)(P + 0x24c) = 3280;
            *(u32 *)(P + 0x250) = *(u32 *)(P + 0x240);
            *(u32 *)(P + 0x254) = *(u32 *)(P + 0x244);
            *(u32 *)(P + 0x258) = *(u32 *)(P + 0x24c);
        }
        goto L778;

    L678:
        /* bVar5 gate, value 0x13 */
        {
            s32 bF;
            u8 *XF;
            s32 xF;
            s64 lF;
            bF = 0;
            if (*(s16 *)(P + 0x162) != *(s16 *)(P + 0x152)) goto B5f_6;
            XF = *(u8 **)(P + 0x74);
            if (XF == 0) goto B5f_6;
            if (*(s8 *)(P + 0xbe) <= 0) goto B234_6;
            if (*(s16 *)(P + 0x14e) < *(s16 *)(XF + 0x18) - 1) goto B5f_6;
            bF = 1;
            goto B248_6;
        B234_6:
            if (*(s16 *)(P + 0x14e) > 1) goto B5f_6;
            bF = 1;
            goto B248_6;
        B5f_6:
            bF = 0;
        B248_6:
            if (bF == 0) goto F1_6;
            *(s16 *)(P + 0x152) = 0x13;
        F1_6:
            xF = *(s32 *)(*(u8 **)(P + 0x9e8) + 0xc);
            lF = (s64)xF * 186 + 0x800;
            *(u32 *)(P + 0x240) = (u32)((u64)lF >> 12);
            *(u32 *)(P + 0x244) = 384;
            *(u32 *)(P + 0x24c) = 3280;
            *(u32 *)(P + 0x250) = *(u32 *)(P + 0x240);
            *(u32 *)(P + 0x254) = *(u32 *)(P + 0x244);
            *(u32 *)(P + 0x258) = *(u32 *)(P + 0x24c);
        }
        goto L778;
    }

L744:
    v = *(s16 *)(P + 0x148);
    if (v < 17) goto L778;
    if (v > 22) goto L778;
    *(s16 *)(P + 0x152) = v;
    ((void (*)(u8 *))data_0213b6b4[*(s16 *)(P + 0x148) - 17])(P);

L778:
    {
        s32 x7 = *(s32 *)(*(u8 **)(P + 0x9e8) + 0xc);
        if (iVar12 >= x7) goto L7e0;
    }
    *(vu8 *)(P + 0xa0) = 0;
    *(vu8 *)(P + 0xa1) = 5;
    if (r4 == 0) goto L910;
    *(s16 *)(P + 0x152) = 0;
    *(u32 *)(P + 0x240) = 0;
    *(u32 *)(P + 0x244) = 0x111;
    *(u32 *)(P + 0x24c) = 0x99c;
    *(u32 *)(0x250 + P) = *(u32 *)(P + 0x240);
    *(u32 *)(P + 0x254) = *(u32 *)(P + 0x244);
    *(u32 *)(P + 0x258) = *(u32 *)(P + 0x24c);
    goto L910;

L7e0:
    if ((p2 & 0x80) == 0) goto L910;
    if (r4 == 0) goto L910;
    r12 = func_0203292c(P);
    if (r12 < 0) goto L808;
    if (r12 < 3) goto L810;
L808:
    r4 = 0;
    goto L820;
L810:
    {
        u8 *Yq = (u8 *)data_0214f464;
        rp = *(u8 **)(Yq + r12 * 4 + 0x54);
        r4 = (s32)rp;
    }
L820:
    if (r4 == 0) goto L910;
    {
        s32 d1;
        s32 d2;
        s32 fa;
        s32 fb;
        s32 sum;
        s32 kk;
        u32 nv;
        u16 v3;
        u8 *Y;
        s64 lf;
        *(T3 *)&local_38[3] = *(T3 *)(((u8 *)r4) + 0x2a0);
        d1 = (s32)local_38[3] - *(s32 *)(P + 0x2a0);
        d2 = (s32)local_38[5] - *(s32 *)(P + 0x2a8);
        lf = (s64)d1 * *(s32 *)(P + 0x1a4) + 0x800;
        fa = (s32)((u32)((u64)lf >> 12));
        lf = (s64)d2 * *(s32 *)(P + 0x1ac) + 0x800;
        fb = (s32)((u32)((u64)lf >> 12));
        sum = fa + fb;
        if (sum < 0) goto L910;
        Y = (u8 *)data_0214f464;
        nv = *(u32 *)Y * 0x10dcd + 1;
        *(u32 *)Y = nv;
        v3 = (nv << 16) >> 30;
        if (v3 == 0) goto L8d4;
        func_0203945c(P, &local_38[3], r12);
        goto L910;
    L8d4:
        kk = *(s8 *)((u8 *)data_0214f464 + 4);
        if (kk == 0) goto L8f0;
        if (kk != 2) goto L910;
        goto L900;
    L8f0:
        func_02055760(P, r4, 0);
        goto L910;
    L900:
        func_02055760(P, r4, 10);
    }
L910:
    if ((p2 & 0x100) == 0) goto L924;
    func_02037dac(P, local_38[0]);
L924:
    return iVar12;
}
