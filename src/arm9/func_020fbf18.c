#include "ctx.h"

void func_020fbf18(u32 a, u32 *p, u16 b, u32 c, u32 d)
{
    p[0] = a;
    *(u16 *)(p + 1) = b;
    p[2] = c;
    p[3] = d;
}
