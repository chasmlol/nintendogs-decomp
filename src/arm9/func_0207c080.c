#include "ctx.h"

void func_0207c080(u32 *param_1, u8 *param_2)
{
    u32 nd;
    u16 b;
    u32 a;
    u32 na;
    u32 c;
    int nc;
    param_1[0] = 0x1000;
    param_1[5] = 0x1000;
    param_1[1] = 0;
    a = *(s32 *)(0x24 + param_2);
    c = *(s32 *)(0x28 + param_2);
    na = -a;
    nc = -c;
    b = *(u16 *)(param_2 + 44);
    param_1[12] = (b * na) << 4;
    nd = -*(u16 *)(46 + param_2);
    param_1[13] = ((int)nd * nc) << 4;
    param_1[4] = 0;
}
