#include "ctx.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fc;
    s32 f10;
    s32 f14;
    s32 f18[2][2];
    u8 pad28[0xb8 - 0x28];
    u8 fb8[0x1ca4 - 0xb8];
    s32 f1ca4;
} Work;

typedef struct {
    u8 pad00[0x30];
    s32 f30;
} Res;

typedef struct {
    u8 pad00[0xc838];
    s32 fc838;
    s32 fc83c;
} Mgr;

extern u8 data_02146458[];
extern u8 data_02146464[];
extern u8 data_02146470[];
extern u8 data_0214648c[];
extern u8 data_02146498[];
extern u8 data_0213324c[];
extern u8 data_02133248[];
extern Mgr *data_0215be48;
extern Res *data_02159030;
extern u8 data_021464fc[];
extern u8 data_021464b4[];
extern u8 data_021464cc[];
extern u8 data_021464e4[];
extern void func_02094294(void *a);
extern void func_0210ea40(s32 a);
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
extern void func_02112798(s32 a, u16 b, s32 c);
extern void func_02108fc8(void);
extern void func_020f85d0(Work *w);
extern void func_020a1a40(s32 a);

void func_020f81bc(Work *w)
{
    s32 i;
    s32 j;
    s32 k;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 *state;

    w->f8 = 0;
    w->f0 = 0;
    w->f4 = w->f0;
    w->fc = 0x64000;
    w->f10 = 0;
    w->f14 = 0x1e000;
    state = &w->f1ca4;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            w->f18[i][j] = 0;
        }
    }
    func_02094294(w->fb8);
    *state = -2;
    func_0210ea40(21);
    a = func_0210e968(21, data_02146458);
    b = func_0210e968(21, data_02146464);
    c = func_0210e968(21, data_02146470);
    d = func_0210e968(21, data_0214648c);
    e = func_0210e968(21, data_02146498);
    func_02113090(2, a);
    func_021130c4(2, b);
    func_02112ed0(2, c);
    func_02112e74(2, e);
    func_02101cf4();
    for (k = 0; k < 2; k++) {
        func_02101894(0, c, b, data_0213324c[k], 0);
        func_02101280(0, data_0213324c[k]);
        func_02101118(0, d, data_0213324c[k], data_02133248[k], func_02090cac(data_02159030->f30, 201, k));
    }
    func_02101894(0, c, b, 30, 0);
    func_02101894(0, c, b, 31, 0);
    func_02101280(0, 30);
    func_02101280(0, 31);
    func_02101118(0, d, 30, 2, func_02090cac(data_02159030->f30, 0x2f76, 0));
    func_02101118(0, d, 31, 3, func_02090cac(data_02159030->f30, 0x2f77, 0));
    data_0215be48->fc838 = 4;
    data_0215be48->fc83c = 0;
    func_020fc76c(21, data_021464b4, data_021464cc, data_021464e4, data_021464fc);
    for (i = 0; i < 32; i++) {
        func_02112798(2, i, 0);
    }
    func_02108fc8();
    func_020f85d0(w);
    func_020a1a40(51);
}
