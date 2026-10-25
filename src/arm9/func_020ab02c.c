#include "ctx.h"
extern void func_0200b644(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020ab02c(u8 *p0, u32 p1, u32 p2)
{
    u8 *g = *(u8 **)(p0 + 0x1c);
    func_0200b644(p1, (u32)(g + 0x30), (u32)(p0 + 0x9c), p2, (u32)(g + 0x48));
}
