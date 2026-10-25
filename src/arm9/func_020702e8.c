#include "ctx.h"
extern u32 func_0207ceb0(u32 a, u32 b);
extern void func_0207cf34(u32 a, u32 b, u32 c);
void func_020702e8(u32 *p0, u8 *p1)
{
    u32 n = func_0207ceb0((u32)p0, 0);
    if (n == 0) {
        goto done;
    }
top:
    if (p1[0x3d] < *(u8 *)(n + 0x3d)) {
        goto done;
    }
    n = func_0207ceb0((u32)p0, n);
    if (n != 0) {
        goto top;
    }
done:
    func_0207cf34((u32)p0, n, (u32)p1);
    *(u32 *)(p1 + 4) = (u32)p0;
}
