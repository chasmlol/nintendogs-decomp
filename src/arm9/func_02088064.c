#include "ctx.h"

extern BOOL func_02087854(u32 *p, u32 a, u32 b, u32 c);

u32 func_02088064(u32 *param_1, u32 param_2, ...)
{
    u32 *p;
    u32 v;
    u32 x;
    u32 w;
    BOOL bVar1;
    p = param_1;
    v = *(vu32 *)&param_2;
    if (v == 0) {
        return 0;
    }
    p[2] = v;
    x = *(vu32 *)&param_2;
    w = *((vu32 *)&param_2 + 1);
    p[0xb] = x;
    p[0xc] = w;
    bVar1 = func_02087854(p, 6, w, x);
    if (bVar1) {
        p[3] = p[3] | 0x10;
        p[3] = p[3] & 0xffffffdf;
        return 1;
    }
    return 0;
}
