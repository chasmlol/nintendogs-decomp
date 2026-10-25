#include "ctx.h"

s32 func_02062698(u16 *p)
{
    s32 n;
    u16 v;
    n = -1;
    do {
        v = *p++;
        n = n + 1;
    } while (v != 0);
    return n;
}
