#include "ctx.h"

void func_020800f0(u32 a, s32 b)
{
    u32 p;
    b = b + a;
    p = a & ~31u;
    do {
        asm { mcr p15, 0, p, c7, c10, 1 }
        p += 32;
    } while ((s32)p < b);
}
