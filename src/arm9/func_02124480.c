#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_0214e214[];
extern u8 data_0214e230[];
extern u8 data_0214e24c[];
extern u8 data_0214e268[];
extern u8 data_0214e28c[];
extern u8 data_0214e2f0[];
extern u8 data_0214e2cc[];
extern u8 data_0214e2ac[];
extern u8 data_0214e2ec[];
extern u8 data_0214e310[];
extern u8 data_0214e330[];
extern u8 data_02159030[];

extern u64 func_0210ea40(s32 a, u8 *b);
extern s32 func_0210e968(s32 a, u8 *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc76c(s32 a, u8 *b, u8 *c, u8 *d, u8 *e);
extern s32 func_0209561c(void);
extern s32 func_020930a4(void);
extern void func_02112978(s32 a, s32 b, s16 c, s32 d);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_021128a8(s32 a, s32 b, s32 c);
extern void func_020fc610(s32 a, u8 *b, s32 c);
extern void func_020fc8b0(s32 a, s32 b, s32 c);
extern void func_02101cf4(void);
extern u16 *func_02090cac(s32 a, u8 *b, s32 c);
extern void func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02101280(s32 a, s32 b);
extern void func_02101118(s32 a, s32 b, s32 c, s32 d, u16 *e);
extern void func_02124b5c(u8 *p);
extern void func_021092fc(void);
extern void func_02108e24(s32 a);
extern s32 func_0211b3b0(s32 a);
extern s32 func_0211b2a0(s32 a);
extern void func_0206c7d4(s32 a, u8 *b, s32 c);
extern void func_0206c7bc(s32 a, u8 *b, s32 c);

typedef struct { s32 val; s32 flag; } Rec;
typedef struct { u16 a, b, c, d; } Ent;
typedef struct { u8 b[16]; } Slot;
typedef struct { Ent a[3]; Ent b[5]; } EntPair;

typedef struct {
    s32 pad0;
    s32 n4;
    s32 n8;
    s32 n0c;
    s32 n10;
    u8 pad14[8];
    s32 m1c;
    u8 pad20[4];
    Rec rec[5];
    union { EntPair s; Ent all[8]; } ent;
    u8 pad8c[0x60];
    Slot sa[3];
    Slot sb[5];
    u8 pad16c[0x1cf4 - 0x16c];
    s32 mode;
} Obj;

void func_02124480(Obj *p)
{
    u8 *puVar11;
    u64 t60;
    s32 iVar5, iVar6, iVar7, iVar8, iVar9;
    s32 i, v, k;
    u16 *puVar10;
    u8 *rec;
    s32 id;
    vu16 z40;
    vu16 z42;

    puVar11 = (u8 *)&p->mode;
    t60 = func_0210ea40(0x2e, puVar11);
    t60 = func_0210ea40(0x36, (u8 *)(u32)(t60 >> 32));
    func_0210ea40(0x37, (u8 *)(u32)(t60 >> 32));
    iVar5 = func_0210e968(0x2e, data_0214e214);
    iVar6 = func_0210e968(0x2e, data_0214e230);
    iVar7 = func_0210e968(0x2e, data_0214e24c);
    iVar8 = func_0210e968(0x2e, data_0214e268);
    iVar9 = func_0210e968(0x2e, data_0214e28c);
    func_02113090(2, iVar5);
    func_021130c4(2, iVar6);
    func_0211305c(2, iVar7);
    func_02112ed0(2, iVar8);
    func_02112e74(2, iVar9);
    func_020fc76c(0x2e, data_0214e2ac, data_0214e2cc, data_0214e2ec, data_0214e2f0);
    *(s32 *)((u8 *)data_0215be48 + 0xc838) = 5;
    *(s32 *)((u8 *)data_0215be48 + 0xc83c) = 1;
    p->n4 = func_0209561c();
    p->n8 = func_020930a4();
    p->n10 = -1;
    p->n0c = p->n10;

    i = 0;
    v = 128;
    do {
        p->rec[i].val = v;
        p->rec[i].flag = (p->n4 > (i + 1) / 2 || p->n8 > i) ? 0 : 1;
        i++;
        v += 64;
    } while (i < 5);

    for (i = 0; i < 8; i++) {
        u16 w = (u16)i;
        p->ent.all[i].a = w;
        p->ent.all[i].b = i + 8;
        p->ent.all[i].c = i + 16;
        p->ent.all[i].d = w;
    }

    for (i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            s32 w = -p->rec[i].val;
            if (w < -128) w = -128;
            else if (w > 128) w = 128;
            k = i / 2;
            func_02112978(2, p->ent.s.a[k].a, w, 0);
            func_02112978(2, p->ent.s.a[k].b, w, 0);
            func_02112978(2, p->ent.s.a[k].c, w, 0);
        }
        {
            s32 u = p->rec[i].val;
            if (u < -128) u = -128;
            else if (u > 128) u = 128;
            func_02112978(2, p->ent.s.b[i].a, u, 0);
            func_02112978(2, p->ent.s.b[i].b, u, 0);
            func_02112978(2, p->ent.s.b[i].c, u, 0);
        }
    }

    for (i = p->n4; i < 3; i++) {
        func_02112798(2, p->ent.s.a[i].a, 0);
        func_02112798(2, p->ent.s.a[i].b, 0);
        func_02112798(2, p->ent.s.a[i].c, 0);
    }
    for (i = p->n8; i < 5; i++) {
        func_02112798(2, p->ent.s.b[i].a, 0);
        func_02112798(2, p->ent.s.b[i].b, 0);
        func_02112798(2, p->ent.s.b[i].c, 0);
    }

    switch (*(s32 *)puVar11) {
    case 0:
    case 1:
        p->m1c = 0;
        func_021128a8(2, 0, 0);
        func_021128a8(2, 1, 0);
        func_021128a8(2, 2, 0);
        func_021128a8(2, 3, 2);
        func_021128a8(2, 4, 2);
        func_021128a8(2, 5, 2);
        func_021128a8(2, 6, 2);
        func_021128a8(2, 7, 2);
        func_020fc610(0x2e, data_0214e310, 2);
        break;
    case 2:
        p->m1c = 1;
        func_021128a8(2, 0, 2);
        func_021128a8(2, 1, 2);
        func_021128a8(2, 2, 2);
        func_021128a8(2, 3, 0);
        func_021128a8(2, 4, 0);
        func_021128a8(2, 5, 0);
        func_021128a8(2, 6, 0);
        func_021128a8(2, 7, 0);
        func_020fc610(0x2e, data_0214e330, 2);
        break;
    case 3:
        p->m1c = 2;
        break;
    }
    func_020fc8b0(2, 1, 8);
    func_02101cf4();
    puVar10 = func_02090cac(*(s32 *)(*(u8 **)data_02159030 + 0x24), (u8 *)0x251d, 1);
    func_02101894(0, iVar8, iVar6, 0x18, 0);
    func_02101280(0, 0x18);
    func_02101118(0, iVar7, 0x18, 8, puVar10);
    puVar10 = func_02090cac(*(s32 *)(*(u8 **)data_02159030 + 0x24), (u8 *)0x251d, 0);
    func_02101894(0, iVar8, iVar6, 0x19, 0);
    func_02101280(0, 0x19);
    func_02101118(0, iVar7, 0x19, 9, puVar10);
    func_02124b5c((u8 *)p);
    func_021092fc();
    func_02108e24(0);

    *(s32 *)((u8 *)data_0215be48 + 0x1e30) = 3;
    rec = (u8 *)&p->sa[0];
    for (i = 0; i < 3; i++) {
        id = func_0211b3b0(i);
        if (id != 0) {
            func_0206c7d4(id + 120, rec, 16);
        } else {
            z40 = 0;
            func_0206c7bc(z40, rec, 16);
        }
        rec += 16;
    }
    {
        u8 *q;
        s32 j;
        s32 jd;
        q = (u8 *)&p->sb[0];
        for (j = 0; j < 5; j++) {
            jd = func_0211b2a0(j);
            if (jd != 0) {
                func_0206c7d4(jd + 120, q, 16);
            } else {
                z42 = 0;
                func_0206c7bc(z42, q, 16);
            }
            q += 16;
        }
    }
}
