#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s32 x, y, z; } VecFx32;
typedef struct { s32 a, b; } Pair;
typedef struct { s8 v[3]; } S8x3;
typedef struct { u8 v[7]; } U8x7;
typedef struct { u8 v[4][2]; } U8x4x2;

typedef struct {
    s32 a;
    s32 b;
} Sub;

typedef struct {
    s32 state;          /* 0x00 */
    s32 prev;           /* 0x04 */
    s32 x08;            /* 0x08 */
    s32 x0c;            /* 0x0c */
    s32 x10;            /* 0x10 */
    s32 x14;            /* 0x14 */
    s32 x18;            /* 0x18 */
    Pair pr[4];         /* 0x1c */
    s32 x3c;            /* 0x3c */
    s32 x40;            /* 0x40 */
    s32 x44;            /* 0x44 */
    s32 x48;            /* 0x48 */
    s32 x4c;            /* 0x4c */
    u8 pad50[0x40];     /* 0x50 */
    u8 o90[0x28];       /* 0x90 */
    u8 ob8[0x28];       /* 0xb8 */
    u8 oe0[0x28];       /* 0xe0 */
    s32 x108[4];        /* 0x108 */
    s32 x118;           /* 0x118 */
    s32 x11c;           /* 0x11c */
    u8 x120[8];         /* 0x120 */
    s32 x128;           /* 0x128 */
    u16 s12c[11];       /* 0x12c */
    u16 s142[13];       /* 0x142 */
    u16 s15c[13];       /* 0x15c */
    u16 pad176;         /* 0x176 */
    s16 x178;           /* 0x178 */
    u8 b17a;            /* 0x17a */
    u8 b17b;            /* 0x17b */
    VecFx32 v17c;       /* 0x17c */
    u8 pad188[0x1c98 - 0x188];
    Sub sub;            /* 0x1c98 */
} Work;

typedef struct {
    u8 pad[0x30];
    s32 x30;
} Glb30;

typedef struct {
    u8 pad[0x88];
    VecFx32 pos;
} Obj88;

typedef struct {
    u8 pad[0xbc];
    s32 xbc;
    u8 pad2[0xc838 - 0xc0];
    s32 xc838;
    s32 xc83c;
} Glbbe48;

extern u8 data_02146258[];
extern u8 data_02146268[];
extern u8 data_02146278[];
extern u8 data_02146294[];
extern u8 data_021462a4[];
extern u8 data_021461d8[];
extern u8 data_021461e4[];
extern u8 data_021461dc[];
extern Glb30 *data_02159030;
extern u8 data_021331e0[];
extern u8 data_021461ec[];
extern Glbbe48 *data_0215be48;
extern u8 data_02146304[];
extern u8 data_021462bc[];
extern u8 data_021462d4[];
extern u8 data_021462ec[];
extern u8 data_02146318[];

extern void func_02094294(void *a);
extern void func_0210ea40(s32 a);
extern s32 func_0210e938(void);
extern void func_0208b730(s32 p, s16 a, VecFx32 *b);
extern s32 func_0210e968(s32 a, const void *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_02101cf4(void);
extern s32 func_01ffdb08(s16 a);
extern void func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02101280(s32 a, s32 b);
extern u16 *func_02090cac(s32 a, s32 b, s32 c);
extern void func_02101118(s32 a, s32 b, s32 c, s32 d, const u16 *e);
extern u16 *func_020280f4(s32 a);
extern void func_0206c7d4(const void *src, void *dst, u32 size);
extern s32 func_020939ac(s32 a);
extern void func_0210f14c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern s32 func_02027708(s32 a);
extern Obj88 *func_02044ccc(s32 a);
extern s32 func_02112854(s32 a, s32 b);
extern void func_020fc084(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern s32 func_02112bc0(s32 a, s32 b);
extern s32 func_02112bf0(s32 a, s32 b);
extern void func_02112798(s32 a, u16 b, s32 c);
extern void func_020fc76c(s32 a, const void *b, const void *c, const void *d, const void *e);
extern void func_02108fc8(void);
extern void func_02108e24(s32 a);
extern void func_020a1a40(s32 a);
extern void func_020fc610(s32 a, const void *b, s32 c);
extern void func_02003d90(s32 a);
extern void func_020f6c28(Work *p);

void func_020f6410(Work *w)
{
    s32 h0, h1, h2, h3, h4;
    Sub *sub;
    s32 k;
    S8x3 sel;
    U8x7 ids;
    U8x7 pos;
    U8x4x2 tab;
    u16 buf[28];
    s32 i;
    s32 n;
    s32 m;

    sub = &w->sub;
    w->x08 = 0;
    func_02094294(w->x120);
    w->sub.a = -2;
    func_0210ea40(19);
    func_0208b730(func_0210e938(), w->x178, &w->v17c);
    h0 = func_0210e968(19, data_02146258);
    h1 = func_0210e968(19, data_02146268);
    h2 = func_0210e968(19, data_02146278);
    h3 = func_0210e968(19, data_02146294);
    h4 = func_0210e968(19, data_021462a4);
    func_02113090(2, h0);
    func_021130c4(2, h1);
    func_02112ed0(2, h2);
    func_02112e74(2, h4);
    func_02101cf4();

    sel = *(S8x3 *)data_021461d8;
    n = 0;
    ids = *(U8x7 *)data_021461e4;
    pos = *(U8x7 *)data_021461dc;
    for (i = 0; i < 3; i++) {
        if (func_01ffdb08(i) != 0) {
            sel.v[n] = i;
            n++;
        }
    }

    for (k = 0; k < 7; k++) {
        func_02101894(0, h2, h1, ids.v[k], 0);
        func_02101280(0, ids.v[k]);
        switch (ids.v[k]) {
        case 0x10:
        case 0x11:
        case 0x12:
            if (sel.v[k] != -1) {
                func_02101118(0, h3, ids.v[k], pos.v[k], func_020280f4(func_01ffdb08(sel.v[k])));
            }
            break;
        case 0x13:
            func_02101118(0, h3, ids.v[k], pos.v[k], w->s12c);
            break;
        case 0x14:
            func_0206c7d4(w->s142, buf, 26);
            buf[13] = 10;
            func_0206c7d4(w->s15c, buf + 14, 26);
            buf[27] = 0;
            if (buf[14] == 0) {
                buf[13] = 0;
            }
            func_02101118(0, h3, ids.v[k], pos.v[k], buf);
            break;
        case 0x15: {
            s32 md = data_02159030->x30;
            s32 id = func_020939ac(w->x128);
            func_02101118(0, h3, ids.v[k], pos.v[k], func_02090cac(md, id + 0x2f45, 0));
            break;
        }
        case 0x3a:
            func_02101118(0, h3, ids.v[k], pos.v[k], func_02090cac(data_02159030->x30, 0x2f78, 0));
            break;
        }
    }

    func_0210f14c(2, 7, 10, w->v17c.x, w->v17c.y, w->v17c.z, 0, 0);
    m = 0;
    for (i = 0; i < 3; i++) {
        s32 r = func_01ffdb08(i);
        if (r != 0) {
            Obj88 *o = func_02044ccc(func_02027708(r));
            s32 t = data_021331e0[m];
            s32 u = func_02112854(2, t);
            func_0210f14c(2, t, u, o->pos.x, o->pos.y, o->pos.z, 0, 0);
            m++;
        }
    }

    func_020fc084(w->o90, 2, 45, 22, 2, w->b17a, 1, 0);
    func_020fc084(w->ob8, 2, 45, 25, 2, w->b17b, 1, 0);
    func_020fc084(w->oe0, 2, 33, 27, 5, w->x128, 1, 0);

    tab = *(U8x4x2 *)data_021461ec;
    for (i = 0; i < 4; i++) {
        w->x108[i] = (func_02112bc0(2, tab.v[i][1]) - func_02112bc0(2, tab.v[i][0])) << 12;
    }
    w->x118 = (func_02112bf0(2, 65) - func_02112bf0(2, 7)) << 12;
    w->x11c = (func_02112bc0(2, 65) - func_02112bc0(2, 7)) << 12;

    for (i = 0; i < 67; i++) {
        func_02112798(2, i, 0);
    }

    data_0215be48->xc838 = 4;
    data_0215be48->xc83c = 0;
    func_020fc76c(19, data_021462bc, data_021462d4, data_021462ec, data_02146304);

    if (data_0215be48->xbc != 15) {
        if (sub->b != 0) {
            w->state = 0;
            w->x0c = 0;
            w->x10 = 0x10000;
            w->x14 = 0;
            w->x18 = 0;
            for (i = 0; i < 4; i++) {
                if (i == 0) {
                    w->pr[i].a = -0x100000;
                } else {
                    w->pr[i].a = 0;
                }
                w->pr[i].b = 0;
            }
            w->x3c = 0;
            w->x40 = 0;
            w->x44 = -0x100000;
            w->x4c = 1;
            func_02003d90(20);
        } else {
            w->state = 6;
            w->x0c = 0;
            w->x10 = 0x10000;
            w->x14 = w->x118;
            w->x18 = w->x11c;
            for (i = 0; i < 4; i++) {
                w->pr[i].a = 0;
                w->pr[i].b = w->x108[i];
            }
            w->x3c = 0x50000;
            w->x40 = 0x3c000;
            w->x44 = 0;
            w->x4c = 0;
            func_020fc610(19, data_02146318, 1);
            func_02003d90(20);
        }
    } else {
        w->state = 0;
        w->x0c = 0xb4000;
        w->x10 = 0;
        w->x14 = 0;
        w->x18 = 0xb4000;
        for (i = 0; i < 4; i++) {
            if (i == 0) {
                w->pr[i].a = -0x100000;
            } else {
                w->pr[i].a = 0;
            }
            w->pr[i].b = 0xb4000;
        }
        w->x3c = 0xb4000;
        w->x40 = 0x3c000;
        w->x48 = 0;
        w->x44 = -0x100000;
        w->x4c = 1;
        func_02108fc8();
        func_02108e24(0);
        func_020a1a40(45);
    }
    w->prev = w->state;
    func_020f6c28(w);
}
