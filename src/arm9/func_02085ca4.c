#include "ctx.h"

s32 func_02085ca4(u8 *p, s32 n)
{
    s32 t = (s32)p + *(s32 *)(p + 8);
    return n * 6 + t;
}
