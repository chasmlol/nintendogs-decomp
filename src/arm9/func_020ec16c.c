#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 data_02133d64[];
extern u8 data_02133ab0[];
extern s32 func_02028118(u8 *p);
extern s32 func_02028130(u8 *p);
extern void func_0202762c(u8 *p, s32 *a);
extern void func_02027178(u8 *p, s32 *a, s32 n);
extern void func_01ff832c(s32 r, s32 *a, s32 *b, s32 *c);

typedef struct { s32 w[3]; } T3;

void func_020ec16c(s32 *out, u8 *p1, s32 p2)
{
    s32 la[3];
    s32 F[9];
    s32 o[3];
    s32 out3[3];
    s32 buf[13];
    s32 v3;
    s32 v4;
    s32 a;
    s32 b;
    s32 t10;
    s32 R;
    s32 c1;
    s32 v;
    s32 w;
    s32 w2;
    s32 w3;
    s32 X1;
    s32 Y;
    s32 Z;
    s32 S;
    s32 T;
    s32 U;
    s32 Q1;
    s32 Q2;
    s32 Q3;
    s32 p6;
    s32 t4;
    u8 *rec;
    u8 *q;

    a = func_02028118(p1);
    b = func_02028130(p1);
    rec = data_02133d64 + p2 * 168;
    func_0202762c(p1, la);
    func_02027178(p1, buf, 11);
    F[0] = buf[0];
    F[1] = buf[1];
    F[2] = buf[2];
    v3 = buf[3];
    t4 = buf[5];
    v4 = buf[4];
    F[3] = v3;
    F[4] = v4;
    F[5] = t4;
    F[6] = buf[6];
    F[7] = buf[7];
    F[8] = buf[8];

    c1 = *(u8 *)(rec + 1);
    if (c1 != 0) {
        v = *(s16 *)(data_02133ab0 + c1 * 138 + a * 6 + 2);
        t10 = FX_Mul(v, b);
    } else {
        t10 = b;
    }

    q = rec + a * 6;
    w = *(s16 *)(q + 4);
    F[0] = FX_Mul(F[0], w);
    F[1] = FX_Mul(F[1], w);
    F[2] = FX_Mul(F[2], w);

    w2 = *(s16 *)(q + 6);
    F[3] = FX_Mul(F[3], w2);
    X1 = F[0] + F[3];
    F[4] = FX_Mul(F[4], w2);
    Y = F[1] + F[4];
    F[5] = FX_Mul(F[5], w2);
    Z = F[2] + F[5];

    w3 = *(s16 *)(q + 8);

    F[3] = v3;
    F[4] = v4;
    F[5] = t4;
    p6 = FX_Mul(F[6], w3);
    F[6] = p6;
    S = p6 + X1;
    F[7] = FX_Mul(F[7], w3);
    F[8] = FX_Mul(F[8], w3);
    T = F[7] + Y;
    U = F[8] + Z;

    Q1 = FX_Mul(b, S);
    o[0] = la[0] + Q1;
    Q2 = FX_Mul(b, T);
    o[1] = la[1] + Q2;
    Q3 = FX_Mul(b, U);
    o[2] = la[2] + Q3;

    R = FX_Mul(t10, 0x800);
    func_01ff832c(R, &F[3], o, out3);

    *(T3 *)out = *(T3 *)out3;
}
