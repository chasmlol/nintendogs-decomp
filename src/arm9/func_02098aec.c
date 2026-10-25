#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

typedef struct { u16 h; } H2;
typedef struct { s16 lo:12; u16 a:2; u16 b:2; } HW;

/* locals above the spill slot: sp+28 .. sp+107 */
typedef struct {
    HW rec;               /* +28 */
    vu16 w1;              /* +30 */
    u16 t32;              /* +32 */
    u16 t34;              /* +34 */
    u16 tA;               /* +36 */
    u16 tB;               /* +38 */
    u16 u40;              /* +40 */
    u16 u42;              /* +42 */
    u16 u44;              /* +44 */
    u16 u46;              /* +46 */
    s16 sStack_60;        /* +48 */
    s16 sStack_5e;        /* +50 */
    s16 sStack_5c;        /* +52 */
    s16 sStack_5a;        /* +54 */
    u32 auStack_58[3];    /* +56 */
    s16 asStack_4c[10];   /* +68 */
    s16 asStack_38[10];   /* +88 */
} Frame;

typedef struct {
    u8 pad0[24];
    u32 *p18;             /* +0x18 */
    u8 blk1c[64];         /* +0x1c */
    u32 *p5c;             /* +0x5c */
    u32 *p60[2];          /* +0x60 */
    u32 *p68;             /* +0x68 */
    u8 pad6c[4];
    u16 x70;
    u16 x72;
    s16 s74;              /* +0x74 */
    s16 s76;              /* +0x76 */
    u16 f78;              /* +0x78 */
    u16 x7a;              /* +0x7a */
    u32 p7c;
    u32 p80;
    u32 p84;
    u32 p88;
    u8 pad8c[8];
    u16 x94;
    s16 x96;
    u16 x98;
    u8 pad9a[6];
    u32 pa0;              /* +0xa0 */
} Obj;

extern u32 *data_02159030;
extern u16 data_0212f70c;
extern u32 *data_02159058;
extern u32 *data_02159060;
extern u8 data_0212f704;
extern u16 data_0212f714;
extern u16 data_0212f710;
extern u16 data_0212f718;
extern u16 data_0212f71c;

extern u32 func_02090cac(u32 a, u32 b, u32 c);
extern s16 *func_02090cdc(u32 a, u32 b);
extern void func_0206c7bc(u16 a, u32 b, u32 c);
extern void func_0206c7d4(u32 a, u32 b, u32 c);
extern s32 func_020905f8(u32 a, s32 b, s32 c, u32 d);
extern u32 func_0208fd90(s16 *a, u32 *b, u32 *c, H2 d, H2 e, s32 f, s32 g, s16 *h, s32 i, u32 j);
extern void func_0207c910(u32 a, u32 b, u32 c, u32 d);
extern void func_020a1a40(u32 a);

u32 func_02098aec(Obj *o)
{
    Frame F;
    u32 rv = 0;
    u16 *pB;
    s16 *psVar5;
    s16 *psVar9;
    u32 *piVar8;
    u32 *puVar9;
    u32 uVar7;
    u8 bVar1;
    u32 bVar12;
    u16 uVar2;
    u16 uVar3;
    s16 i;
    u32 *piVar11;
    u8 *pbVar10;

    if (o->x7a == 0xffff) {
        return rv;
    }
    o->p88 = *(u32 *)((u8 *)data_02159030 + o->x7a * 4 + 4);
    psVar5 = (s16 *)func_02090cac(o->p88, o->p7c, o->p80);
    piVar8 = o->p5c;
    F.w1 = 0xffff;
    func_0206c7bc(F.w1, piVar8[0], piVar8[4]);
    F.tA = data_0212f70c;
    pB = (u16 *)&F.tB;
    *pB = 0;
    F.rec = *(HW *)&F.tB;
    F.rec.lo = (0x50 - func_020905f8((u32)data_02159058, (s32)psVar5, 5, o->p84)) / 2;
    uVar7 = func_0208fd90((s16 *)&F.sStack_60, (u32 *)data_02159058, o->p5c, *(H2 *)&F.tA, *(H2 *)&F.rec, 1, 5, psVar5, 9, o->p84);
    o->pa0 = uVar7;
    o->f78 = 0;
    o->s74 = o->s76;
    if (o->s74 != 0) {
        o->f78 |= 1;
    } else {
        o->f78 |= 2;
    }
    o->x96 = -1;
    switch (F.sStack_60) {
    case 0:
        o->x94 = 0;
        o->x98 = F.sStack_5e;
        {
            u32 v1 = data_02159060[1];
            if (o->s74 != 0) {
                u32 t1 = v1 + 0xc;
                func_0207c910(0xb, 0x480, t1 + 0x480, 0x180);
            } else {
                u32 t1 = v1 + 0xc;
                func_0207c910(0x18, 0x480, t1 + 0x480, 0x180);
            }
        }
        break;
    case 3:
        o->x94 = 5;
        o->x98 = F.sStack_5e;
        o->x70 = 0;
        o->x72 = 0;
        {
            u32 *q0 = (u32 *)data_02159060[0];
            if (o->s74 != 0) {
                func_0207c910(7, 0x1800, q0[5] + 0x800, 0x800);
            } else {
                func_0207c910(0x14, 0x1800, q0[5] + 0x800, 0x800);
            }
        }
        {
            u32 v5 = data_02159060[5];
            if (o->s74 != 0) {
                func_0207c910(0xb, 0x480, v5 + 0xc, 0x180);
            } else {
                func_0207c910(0x18, 0x480, v5 + 0xc, 0x180);
            }
        }
        break;
    case 1:
        bVar12 = 0;
        if (o->s74 != 0) {
            bVar12 = ((*(vu16 *)0x04000304) & 0x8000) >> 15 == 1;
        } else {
            if (((*(vu16 *)0x04000304) & 0x8000) >> 15 == 0) {
                bVar12 = 1;
            }
        }
        o->x98 = 0;
        if (bVar12 == 0) {
            o->x94 = 1;
            {
                u32 *q0 = (u32 *)data_02159060[0];
                if (o->s74 != 0) {
                    func_0207c910(7, 0x1800, q0[5], 0x800);
                } else {
                    func_0207c910(0x14, 0x1800, q0[5], 0x800);
                }
            }
            {
                u32 v1 = data_02159060[1];
                if (o->s74 != 0) {
                    func_0207c910(0xb, 0, v1 + 0xc, 0x800);
                } else {
                    func_0207c910(0x18, 0, v1 + 0xc, 0x800);
                }
            }
            {
                u32 v3 = data_02159060[3];
                if (o->s74 != 0) {
                    u32 t3 = v3 + 0xc;
                    func_0207c910(0xb, 0x480, t3 + 0x480, 0x180);
                } else {
                    u32 t3 = v3 + 0xc;
                    func_0207c910(0x18, 0x480, t3 + 0x480, 0x180);
                }
            }
        } else {
            o->f78 |= 1;
            o->f78 |= 2;
            o->x94 = 2;
            func_0207c910(7, 0x1800, ((u32 *)data_02159060[0])[5], 0x800);
            func_0207c910(0x14, 0x1800, ((u32 *)data_02159060[0])[5], 0x800);
            {
                u32 v1 = data_02159060[1];
                if (o->s74 != 0) {
                    u32 t1 = v1 + 0xc;
                    func_0207c910(0xb, 0x480, t1 + 0x480, 0x180);
                } else {
                    u32 t1 = v1 + 0xc;
                    func_0207c910(0x18, 0x480, t1 + 0x480, 0x180);
                }
            }
            {
                u32 v3 = data_02159060[3];
                if (o->s74 == 0) {
                    func_0207c910(0xb, 0, v3 + 0xc, 0x800);
                } else {
                    func_0207c910(0x18, 0, v3 + 0xc, 0x800);
                }
            }
        }
        break;
    case 2:
        o->x98 = 0;
        {
            u32 *q0 = (u32 *)data_02159060[0];
            if (o->s74 != 0) {
                func_0207c910(7, 0x1800, q0[5], 0x800);
            } else {
                func_0207c910(0x14, 0x1800, q0[5], 0x800);
            }
        }
        {
            u32 v1 = data_02159060[1];
            if (o->s74 != 0) {
                func_0207c910(0xb, 0, v1 + 0xc, 0x800);
            } else {
                func_0207c910(0x18, 0, v1 + 0xc, 0x800);
            }
        }
        switch (F.sStack_5c) {
        case 1:
            o->x94 = 4;
            puVar9 = o->p68;
            psVar5 = func_02090cdc(o->p88, F.auStack_58[0]);
            uVar3 = data_0212f710;
            bVar1 = data_0212f704;
            uVar2 = data_0212f714;
            F.t32 = bVar1 | (bVar1 << 12 | bVar1 << 8 | bVar1 << 4);
            F.u40 = uVar3;
            F.u42 = uVar2;
            func_0206c7bc(F.t32, puVar9[0], puVar9[4]);
            func_0208fd90((s16 *)F.asStack_4c, (u32 *)data_02159058, puVar9, *(H2 *)&F.u40, *(H2 *)&F.u42, 1, 1, psVar5, 1, 0);
            puVar9 = o->p68;
            if (o->s74 != 0) {
                func_0207c910(7, 0x1c00, puVar9[0], puVar9[4]);
            } else {
                func_0207c910(0x14, 0x1c00, puVar9[0], puVar9[4]);
            }
            {
                u32 v2 = data_02159060[2];
                if (o->s74 != 0) {
                    u32 t2 = v2 + 0xc;
                    func_0207c910(0xb, 0x480, t2 + 0x180, 0x180);
                } else {
                    u32 t2 = v2 + 0xc;
                    func_0207c910(0x18, 0x480, t2 + 0x180, 0x180);
                }
            }
            break;
        case 2:
            pbVar10 = &data_0212f704;
            o->x94 = 3;
            i = 0;
            do {
                piVar11 = o->p60[i];
                psVar9 = func_02090cdc(o->p88, *(u32 *)((u8 *)&F.sStack_60 + i * 4 + 8));
                F.u44 = data_0212f718;
                F.u46 = data_0212f71c;
                bVar1 = *pbVar10;
                F.t34 = bVar1 | (bVar1 << 12 | bVar1 << 8 | bVar1 << 4);
                func_0206c7bc(F.t34, piVar11[0], piVar11[4]);
                func_0208fd90((s16 *)F.asStack_38, (u32 *)data_02159058, piVar11, *(H2 *)&F.u44, *(H2 *)&F.u46, 1, 1, psVar9, 1, 0);
                pbVar10 = pbVar10 + 1;
                i = (s16)(i + 1);
            } while (i < 2);
            puVar9 = o->p60[0];
            if (o->s74 != 0) {
                func_0207c910(7, 0x1c00, puVar9[0], puVar9[4]);
            } else {
                func_0207c910(0x14, 0x1c00, puVar9[0], puVar9[4]);
            }
            puVar9 = o->p60[1];
            if (o->s74 != 0) {
                func_0207c910(7, 0x1e00, puVar9[0], puVar9[4]);
            } else {
                func_0207c910(0x14, 0x1e00, puVar9[0], puVar9[4]);
            }
            {
                u32 v2 = data_02159060[2];
                if (o->s74 != 0) {
                    func_0207c910(0xb, 0x480, v2 + 0xc, 0x180);
                } else {
                    func_0207c910(0x18, 0x480, v2 + 0xc, 0x180);
                }
            }
            break;
        }
        break;
    }
    if (o->s74 != 0) {
        func_0207c910(7, 0, piVar8[0], piVar8[4]);
    } else {
        func_0207c910(0x14, 0, piVar8[0], piVar8[4]);
    }
    func_0206c7d4(o->p18[3] + 0x1c0, (u32)o->blk1c, 0x40);
    if (o->s74 != 0) {
        func_0207c910(0xf, 0x1c0, (u32)o->blk1c, 0x40);
    } else {
        func_0207c910(0x1f, 0x1c0, (u32)o->blk1c, 0x40);
    }
    switch (F.sStack_5a) {
    case 0:
        func_020a1a40(9);
        break;
    case 1:
        func_020a1a40(10);
        break;
    case 2:
        func_020a1a40(11);
        break;
    }
    o->s76 = 0;
    o->x7a = 0xffff;
    rv = 1;
    return rv;
}
