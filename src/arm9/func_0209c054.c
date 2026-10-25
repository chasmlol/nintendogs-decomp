#include "ctx.h"
extern u32 func_0209c084(u32 *a, u32 b);
u32 func_0209c054(u32 *p0, u32 p1, u32 p2)
{
    u32 r = func_0209c084(p0, p1);
    u32 *q;
    if (r != 0xffffffff) {
        q = (u32 *)((u32)p0 + (r << 2));
        q[14] = p2;
    }
    return r;
}
