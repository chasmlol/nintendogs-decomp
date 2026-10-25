#include "ctx.h"

extern void func_02067af0(s32 *a, s32 *b);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern s32 func_02067df0(s32 *p, s32 *v);

void func_0206a6f8(s32 *p1, s32 *p2, s32 *p3, s32 p4, s32 *p5)
{
    s32 A[3];
    s32 B[3];
    s32 C[3];
    s32 n3;
    s32 n1;
    s32 n2;
    vu32 *dst;

    A[0] = p1[0] - p3[0];
    A[1] = p1[1] - p3[1];
    A[2] = p1[2] - p3[2];
    func_02067af0(A, A);
    func_02067d04(p2, A, B);
    func_02067af0(B, B);
    func_02067d04(A, B, C);
    if (p4 != 0) {
        *(vu32 *)0x04000440 = 2;
        dst = (vu32 *)0x0400045C;
        *dst = B[0];
        *dst = C[0];
        *dst = A[0];
        *dst = B[1];
        *dst = C[1];
        *dst = A[1];
        *dst = B[2];
        *dst = C[2];
        *dst = A[2];
    }
    n1 = -func_02067df0(p1, B);
    n2 = -func_02067df0(p1, C);
    n3 = -func_02067df0(p1, A);
    if (p4 != 0) {
        *dst = n1;
        *dst = n2;
        *dst = n3;
    }
    if (p5 != 0) {
        p5[0] = B[0];
        p5[1] = C[0];
        p5[2] = A[0];
        p5[3] = B[1];
        p5[4] = C[1];
        p5[5] = A[1];
        p5[6] = B[2];
        p5[7] = C[2];
        p5[8] = A[2];
        p5[9] = n1;
        p5[10] = n2;
        p5[11] = n3;
    }
}
