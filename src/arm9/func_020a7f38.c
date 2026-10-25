#include "ctx.h"

extern u8 *data_0215942c;
extern void func_020a85c4(u8 *p, u32 v);

void func_020a7f38(u16 p0)
{
    u8 *g = (u8 *)data_0215942c;
    s16 idx;
    u8 *e;
    func_020a85c4(g, 6);
    *(u16 *)(g + 4) = 0;
    *(u16 *)(g + 14) = p0;
    idx = *(s16 *)(g + 14);
    e = g + 32 + idx * 20;
    *(u16 *)(g + 32 + idx * 20) = *(u16 *)(g + 32 + idx * 20) | 1;
    *(s16 *)(e + 2) = idx;
}
