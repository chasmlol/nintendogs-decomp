#include "ctx.h"

extern u32 data_0215be48;

void func_02108414(void)
{
    u32 one = 1;
    u32 base;
    u32 q;
    vu32 *r;
    base = *(u32 *)&data_0215be48;
    q = base + 196;
    *(vu32 *)(q + 0x268) = one;
    r = (vu32 *)q;
    r = (vu32 *)((u8 *)r + 616);
    r[1] = 30;
}
