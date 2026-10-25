#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { u32 w[3]; } V3;

extern s32 data_02142e44;
extern s32 data_02142ca8;
extern s32 data_02142cac;
extern s32 data_02142cb0;
extern s32 data_02142cb4;
extern s32 data_02142cb8;
extern s32 data_02142cbc;
extern s32 data_02142cc4;
extern s32 data_02142cc0;

extern void func_02006a30(s32 *a, s32 *b);
extern void func_01ff832c(s32 k, s32 *a, s32 *b, s32 *c);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02028130(s32 a);
extern s32 func_020be240(void);
extern s32 func_02033f14(void);
extern s32 func_02067898(s32 a, s32 b);
extern s16 func_02068078(s32 a, s32 b);

void func_020ca904(s32 *p, s32 *src, s32 p3)
{
    s32 A[3];
    s32 B[3];
    s32 k;
    s32 r9;
    s32 r8;
    s32 r5;
    s32 r4;
    s32 t;
    s32 v;
    s32 half;
    s32 q;
    s32 iVar5;
    s16 sv;
    s32 v7;

    *(V3 *)p = *(V3 *)src;
    A[0] = -p[0];
    A[1] = 0;
    A[2] = -p[2];
    k = data_02142e44;
    func_02006a30(A, A);
    B[0] = p[0];
    B[1] = 0;
    B[2] = p[2];
    func_01ff832c(k, A, B, p + 3);
    p[6] = 0;
    p[7] = 4096;
    p[8] = 0;
    r5 = 0;
    r4 = 0;
    r8 = 409600;
    r9 = 0;
    do {
        t = func_01ffdb08((s16)r9);
        if (t != 0) {
            v = func_02028130(t);
            r5 = r5 + 1;
            if (r8 > v) {
                r8 = v;
            }
            if (r4 < v) {
                r4 = v;
            }
        }
        r9 = r9 + 1;
    } while (r9 < 3);
    iVar5 = func_020be240();
    half = func_02033f14() / 2;
    if (r5 == 3) {
        q = (half * 7) / 6;
        p[1] = data_02142cac + FX_Mul(data_02142ca8, q);
    } else if (r5 == 2) {
        q = (half * 3) / 2;
        p[1] = data_02142cb4 + FX_Mul(data_02142cb0, q);
    } else {
        q = half * 2;
        p[1] = data_02142cbc + FX_Mul(data_02142cb8, q);
    }
    sv = func_02068078(func_02067898(q, p3), iVar5);
    v7 = (s32)((((s64)(s32)sv * 0x1680000) + 0x80000) >> 20);
    if (v7 < data_02142cc4) {
        v7 = data_02142cc4;
    }
    if (v7 > data_02142cc0) {
        v7 = data_02142cc0;
    }
    p[9] = v7;
}
