#include "ctx.h"

u64 func_020626dc(u64 x)
{
    u32 *p = (u32 *)&x;
    p[1] = p[1] & 0x7fffffff;
    return x;
}
