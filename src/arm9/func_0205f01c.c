#include "ctx.h"

extern void func_0205f080(s32 a, s32 b, u32 *c, u32 *d);

void func_0205f01c(u32 p1, u32 p2, ...)
{
    u32 *ap;
    ap = (u32 *)((((u32)&p2) & ~3u) + 4);
    func_0205f080((s32)p1, -1, (u32 *)p2, ap);
}
