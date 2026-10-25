#include "ctx.h"

typedef struct {
    s16 f0;
    s16 id;     /* 0x02 */
    s16 type;   /* 0x04 */
    u16 name;   /* 0x06 */
    u32 icon;   /* 0x08 */
    u16 count;  /* 0x0c */
    u8 pad[0x12];
} Entry; /* 0x20 */

typedef struct {
    s32 a, b, c;
} Item; /* 0x0c */

typedef struct {
    u8 pad0[0x68];
    Entry entries[70];          /* 0x68 */
    u8 pad1[0x940 - 0x68 - 70 * 0x20];
    Item items[70];             /* 0x940 */
} Sub;

typedef struct {
    u8 pad0[0xc4];
    Sub sub;                    /* 0xc4 */
    u8 pad1[0x1d84 - 0xc4 - sizeof(Sub)];
    s32 state;                  /* 0x1d84 */
    s32 state2;                 /* 0x1d88 */
    u8 pad2[0x232c - 0x1d8c];
    u32 font;                   /* 0x232c */
} Work;

typedef struct {
    u8 pad[6];
    s16 id;
} Obj;

extern Work *data_0215be48;
extern u16 *func_020fc938(u32 a, u32 b, u32 c, u32 d);
extern void func_02101280(u32 a, u32 b);
extern void func_02101118(u32 a, u32 b, u32 c, u32 d, u16 *e);
extern u32 func_0211c294(Entry *e, s32 st);
extern void func_0211bd8c(u16 *buf, u32 n, u32 v);
extern void func_02100fac(u32 a, u32 b, u32 c, u32 d, u16 *e, u32 f);
extern s32 func_0209561c(void);
extern Obj *func_0211b3b0(s32 i);
extern u32 func_02112e14(u32 a);
extern u32 func_02112854(u32 a, u32 b);
extern void func_0210f14c(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f, u32 g, u32 h);
extern void func_0210f2c0(u32 a, u32 b, u32 c, u32 d, u32 e);

void func_0211fc68(s32 x, s32 idx)
{
    Sub *s = &data_0215be48->sub;
    s32 *state = &data_0215be48->state;
    u16 buf[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    u16 str[4];
    s32 n;
    Entry *e;
    u16 *name;
    u32 x10;
    u32 x27, x32, x0, x5, x6;
    u32 x15;

    x27 = (u16)(x + 27);
    x10 = (u16)(x + 10);
    x15 = (u16)(x + 15);
    x32 = (u16)(x + 32);
    x0 = (u16)x;
    x5 = (u16)(x + 5);
    x6 = (u16)(x + 6);
    n = idx;
    if (idx < 0 || idx >= 70) {
        n = 0;
    }
    e = &s->entries[n];

    switch (*state) {
    case 3:
    case 4:
        name = func_020fc938(2, 1, e->name, 0);
        break;
    default:
        name = func_020fc938(2, 0, e->name, 0);
        break;
    }
    func_02101280(0, x10);
    func_02101118(0, data_0215be48->font, x10, x0, name);
    func_0211bd8c(buf, 12, func_0211c294(e, *state));
    func_02101280(0, x15);
    func_02100fac(0, data_0215be48->font, x15, x5, buf, 7);
    if (*state == 2) {
        s32 cnt = e->count;
        if (state[1] == 4) {
            s32 i;
            for (i = 0; i < func_0209561c(); i++) {
                Obj *o = func_0211b3b0(i);
                if (o != NULL && e->id == o->id) {
                    cnt--;
                }
            }
        }
        str[0] = 'x';
        str[1] = cnt / 10 % 10 + '0';
        str[2] = cnt % 10 + '0';
        str[3] = 0;
        func_02100fac(0, func_02112e14(2), x10, x6, str, 7);
    }
    if (*state == 3) {
        return;
    }
    if (*state == 4) {
        func_0210f14c(2, x32, func_02112854(2, x32), s->items[idx].a, s->items[idx].b, s->items[idx].c, 1, 1);
        return;
    }
    {
        u32 k = 0;
        switch (e->type) {
        case 0: k = 1; break;
        case 1: k = 2; break;
        case 2: k = 3; break;
        case 3: k = 4; break;
        case 4: k = 5; break;
        case 5: k = 6; break;
        case 6: k = 7; break;
        }
        func_0210f2c0(k, 2, x27, e->icon, x + 8);
    }
}
