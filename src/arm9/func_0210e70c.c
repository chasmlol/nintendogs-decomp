#include "ctx.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fc;
} Work;

typedef struct {
    u8 pad00[0xc838];
    s32 fc838;
    s32 fc83c;
} Mgr;

extern u8 data_02148610[];
extern u8 data_02148624[];
extern u8 data_02148638[];
extern u8 data_0214864c[];
extern u8 data_02148668[];
extern Mgr *data_0215be48;
extern u8 data_021486ac[];
extern u8 data_02148680[];
extern u8 data_02148694[];
extern u8 data_021486a8[];
extern void func_0210ea40(s32 a);
extern s32 func_0210e968(s32 a, u8 *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc76c(s32 a, u8 *b, u8 *c, u8 *d, u8 *e);
extern void func_02112798(s32 a, u16 b, s32 c);
extern void func_020fc8b0(s32 a, s32 b, s32 c);
extern void func_02101cf4(void);
extern s32 func_02101894(s32 a, s32 b, s32 c, u16 d, s32 e);
extern void *func_020fc938(s32 a, s32 b, s32 c, s32 d);
extern void func_02101be4(s32 a, s32 b);
extern void func_021017d4(s32 a, s32 b, s32 c);
extern void func_02101118(s32 a, s32 b, u16 c, u16 d, void *e);
extern void func_021092fc(void);
extern void func_02108e24(s32 a);

void func_0210e70c(Work *w)
{
    s32 j;

    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 i;

    w->f0 = 0;
    func_0210ea40(10);
    a = func_0210e968(10, data_02148610);
    b = func_0210e968(10, data_02148624);
    c = func_0210e968(10, data_02148638);
    d = func_0210e968(10, data_0214864c);
    e = func_0210e968(10, data_02148668);
    func_02113090(2, a);
    func_021130c4(2, b);
    func_0211305c(2, c);
    func_02112ed0(2, d);
    func_02112e74(2, e);
    data_0215be48->fc838 = 5;
    data_0215be48->fc83c = 1;
    func_020fc76c(10, data_02148680, data_02148694, data_021486a8, data_021486ac);
    for (j = 0; j < 7; j++) {
        func_02112798(2, j + 14, 0);
    }
    func_020fc8b0(2, 0, 3);
    func_02101cf4();
    for (i = 0; i < 7; i++) {
        u16 id;
        s32 h;
        void *q;
        id = i;
        h = func_02101894(0, d, b, id, 0);
        q = func_020fc938(2, 0, 4000, i);
        func_02101be4(h, 0);
        func_021017d4(0, h, 14);
        if (q != NULL) {
            func_02101118(0, c, id, id, q);
        }
    }
    w->fc = -1;
    func_021092fc();
    func_02108e24(0);
}
