#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

typedef struct { u16 a; } H16;
typedef struct { u32 w; u16 h[6]; } E16;

typedef struct {
    u8 pad0[0x94];
    s16 f94;
    u8 pad96[0x1ec - 0x96];
    s32 f1ec;
    u32 f1f0;
    u32 f1f4;
    u32 f1f8;
    u32 pad1fc;
    u32 pad200;
    u32 f204;
    u32 f208;
    u32 f20c;
    u32 pad210;
    u8 *P;
} Dog;

typedef struct {
    u16 h0;
    s16 s2;
    u8 b4;
    u8 pad5;
    u16 h6;
    s32 w8;
    u16 h12;
    u16 h14;
    u32 w10;
    u32 w14;
    u32 w18;
    u16 h1c;
    u16 pad1e;
    s32 w20;
    s32 w24;
    s32 w28;
    s32 w2c;
    s32 w30;
    s32 w34;
    s32 w38;
    s32 w3c;
    s32 w40;
    s32 w44;
    u32 pad48[2];
    u32 w50;
    u32 w54;
    u32 w58;
    u32 w5c;
    u32 p60[10];
    u8 s88[28];
    E16 el[11];
    u32 w154;
} Obj;

extern u8 data_02144da8[], data_02144db8[], data_02144dc8[], data_02144de0[], data_02144df4[];
extern u8 data_02144e04[], data_02144e18[], data_02144e28[], data_02144e38[], data_02144e4c[];
extern u8 data_02159198[];
extern u8 data_02132ff8[];
extern u8 data_02132ffc[];

extern s32 func_020edfac(void);
extern s32 func_020ecf40(void);
extern s32 func_020edfb0(void);
extern s32 func_020eceec(void);
extern s32 func_020ecd04(void);
extern s32 func_020eccf0(void);
extern u8 *func_020038b8(u8 *a, s32 b);
extern void func_0205f050(u8 *a, s32 b, u8 *c, s32 d);
extern s32 func_0207df48(u8 *a);
extern void func_020737d8(s32 a, u8 *b);
extern void func_02073768(s32 a, u8 *b);
extern void func_02073828(s32 a, u8 *b);
extern u8 *func_02085ca4(s32 a, s32 b);
extern s32 func_02085c30(H16 h, s32 b);
extern s32 func_0209e148(s32 a);
extern void func_02097b94(s32 a, s32 b, s32 c, s32 d, s32 e);

void func_020ee3f8(Dog *d, u8 *param_2, u8 param_3)
{
    u8 *pb;
    u8 buf[64];
    Obj *P;
    s32 i;
    u32 t;
    int v;
    u8 zr;

    d->f1f4 = (u32)func_020edfac;
    d->f1f8 = (u32)func_020ecf40;
    d->f1f0 = (u32)func_020edfb0;
    d->f20c = (u32)func_020eceec;
    d->f208 = (u32)func_020ecd04;
    d->f204 = (u32)func_020eccf0;
    d->P = func_020038b8(param_2, 344);
    P = (Obj *)d->P;

    func_0205f050(buf, 64, data_02144da8, d->f1ec);
    P->p60[0] = func_0207df48(buf);
    func_0205f050(buf, 64, data_02144db8, d->f1ec);
    P->p60[1] = func_0207df48(buf);
    func_0205f050(buf, 64, data_02144dc8, d->f1ec);
    P->p60[2] = func_0207df48(buf);
    func_0205f050(buf, 64, data_02144de0, d->f1ec);
    P->p60[3] = func_0207df48(buf);
    func_0205f050(buf, 64, data_02144df4, d->f1ec);
    P->p60[4] = func_0207df48(buf);
    func_0205f050(buf, 64, data_02144e04, d->f1ec);
    P->p60[5] = func_0207df48(buf);
    func_0205f050(buf, 64, data_02144e18, d->f1ec);
    P->p60[6] = func_0207df48(buf);
    func_0205f050(buf, 64, data_02144e28, d->f1ec);
    P->p60[7] = func_0207df48(buf);
    func_0205f050(buf, 64, data_02144e38, d->f1ec);
    P->p60[8] = func_0207df48(buf);
    func_0205f050(buf, 64, data_02144e4c, d->f1ec);
    P->p60[9] = func_0207df48(buf);

    func_020737d8(P->p60[3], P->s88);
    func_02073768(P->p60[4], P->s88 + 4);
    func_02073768(P->p60[5], P->s88 + 8);
    func_020737d8(P->p60[6], P->s88 + 12);
    func_02073828(P->p60[7], P->s88 + 16);
    func_02073828(P->p60[8], P->s88 + 20);
    func_02073828(P->p60[9], P->s88 + 24);

    i = 0;
    do {
        P->el[i].w = 1;
        if ((u32)(i - 1) <= 1) {
            P->el[i].w = 0;
        }
        if (d->f94 == 100) {
            if (i == 9 || (u32)(i - 5) <= 1) {
                P->el[i].w = 0;
            }
        } else if ((u32)(i - 3) <= 7) {
            P->el[i].w = 0;
        }
        P->el[i].h[1] = 0;
        P->el[i].h[2] = 0;
        P->el[i].h[3] = 0;
        P->el[i].h[4] = 0;
        P->el[i].h[0] = 1;
        i++;
    } while (i < 11);

    {
        u8 *q8;
        u8 *Q = (u8 *)P->p60[1];
        q8 = Q + 8;
        pb = func_02085ca4(P->p60[2], 0);
        P->w40 = pb[0];
        P->w44 = pb[1];
        P->w38 = func_02085c30(*(H16 *)(Q + 8), P->w40);
        P->w3c = func_02085c30(*(H16 *)(q8 + 2), P->w44);
    }
    P->w38 += P->w40 / 2;
    P->w3c += P->w44 / 2;

    {
        s32 pb1;
        u8 *q8;
        u8 *q7 = (u8 *)P->p60[1] + 8;
        q8 = q7 + 8;
        pb = func_02085ca4(P->p60[2], 1);
        pb1 = pb[1];
        func_02085c30(*(H16 *)(q7 + 8), pb[0]);
        t = func_02085c30(*(H16 *)(q8 + 2), pb1);
        P->w34 = (t + pb1 / 2) - P->w3c;
    }

    {
        u8 *q9;
        s32 pb1;
        u8 *q7 = (u8 *)P->p60[1] + 8;
        q9 = q7 + 16;
        pb = func_02085ca4(P->p60[2], 2);
        pb1 = pb[1];
        func_02085c30(*(H16 *)(q7 + 16), pb[0]);
        t = func_02085c30(*(H16 *)(q9 + 2), pb1);
        P->w30 = (t + pb1 / 2) - P->w3c;
    }

    P->w54 = 1;
    P->w154 = 0;
    P->h6 = 127;
    P->w8 = func_0209e148(d->f94);

    v = *(s32 *)(data_02159198 + 0x3c) >> 8;
    if (v > 0) {
        u16 x;
        P->w18 = 1;
        {
            u32 q = (0x11c7 * v) / P->w8;
            x = (0xeef + q);
        }
        if (x > 0x20b6) {
            x = 0x20b6;
        }
        P->h1c = x;
        {
            int t3 = (*(s16 *)(50 + (int)data_02159198) + 256) << 10;
            s32 q2 = t3 + (s32)(((u32)(t3 >> 7)) >> 24);
            P->h14 = (u16)(q2 >> 8);
        }
        {
            s32 dd = (P->w30 - P->w34) >> 1;
            s32 prod = (s32)dd * -(*(s16 *)(50 + data_02159198));
            P->w2c = prod / 100;
        }
        P->el[0].h[4] = (u16)P->w2c;
    } else {
        P->w18 = 0;
        P->h1c = 0;
        P->h14 = 1024;
        P->w2c = 0;
    }

    zr = 0;
    P->h0 = zr;
    P->s2 = *(s16 *)&P->h0;
    P->b4 = param_3;
    P->h12 = zr;
    P->w14 = zr;
    P->w5c = zr;
    P->w50 = zr;
    P->w58 = zr;
    P->w20 = data_02132ff8[0] - data_02132ffc[2];
    P->w24 = data_02132ff8[1] - data_02132ffc[3];
    if (d->f94 == 100) {
        func_02097b94(2, 0xdac, 1, zr, 1);
    }
}
