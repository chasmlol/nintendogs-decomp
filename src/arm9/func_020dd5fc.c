#include "ctx.h"
#pragma opt_common_subs off
extern u32 data_0215ae8c[];
extern u8 *data_0215aea4[];
extern void func_020dd2d0(u32 *a, u32 b);
void func_020dd5fc(u32 p0, u32 p1)
{
    u32 m;

    func_020dd2d0(&data_0215ae8c[p0], p1);
    m = p1 * 24;
    *(u32 *)(data_0215aea4[p0] + m + 0x94) = 1;
    *(u32 *)(data_0215aea4[p0] + m + 0x98) = 1;
}
