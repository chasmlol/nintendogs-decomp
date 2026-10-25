#include "ctx.h"

extern int func_020ce5d0(int a, int b, int c, int d, int e, int f, int g, int h, int i);

void func_020ce324(int *A, int *B, int *C, int *D, int p5, int p6, int p7, int p8, int p9, int *out)
{
    if (p6 == p5) {
        if (p7 == p8) {
            out[0] = func_020ce5d0(B[0], B[0], C[0], C[0], p6, p6, p7, p7, p9);
            out[1] = func_020ce5d0(B[1], B[1], C[1], C[1], p6, p6, p7, p7, p9);
            out[2] = func_020ce5d0(B[2], B[2], C[2], C[2], p6, p6, p7, p7, p9);
            return;
        }
        out[0] = func_020ce5d0(B[0], B[0], C[0], D[0], p6, p6, p7, p8, p9);
        out[1] = func_020ce5d0(B[1], B[1], C[1], D[1], p6, p6, p7, p8, p9);
        out[2] = func_020ce5d0(B[2], B[2], C[2], D[2], p6, p6, p7, p8, p9);
        return;
    }
    if (p7 == p8) {
        out[0] = func_020ce5d0(A[0], B[0], C[0], C[0], p5, p6, p7, p7, p9);
        out[1] = func_020ce5d0(A[1], B[1], C[1], C[1], p5, p6, p7, p7, p9);
        out[2] = func_020ce5d0(A[2], B[2], C[2], C[2], p5, p6, p7, p7, p9);
        return;
    }
    out[0] = func_020ce5d0(A[0], B[0], C[0], D[0], p5, p6, p7, p8, p9);
    out[1] = func_020ce5d0(A[1], B[1], C[1], D[1], p5, p6, p7, p8, p9);
    out[2] = func_020ce5d0(A[2], B[2], C[2], D[2], p5, p6, p7, p8, p9);
}
