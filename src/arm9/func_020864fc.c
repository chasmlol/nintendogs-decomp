#include "ctx.h"

void func_020864fc(u32 *p, u32 a, u16 b, u16 c, u32 d, u32 e)
{
    p[0] = a;
    *(u16 *)(p + 1) = b;
    *(u16 *)((u8 *)p + 6) = c;
    *(u16 *)(p + 2) = d;
    p[3] = e;
}
