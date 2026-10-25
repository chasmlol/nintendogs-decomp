#include "ctx.h"
u64 func_020626b4(u64 x, u64 y)
{
    u32 lo = ((u32 *)&x)[1] & 0x7fffffff;
    u32 hi = ((u32 *)&y)[1] & 0x80000000;
    u32 v = lo | hi;
    ((u32 *)&x)[1] = v;
    return x;
}
