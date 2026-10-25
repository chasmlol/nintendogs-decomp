#include "ctx.h"
#pragma opt_strength_reduction off

typedef struct {
    s32 v;
    s32 z;
} Pair;

typedef struct {
    s32 a0;
    s32 a4;
    s32 a8;
    s32 pad0c;
    Pair pr[3];
    s32 t28[3];
    s32 k34;
    s32 k38;
    s32 k3c;
    s32 t40[3];
    s32 k4c;
    s32 pad50[15];
    s32 z8c[4];
    s32 pad9c[6];
    s32 kb4;
} Obj;

extern s32 data_021332fc[];
extern u8 data_0214683c[];
extern u8 data_02146850[];
extern u8 data_02146864[];
extern u8 data_02146884[];
extern u8 data_02146898[];
extern u8 data_021332ec[];
extern u8 data_021332e0[];
extern u8 *data_0215be48;
extern u8 data_021468fc[];
extern u8 data_021468b4[];
extern u8 data_021468cc[];
extern u8 data_021468e4[];
extern u8 data_021332d0[];
extern u8 data_02133308[];

extern void func_0210ea40(s32 a);
extern s32 func_0210e968(s32 a, void *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_02101cf4(void);
extern void func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_020fc76c(s32 a, void *b, void *c, void *d, void *e);
extern s32 func_02112bc0(s32 a, s32 b);
extern void func_021127b8(s32 a, s32 b, s32 c);
extern void func_020fb96c(Obj *p);
extern void func_02108fc8(void);
extern void func_02109084(void);
extern void func_02108e24(s32 a);
extern s32 func_0210e938(void);
extern void func_0207dc3c(s32 a, s32 b);
extern void func_020a1a40(s32 a);

void func_020fb6c0(Obj *o)
{
    s32 i;
    s32 j;
    s32 z;
    s32 A;
    s32 B;
    s32 C;
    s32 D;
    s32 E;
    s32 diff;
    u8 *pb;

    o->a8 = 0;
    o->a0 = 0;
    o->a4 = o->a0;
    i = 0;
    z = i;
    do {
        j = i;
        o->pr[j].v = data_021332fc[j];
        i++;
        o->pr[j].z = z;
    } while (i < 3);
    o->k34 = 0x64000;
    o->k38 = z;
    o->k3c = z;
    i = z;
    do {
        o->z8c[i] = 0;
        i++;
    } while (i < 4);

    func_0210ea40(0x17);
    A = func_0210e968(0x17, data_0214683c);
    B = func_0210e968(0x17, data_02146850);
    C = func_0210e968(0x17, data_02146864);
    D = func_0210e968(0x17, data_02146884);
    E = func_0210e968(0x17, data_02146898);
    func_02113090(2, A);
    func_021130c4(2, B);
    func_02112ed0(2, C);
    func_02112e74(2, E);
    o->kb4 = D;
    func_02101cf4();

    i = 0;
    {
        u8 *pb11 = data_021332ec;
        u8 *pb10 = data_021332e0;
        do {
            func_02101894(0, C, B, *pb11, 0);
            func_02101894(0, C, B, *pb10, 0);
            i++;
            pb11++;
            pb10++;
        } while (i < 4);
    }

    *(s32 *)(data_0215be48 + 0xc838) = 4;
    *(s32 *)(data_0215be48 + 0xc83c) = 0;
    func_020fc76c(0x17, data_021468b4, data_021468cc, data_021468e4, data_021468fc);
    o->k4c = func_02112bc0(2, 0x1b) << 12;
    pb = data_021332d0;
    for (i = 0; i < 3; i++) {
        o->t40[i] = func_02112bc0(2, *pb) << 12;
        diff = o->t40[i] - o->k4c;
        o->t28[i] = diff / 20;
        pb++;
    }

    {
        u8 *q = data_02133308;
        s32 k = 0;
        do {
            func_021127b8(2, *q, 1);
            k++;
            q++;
        } while (k < 20);
    }

    func_020fb96c(o);
    func_02108fc8();
    func_02109084();
    func_02108e24(0);
    func_0207dc3c(func_0210e938(), 0x4e464948);
    func_020a1a40(0x38);
}
