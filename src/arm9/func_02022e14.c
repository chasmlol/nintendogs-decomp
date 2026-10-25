#include "ctx.h"

BOOL func_02022e14(u8 *p, s32 n)
{
    return *(s16 *)(p + 0xf0) == n + 0xc;
}
