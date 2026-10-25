#include "ctx.h"

void func_02069fb8(u32 *p, u32 a, u32 c, u32 d, u32 e)
{
    *p = a | 0x40 | (c << 8) | ((d | (e << 8)) << 16);
}
