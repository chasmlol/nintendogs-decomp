#include "ctx.h"

void func_0207dde4(u8 *p)
{
    u32 v = *(u32 *)(p + 0x18);
    u32 *q = (u32 *)(p + 0x24);
    *q = v;
    q[2] = 0;
}
