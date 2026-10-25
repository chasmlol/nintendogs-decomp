#include "ctx.h"

#pragma opt_propagation off
BOOL func_0206ce6c(u32 bit, s32 idx)
{
    u32 base = 0x027ffc00u;
    u32 v;
    u32 m;
    s32 r;
    m = 1u << bit;
    base = base + idx * 4;
    v = *(u32 *)(base + 0x388);
    r = 1;
    if ((m & v) == 0) {
        r = 0;
    }
    return r;
}
