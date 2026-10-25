#pragma avoid_byte all
#include "ctx.h"

s32 func_02063a5c(u32 param_1, ...)
{
    u8 *pp;
    s32 n;
    u32 v;

    if (param_1 == 0) goto Z;
    pp = (u8 *)&param_1;
    n = 0;
    v = *pp;
    if (v != 0) goto B34;
    do {
        pp = pp + 1;
        n = n + 8;
        v = *pp;
    } while (v == 0);
B34:
    *pp = (u8)~v;
    if ((*pp & 1) == 0) return n;
    do {
        *pp = (u8)(*(vu8 *)pp >> 1);
        n = n + 1;
    } while ((*pp & 1) != 0);
    return n;
Z:
    return 32;
}
