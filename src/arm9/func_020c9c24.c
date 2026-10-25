#include "ctx.h"
#pragma opt_propagation off

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 data_02142c80;
extern s32 data_02142c7c;
extern s32 data_02142c78;
extern s32 data_02142c74;
extern s32 data_02142c70;
extern s32 data_02142c6c;

extern s32 func_020be240(void);
extern s32 func_01ffdb08(s32 a);
extern void func_02006a30(s32 *a, s32 *b);
extern void func_01ff832c(s32 k, s32 *a, s32 *b, s32 *c);
extern s32 func_02028130(s32 a);
extern s32 func_02067898(s32 a, s32 b);
extern s32 func_02068078(s32 a, s32 b);

void func_020c9c24(s32 *p0, s32 *p1, s32 p3, s32 p4)
{
    s32 r8, r7, r9;
    s32 r4;
    s32 A[3], B[3], C[3], D[3];
    s32 t;

    r8 = func_020be240();
    r7 = func_01ffdb08(p4);
    r9 = data_02142c80;
    A[0] = -p1[0];
    A[1] = 0;
    A[2] = -p1[2];
    func_02006a30(A, A);
    B[0] = p1[0];
    B[1] = 0;
    B[2] = p1[2];
    func_01ff832c(r9, A, B, p0);
    t = func_02028130(r7);
    p0[1] = data_02142c78 + FX_Mul(data_02142c7c, t);
    r9 = data_02142c74;
    C[0] = -p1[0];
    C[1] = 0;
    C[2] = -p1[2];
    func_02006a30(C, C);
    D[0] = p1[0];
    D[1] = 0;
    D[2] = p1[2];
    func_01ff832c(r9, C, D, p0 + 3);
    p0[4] = data_02142c70;
    p0[6] = 0;
    p0[7] = 4096;
    p0[8] = 0;
    t = func_02028130(r7);
    r4 = ((t << 1) + (s32)((u32)(t << 1) >> 31)) >> 1;
    t = func_02067898(FX_Mul(r4, data_02142c6c), p3);
    t = func_02068078(t, r8);
    p0[9] = (s32)((((s64)t * 23592960) + 0x80000) >> 20);
}
