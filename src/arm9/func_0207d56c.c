#include "ctx.h"

extern u32 *func_0207d9d0(u32 *a, u32 *b, u16 c);

u32 *func_0207d56c(u32 p0, u32 p1, u16 p2)
{
    u32 *e = (u32 *)((p1 + p0) & 0xfffffffcu);
    u32 *s = (u32 *)((p0 + 3) & 0xfffffffcu);
    if (s <= e) {
        if ((u32)e - (u32)s >= 76) {
            goto call;
        }
    }
    return 0;
call:
    return func_0207d9d0(s, e, p2);
}
