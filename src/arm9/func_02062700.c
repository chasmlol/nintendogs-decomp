#include "ctx.h"

extern double func_0205b1b8(double a, double b);

double func_02062700(double x, s32 *eptr)
{
    u32 hx;
    u32 lx;
    s32 ix;

    hx = *(u32 *)((u8 *)&x + 4);
    lx = *(u32 *)&x;
    *eptr = 0;
    ix = hx & 0x7fffffff;
    if (ix >= 0x7ff00000) goto ret;
    if ((ix | lx) != 0) goto main;
ret:
    return x;
main:
    if (ix < 0x100000) {
        x = func_0205b1b8(x, 18014398509481984.0);
        hx = *(u32 *)((u8 *)&x + 4);
        ix = hx & 0x7fffffff;
        *eptr = -54;
    }
    *eptr += -1022 + (ix >> 20);
    hx = (hx & 0x800fffff) | 0x3fe00000;
    *(u32 *)((u8 *)&x + 4) = hx;
    return x;
}
