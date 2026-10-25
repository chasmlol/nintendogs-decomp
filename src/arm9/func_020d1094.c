#include "ctx.h"

BOOL func_020d1094(u32 *p)
{
    s32 a = (s32)p[2];
    s32 b = *(s32 *)p[0] - 1;
    return a >= b;
}
