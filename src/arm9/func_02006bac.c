#include "ctx.h"
extern u8 *func_0207385c(u32 a, u32 b);
extern void func_020737b8(u32 a);
u32 *func_02006bac(u32 p0)
{
    u8 *q = func_0207385c(p0, 0x43484152) + 8;
    if ((*(u32 *)(q + 0x14) & 0xf000000) == 0) {
        func_020737b8((u32)q);
    }
    return (u32 *)q;
}
