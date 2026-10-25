#include "ctx.h"

extern u32 func_020d055c(u16 *a, u32 b);
extern void func_020d0810(u16 *a, u32 b);
extern u8 func_020d1094(u16 *a);

u32 func_020ceb00(u16 *p, u32 p2)
{
    u32 r = func_020d055c(p + 0x1e, p2);
    u32 w;
    func_020d0810(p + 0x16, r);
    w = *(u32 *)(p + 0x16);
    if (w != 0 && p[0] == 1) {
        func_020d1094(p + 0x16);
    }
    w = *(u32 *)(p + 0x16);
    if (w == 0) {
        return w;
    }
    if (p[0] != 2) {
        return p[0];
    }
    return (u16)func_020d1094(p + 0x16);
}
