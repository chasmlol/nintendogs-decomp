#include "ctx.h"

typedef struct { s32 v[3]; } Vec3;

#define FX_MUL(a, b) ((s32)((((s64)(a)) * (b) + 0x800) >> 12))

extern s32 func_020c9038(Vec3 *out);
extern void func_02067e68(Vec3 *a, Vec3 *b, Vec3 *out);
extern void func_020cda6c(Vec3 *a, Vec3 *b, Vec3 *c, Vec3 *p, Vec3 *v);
extern void func_020cd1e8(Vec3 *a, Vec3 *b, Vec3 *p, Vec3 *q, Vec3 *d, s32 flag);
extern void func_02067e34(Vec3 *a, Vec3 *b, Vec3 *out);
extern void func_02006a30(Vec3 *a, Vec3 *out);
extern void func_02067d04(Vec3 *a, Vec3 *b, Vec3 *out);
extern s32 func_02067df0(Vec3 *a, Vec3 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s32 func_0206824c(s32 x);
extern s32 func_02067c30(Vec3 *v);
extern void func_01ff832c(s32 x, Vec3 *b, Vec3 *p, Vec3 *a);
extern s32 data_02142e40;
extern s32 data_02142e48;

void func_020cce1c(s32 *param_1, Vec3 *param_2, s32 param_3, s32 param_4)
{
    Vec3 A, B, C, D, P, E, F, G, H, K, I, J, L, M, N, O, T, R, S, U;
    s32 r4, v1, v2, t, w, x, iv8;

    r4 = func_020c9038(&A);
    if (r4 == 0) {
        return;
    }
    if (param_4 != 0) {
        func_02067e68((Vec3 *)(param_4 + 0xbc), &A, &A);
        A.v[0] = FX_MUL(A.v[0], 0x800);
        A.v[1] = FX_MUL(A.v[1], 0x800);
        A.v[2] = FX_MUL(A.v[2], 0x800);
    }
    P = *param_2;
    func_020cda6c(&D, &C, &B, &P, &A);
    func_020cd1e8(&E, &F, &P, &B, &D, param_4);
    func_02067e34(&E, &P, &G);
    func_02067e34(&F, &P, &H);
    I = G;
    J = H;
    func_02006a30(&I, &I);
    func_02006a30(&J, &J);
    func_02067e68(&I, &J, &K);
    func_02006a30(&K, &K);
    func_02067d04(&C, &K, &D);
    func_02006a30(&D, &D);
    func_02067d04(&D, &C, &B);
    v1 = func_02067df0(&G, &B);
    t = func_02067df0(&G, &D);
    if (t <= 0) {
        t = -t;
    }
    v1 = func_02067898(t, v1);
    func_020cd1e8(&L, &M, &P, &B, &C, param_4);
    func_02067e34(&L, &P, &N);
    func_02067e34(&M, &P, &O);
    R = N;
    S = O;
    func_02006a30(&R, &R);
    func_02006a30(&S, &S);
    func_02067e68(&R, &S, &T);
    func_02006a30(&T, &T);
    func_02067d04(&T, &D, &C);
    func_02006a30(&C, &C);
    func_02067d04(&D, &C, &B);
    w = func_02067df0(&N, &B);
    if (func_02067df0(&N, &C) > 0) {
        x = func_02067df0(&N, &C);
    } else {
        x = -func_02067df0(&N, &C);
    }
    v2 = func_02067898(x, w);
    func_02067e34(&A, &P, &U);
    iv8 = func_02067c30(&U);
    func_01ff832c(iv8, &B, &P, &A);
    iv8 = func_02067898(v1, param_3);
    if (iv8 < v2) {
        iv8 = v2;
    }
    param_1[9] = (s32)((((s64)func_0206824c(iv8)) * 0x1680000 + 0x80000) >> 20);
    if (r4 == 1 && param_4 == 0) {
        param_1[9] = data_02142e40;
    } else if (param_1[9] > data_02142e48) {
        param_1[9] = data_02142e48;
    }
    *(Vec3 *)param_1 = P;
    *(Vec3 *)(param_1 + 3) = A;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
}
