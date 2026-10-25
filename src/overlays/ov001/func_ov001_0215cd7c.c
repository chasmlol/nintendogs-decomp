#include "ctx.h"

typedef struct { u32 w[6]; } T6;

typedef struct {
    s32 a;
    u16 b;
    u16 c;
    u16 d;
    u16 e;
    u16 f;
} Ent;

typedef struct {
    s16 mode;
    s16 f2;
    s16 f4;
    s32 f8;
    s32 fc;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f2c;
    s32 f30;
    u8 big[0xc000];
    Ent ents[16];
    s32 x134;
    s32 x138;
    s32 x13c;
    s32 x140;
    s32 x144[2];
    s32 x14c[2];
    s32 x154[2];
    s32 res[4];
    s32 objs[14];
    s32 objs2[14];
    s32 x1dc;
    s32 heap;
} Work;

extern Work *data_ov001_0215e260;
#define G data_ov001_0215e260
extern u8 data_ov001_0215dfbc[];
extern u8 data_ov001_0215dfd0[][14];
extern u8 data_ov001_0215e024[][14];
extern T6 data_ov001_0215e0c8;
extern u8 data_ov001_0215e0e0[];
extern u8 data_ov001_0215e0f0[];
extern u8 data_ov001_0215e100[];
extern u8 data_ov001_0215e118[];
extern u8 data_ov001_0215e128[];
extern u8 data_ov001_0215e13c[];
extern u8 data_ov001_0215e150[];
extern u8 data_ov001_0215e164[];
extern u8 data_ov001_0215e17c[];
extern u8 data_ov001_0215e190[];
extern u8 data_ov001_0215e1a8[];
extern u8 data_ov001_0215e1bc[];

extern Work *func_020038b8(s32 a, s32 b);
extern void func_ov001_0215d70c(void);
extern s32 func_ov001_0215de94(s32 a, void *b, s32 c);
extern void func_020737d8(s32 a, u32 *b);
extern void func_02073768(s32 a, u32 *b);
extern void func_02073828(s32 a, u32 *b);
extern s32 func_02085cb8(s32 a);
extern s32 func_02085cc0(s32 a);
extern void func_0207c910(s32 a, s32 b, s32 c, s32 d);
extern void func_ov001_0215d808(void);
extern s32 func_02003860(s32 a, s32 b, s32 c);
extern void func_0205f050(u8 *buf, s32 n, void *fmt, s32 a, s32 b, s32 c);
extern void func_0207dc3c(s32 a, s32 b);
extern void func_0206cb00(s32 a, s32 b);
extern void func_0207dbe0(s32 a, s32 b);
extern void func_021092fc(void);

void func_ov001_0215cd7c(s32 heap, s32 type)
{
    s32 k;
    s32 j;
    Work *w;
    s32 i;
    s32 mode;
    s32 a4;
    s32 a5;
    s32 a6;
    s32 a7;
    s32 a8;
    s32 a9;
    s32 r10v;
    s32 iVar3;
    s32 res;
    u32 pv[6];
    u8 buf[64];

    w = func_020038b8(heap, sizeof(Work));
    G = w;
    w->heap = heap;
    if (type == 101) {
        G->mode = 0;
    } else if (type == 102) {
        G->mode = 1;
    } else if (type == 103) {
        G->mode = 2;
    } else if (type == 104) {
        G->mode = 3;
    } else if (type == 105) {
        G->mode = 4;
    } else if (type == 106) {
        G->mode = 5;
    }
    G->f8 = 0;
    G->f2 = 0;
    G->f4 = G->f2;
    G->fc = 0;
    G->f10 = G->fc;
    G->f14 = 0;
    G->f18 = -1;
    G->f1c = 0;
    G->f20 = 0x10000;
    G->f24 = -0x28000;
    if (G->fc < data_ov001_0215dfbc[G->mode] - 1) {
        G->f28 = 0;
    } else {
        G->f28 = 0x28000;
    }
    G->f2c = 0;
    G->f30 = 0;
    for (i = 0; i < 16; i++) {
        G->ents[i].a = 1;
        G->ents[i].b = 2;
        G->ents[i].c = 0;
        G->ents[i].d = 0;
        G->ents[i].e = 0;
        G->ents[i].f = 0;
    }
    func_ov001_0215d70c();

    G->res[0] = func_ov001_0215de94(G->heap, data_ov001_0215e0e0, 0);
    G->res[1] = func_ov001_0215de94(G->heap, data_ov001_0215e0f0, 0);
    G->res[2] = func_ov001_0215de94(G->heap, data_ov001_0215e100, 0);
    G->res[3] = func_ov001_0215de94(G->heap, data_ov001_0215e118, 0);
    a8 = func_ov001_0215de94(G->heap, data_ov001_0215e128, 0);
    a7 = func_ov001_0215de94(G->heap, data_ov001_0215e13c, 0);
    a6 = func_ov001_0215de94(G->heap, data_ov001_0215e150, 0);
    a5 = func_ov001_0215de94(G->heap, data_ov001_0215e164, 0);
    a4 = func_ov001_0215de94(G->heap, data_ov001_0215e17c, 0);
    a9 = func_ov001_0215de94(G->heap, data_ov001_0215e190, 0);

    func_020737d8(a8, &pv[0]);
    func_020737d8(a7, &pv[1]);
    func_02073768(a6, &pv[2]);
    func_02073768(a5, &pv[3]);
    func_02073828(a4, &pv[4]);
    func_02073828(a9, &pv[5]);
    r10v = func_02085cb8(G->res[2]);
    iVar3 = func_02085cc0(G->res[2]);
    func_0207c910(0x23, 0, iVar3, r10v);
    func_0207c910(0x19, 0, pv[4] + 12, *(s32 *)(pv[4] + 8));
    func_0207c910(0x1a, 0, pv[5] + 12, *(s32 *)(pv[5] + 8));
    func_0207c910(0x15, 0, *(s32 *)(pv[2] + 0x14), *(s32 *)(pv[2] + 0x10));
    func_0207c910(0x1e, 0, *(s32 *)(pv[0] + 0xc), 0x1c0);
    func_0207c910(0x1f, 0, *(s32 *)(pv[1] + 0xc), 0x1c0);
    func_ov001_0215d808();

    for (i = 0; i < 14; i++) {
        G->objs[i] = 0;
        G->objs2[i] = 0;
    }

    for (k = 0; k < data_ov001_0215dfbc[G->mode]; k++) {
        for (j = 0; j < data_ov001_0215dfd0[G->mode][k]; j++) {
            if (*(G->objs + data_ov001_0215e024[G->mode][k] + j) == 0) {
                *(G->objs + data_ov001_0215e024[G->mode][k] + j) = func_02003860(G->heap, 0x10000, 4);
            }
        }
    }

    mode = G->mode;
    for (k = 0; k < data_ov001_0215dfbc[mode]; k++) {
        for (j = 0; j < data_ov001_0215dfd0[mode][k]; j++) {
            if (*(G->objs2 + data_ov001_0215e024[mode][k] + j) == 0) {
                T6 names = data_ov001_0215e0c8;
                func_0205f050(buf, 64, data_ov001_0215e1a8, names.w[mode], data_ov001_0215e024[mode][k] + 1, j + 1);
                func_0207dc3c(G->heap, 0x4e544248);
                res = func_ov001_0215de94(G->heap, buf, 1);
                func_0206cb00(res, *(G->objs + data_ov001_0215e024[G->mode][k] + j));
                func_0207dbe0(G->heap, 0x4e544248);
                func_0205f050(buf, 64, data_ov001_0215e1bc, names.w[G->mode], data_ov001_0215e024[G->mode][k] + 1, j + 1);
                *(G->objs2 + data_ov001_0215e024[G->mode][k] + j) = func_ov001_0215de94(G->heap, buf, 1);
            }
            mode = G->mode;
        }
    }

    G->x134 = 0;
    G->x138 = G->x134;
    G->x13c = 0;
    G->x140 = 0;
    for (i = 0; i < 2; i++) {
        G->x144[i] = 0;
        G->x14c[i] = 0;
        G->x154[i] = -1;
    }
    G->x1dc = 0;
    func_0207c910(0xc, 0, G->objs[data_ov001_0215e024[G->mode][0]], 0xc000);
    func_0207c910(0xf, 0, G->objs2[data_ov001_0215e024[G->mode][0]], 0x100);
    func_021092fc();
}
