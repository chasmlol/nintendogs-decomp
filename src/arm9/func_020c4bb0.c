#include "ctx.h"

extern s32 data_02142b44[];
extern u8 data_02159444[];

typedef struct {
    s32 v[3];
} Vec3;

void func_02044ca0(s32 a);
void func_02067e68(Vec3 *a, Vec3 *b, Vec3 *c);
void func_02067e34(Vec3 *a, Vec3 *b, Vec3 *c);
s32 func_0206782c(s32 a);
s32 func_02067898(s32 a, s32 b);

#define FX(x, y) ((s32)((((s64)(x)) * (s64)(y) + 0x800) >> 12))

void func_020c4bb0(u8 *param_1)
{
    Vec3 *piVar13;
    Vec3 *puVar12;
    Vec3 *piVar10;
    Vec3 *puVar11;
    Vec3 *piVar9;
    s32 iVar16;
    s32 iVar6;
    Vec3 aCopy[11];

    piVar13 = *(Vec3 **)(param_1 + 0x214);
    func_02044ca0(*(s16 *)(param_1 + 0x9c));
    puVar12 = piVar13 + 11;
    puVar12 = puVar12 + 1;
    piVar10 = piVar13 + 1;
    iVar16 = 1;
    puVar11 = puVar12;
    piVar9 = piVar10;
    do {
        piVar10[11].v[0] = FX(puVar12->v[0], 0x1000);
        piVar10[11].v[1] = FX(puVar12->v[1], 0x1000);
        piVar10[11].v[2] = FX(puVar12->v[2], 0x1000);
        piVar10[11].v[1] = piVar10[11].v[1] - 66;
        func_02067e68(piVar9, puVar11, piVar10);
        if (piVar10->v[1] < 0) {
            piVar10->v[1] = 0;
            if (piVar10[11].v[1] < 0) {
                piVar10[11].v[1] = 0;
            }
            piVar10[11].v[0] = FX(piVar10[11].v[0], 3686);
            piVar10[11].v[2] = FX(piVar10[11].v[2], 3686);
        }
        iVar16 = (iVar16 + 1) * 0x10000 >> 0x10;
        puVar12 = puVar12 + 1;
        piVar10 = piVar10 + 1;
        puVar11 = puVar11 + 1;
        piVar9 = piVar9 + 1;
    } while (iVar16 < 10);

    {
        Vec3 *t6 = piVar13;
        Vec3 *t5 = aCopy;
        iVar16 = 0;
        do {
            iVar16 = (iVar16 + 1) * 0x10000 >> 0x10;
            *t5 = *t6;
            t6++;
            t5++;
        } while (iVar16 < 11);
    }

    {
        Vec3 *q9;
        Vec3 *q10;
        s32 i3;
        s32 L3[3];
        i3 = 1;
        q10 = piVar13 + 1;
        do {
            q9 = piVar13 + (i3 - 1);
            func_02067e34(q10, q9, (Vec3 *)L3);
            {
                s32 x1 = *(volatile s32 *)&L3[1];
                s32 x2 = *(volatile s32 *)&L3[2];
                s32 x0 = *(volatile s32 *)&L3[0];
                s32 sa = FX(x2, x2);
                s32 sb = FX(x0, x0);
                s32 sc = FX(x1, x1);
                iVar6 = sa + (sb + sc);
            }
            if (iVar6 > 0x585e) {
                iVar6 = func_02067898(0x259a, func_0206782c(iVar6));
                L3[0] = FX(L3[0], iVar6);
                L3[1] = FX(L3[1], iVar6);
                L3[2] = FX(L3[2], iVar6);
                func_02067e68(q9, (Vec3 *)L3, q10);
            } else if (iVar6 < 0x4792) {
                iVar6 = func_02067898(0x21d7, func_0206782c(iVar6));
                L3[0] = FX(L3[0], iVar6);
                L3[1] = FX(L3[1], iVar6);
                L3[2] = FX(L3[2], iVar6);
                func_02067e68(q9, (Vec3 *)L3, q10);
            }
            i3 = (i3 + 1) * 0x10000 >> 0x10;
            q10 = q10 + 1;
        } while (i3 < 10);
    }

    {
        Vec3 *q9;
        Vec3 *q10;
        s32 i4;
        s32 L4[3];
        q10 = piVar13 + 9;
        i4 = 9;
        do {
            q9 = piVar13 + (i4 + 1);
            func_02067e34(q10, q9, (Vec3 *)L4);
            {
                s32 x1 = *(volatile s32 *)&L4[1];
                s32 x2 = *(volatile s32 *)&L4[2];
                s32 x0 = *(volatile s32 *)&L4[0];
                s32 sa = FX(x2, x2);
                s32 sb = FX(x0, x0);
                s32 sc = FX(x1, x1);
                iVar6 = sa + (sb + sc);
            }
            if (iVar6 > 0x585e) {
                iVar6 = func_02067898(0x259a, func_0206782c(iVar6));
                L4[0] = FX(L4[0], iVar6);
                L4[1] = FX(L4[1], iVar6);
                L4[2] = FX(L4[2], iVar6);
                func_02067e68(q9, (Vec3 *)L4, q10);
            } else if (iVar6 < 0x4792) {
                iVar6 = func_02067898(0x21d7, func_0206782c(iVar6));
                L4[0] = FX(L4[0], iVar6);
                L4[1] = FX(L4[1], iVar6);
                L4[2] = FX(L4[2], iVar6);
                func_02067e68(q9, (Vec3 *)L4, q10);
            }
            i4 = (s16)(i4 - 1);
            q10 = q10 - 1;
        } while (i4 >= 1);
    }

    {
        Vec3 *p6;
        Vec3 *p5;
        Vec3 *q10;
        Vec3 *q9;
        s32 i5;
        s32 k;
        s32 r2;
        s32 w;
        s32 V;
        s32 L5[3];
        q10 = piVar13 + 11;
        q10 = q10 + 1;
        q9 = q10;
        p5 = piVar13 + 1;
        p6 = aCopy + 1;
        i5 = 1;
        do {
            V = *(s32 *)((u8 *)*(s32 **)data_02159444 + 0x98);
            r2 = *(s32 *)((u8 *)*(s32 **)data_02159444 + 0x94);
            V = V <= 0 ? -V : V;
            w = (r2 <= 0 ? -r2 : r2) + 2;
            w += V;
            if (w > 16) {
                w = 16;
            }
            if (*(s16 *)(param_1 + 0x90) == 2) {
                k = data_02142b44[i5];
                k = FX(k, w << 6);
            } else {
                k = data_02142b44[i5];
                k = FX(k, w << 8);
            }
            func_02067e34(p5, p6, (Vec3 *)L5);
            L5[0] = FX(L5[0], k);
            L5[1] = FX(L5[1], k);
            L5[2] = FX(L5[2], k);
            func_02067e68(q9, (Vec3 *)L5, q10);
            p6 = p6 + 1;
            p5 = p5 + 1;
            q10 = q10 + 1;
            q9 = q9 + 1;
            i5 = (i5 + 1) * 0x10000 >> 0x10;
        } while (i5 < 10);
    }
}
