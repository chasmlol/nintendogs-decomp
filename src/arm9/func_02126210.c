#include "ctx.h"

typedef struct { s32 a; } Sub;
typedef struct { u16 v[3]; } H3;
typedef struct { s32 v[4]; } T4;

typedef struct {
    u8 pad0[0x68];
    s32 count;          /* 0x68 */
    s32 x6c;            /* 0x6c */
    s32 x70;            /* 0x70 */
    s32 x74;            /* 0x74 */
    s32 x78;            /* 0x78 */
    s32 x7c[4];         /* 0x7c */
    s16 list[50];       /* 0x8c */
    u8 padf0[0x1d18 - 0xf0];
    Sub sub;            /* 0x1d18 */
} Work;

typedef struct {
    u8 pad[0xbc];
    s32 xbc;
    u8 pad2[0xc838 - 0xc0];
    s32 xc838;
    s32 xc83c;
} Glbbe48;

extern u8 data_0214e4b8[];
extern u8 data_0214e4cc[];
extern u8 data_0214e4e0[];
extern u8 data_0214e4f4[];
extern u8 data_0214e510[];
extern u8 data_0214e528[];
extern u8 data_0214e540[];
extern u8 data_0214e558[];
extern u8 data_0214e578[];
extern Glbbe48 *data_0215be48;
extern u8 data_0214e474[];
extern u8 data_0214e46c[];

extern void func_0210ea40(s32 a);
extern s32 func_0210e968(s32 a, const void *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc76c(s32 a, const void *b, const void *c, const void *d, const void *e);
extern void func_02101cf4(void);
extern void func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
extern s32 *func_02092af0(s16 a);
extern void func_02126588(void);
extern void func_02121170(Work *w, void (*cb)(void), T4 *a, H3 *b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_02112978(s32 a, u16 b, s16 c, s32 d);
extern void func_02108fc8(void);
extern void func_02109084(void);
extern void func_02108e24(s32 a);
extern void func_020a1a40(s32 a);

void func_02126210(Work *w)
{
    s16 v;
    s32 acc;
    s32 k;
    Sub *sub;
    s32 h0, h1, h2, h3, h4;
    s32 i;
    s32 se;

    sub = &w->sub;
    func_0210ea40(67);
    h0 = func_0210e968(67, data_0214e4b8);
    h1 = func_0210e968(67, data_0214e4cc);
    h2 = func_0210e968(67, data_0214e4e0);
    h3 = func_0210e968(67, data_0214e4f4);
    h4 = func_0210e968(67, data_0214e510);
    func_02113090(2, h0);
    func_021130c4(2, h1);
    func_0211305c(2, h2);
    func_02112ed0(2, h3);
    func_02112e74(2, h4);
    func_020fc76c(67, data_0214e528, data_0214e540, data_0214e558, data_0214e578);
    data_0215be48->xc838 = 4;
    data_0215be48->xc83c = 0;
    func_02101cf4();
    for (i = 0; i < 6; i++) {
        func_02101894(0, h3, h1, i + 12, 0);
    }
    w->count = 0;
    for (i = 0; i < 50; i++) {
        s32 *p = func_02092af0(i);
        if (p[0] != 0 || p[1] != 0) {
            w->list[w->count++] = i;
        }
    }
    if (data_0215be48->xbc != 20) {
        sub->a = 0;
    }
    {
        H3 hw = *(H3 *)data_0214e46c;
        T4 tb = *(T4 *)data_0214e474;
        func_02121170(w, func_02126588, &tb, &hw, 3, 6, 40, w->count, sub->a);
    }
    w->x74 = -128;
    for (k = 0, acc = 0; k < 4; acc += 64, k++) {
        if (w->count > k) {
            w->x7c[k] = -256 - acc;
        } else {
            w->x7c[k] = 0;
        }
        v = w->x7c[k];
        func_02112978(2, k + 13, v, 0);
        func_02112978(2, k + 1, v, 0);
        func_02112978(2, k + 7, v, 0);
    }
    for (i = 0; i < 9; i++) {
        func_02112978(2, i + 18, 256, 0);
    }
    func_02108fc8();
    func_02109084();
    func_02108e24(0);
    se = -1;
    if (w->count == 1) {
        se = 71;
    } else if (w->count == 2) {
        se = 72;
    } else if (w->count == 3) {
        se = 73;
    } else if (w->count >= 4) {
        se = 74;
    }
    if (se > 0) {
        func_020a1a40(se);
    }
}
