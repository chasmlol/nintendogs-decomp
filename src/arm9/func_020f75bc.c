#include "ctx.h"

typedef struct { s16 x, y; } Ofs;
typedef struct { s32 a, b, c; } Ent;
typedef struct { s32 x, y, z; } Vec;

typedef struct {
    s32 f0;         /* 0x00 */
    s32 f4;         /* 0x04 */
    s32 f8;         /* 0x08 */
    s32 fc;         /* 0x0c */
    s32 f10;        /* 0x10 */
    Ofs ofs[8];     /* 0x14 */
    u8 pad34[0x40]; /* 0x34 */
    u8 sub74[0x58]; /* 0x74 */
    u16 sel;        /* 0xcc */
    u16 padce;
    Ent ent[8];     /* 0xd0 */
    u8 pad130[0x1ca0 - 0x130];
    s32 f1ca0;      /* 0x1ca0 */
} Work;

extern u8 data_02146364[];
extern u8 data_02146374[];
extern u8 data_02146384[];
extern u8 data_021463a0[];
extern u8 data_021463b0[];
extern u8 data_02133218[];
extern u8 data_02133214[];
extern u8 data_0213321c[];
extern u8 data_02133224[];
extern u8 data_02133234[];
extern u8 *data_02159030;
extern u8 *data_0215be48;
extern u8 data_02146410[];
extern u8 data_021463c8[];
extern u8 data_021463e0[];
extern u8 data_021463f8[];

extern void func_02094294(void *p);
extern void func_0210ea40(s32 a);
extern void *func_0210e938(void);
extern void func_0208b730(void *a, s16 b, Ent *c);
extern s32 func_0210e968(s32 a, u8 *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_02101cf4(void);
extern void func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02101280(s32 a, s32 b);
extern s32 func_02090cac(s32 a, s32 b, s32 c);
extern void func_02101118(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_020fc76c(s32 a, u8 *b, u8 *c, u8 *d, u8 *e);
extern void func_0210f14c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern s32 func_02112bf0(s32 a, s32 b);
extern s32 func_02112bc0(s32 a, s32 b);
extern void func_02112798(s32 a, u16 b, s32 c);
extern void func_02112a50(s32 a, s32 b, s16 c, s16 d);
extern void func_02108fc8(void);
extern void func_020a1a40(s32 a);

void func_020f75bc(Work *p)
{
    s32 i;
    s32 j;
    s32 a1, a2, a3, a4, a5;
    Vec v;
    u32 sel;

    p->f8 = 0;
    p->f0 = 0;
    p->f4 = p->f0;
    p->fc = 409600;
    p->f10 = 0;
    func_02094294(p->sub74);
    p->f1ca0 = -2;
    func_0210ea40(20);

    for (i = 1; i <= 8; i++) {
        func_0208b730(func_0210e938(), i, (Ent *)((u8 *)p->ent + (i - 1) * 12));
    }

    a1 = func_0210e968(20, data_02146364);
    a2 = func_0210e968(20, data_02146374);
    a3 = func_0210e968(20, data_02146384);
    a4 = func_0210e968(20, data_021463a0);
    a5 = func_0210e968(20, data_021463b0);
    func_02113090(2, a1);
    func_021130c4(2, a2);
    func_02112ed0(2, a3);
    func_02112e74(2, a5);
    func_02101cf4();

    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 2; i++) {
        func_02101894(v.x, a3, a2, data_02133218[i], v.x);
        func_02101280(v.y, data_02133218[i]);
        func_02101118(v.z, a4, data_02133218[i], data_02133214[i],
                      func_02090cac(*(s32 *)(data_02159030 + 0x30), 201, i));
    }

    *(s32 *)(data_0215be48 + 0xc838) = 4;
    *(s32 *)(data_0215be48 + 0xc83c) = 0;
    func_020fc76c(20, data_021463c8, data_021463e0, data_021463f8, data_02146410);

    for (i = 0; i < 8; i++) {
        func_0210f14c(2, data_0213321c[i], i + 6, p->ent[i].a, p->ent[i].b, p->ent[i].c, 0, 0);
    }

    for (i = 0; i < 8; i++) {
        p->ofs[i].x = func_02112bf0(2, data_02133224[i]) - func_02112bf0(2, 20);
        p->ofs[i].y = func_02112bc0(2, data_02133224[i]) - func_02112bc0(2, 20);
    }

    for (i = 0; i < 21; i++) {
        func_02112798(2, i, 0);
    }
    func_02108fc8();

    for (j = 0; j < 20; j++) {
        func_02112798(2, data_02133234[j], 1);
        func_02112a50(2, data_02133234[j], 0, p->fc >> 12);
    }

    sel = p->sel;
    if (sel >= 1 && sel <= 8) {
        func_02112798(2, 20, 1);
        func_02112a50(2, 20, p->ofs[sel - 1].x, p->ofs[sel - 1].y + (p->fc >> 12));
        func_02112a50(2, data_0213321c[sel - 1], 2, (p->fc >> 12) + 2);
    } else {
        func_02112798(2, 20, 0);
    }
    func_020a1a40(48);
}
