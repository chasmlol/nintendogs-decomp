#include "ctx.h"

u16 *func_0207da54(u32 *param_1, u16 param_2)
{
    u16 *p = (u16 *)param_1[0];
    u32 *q = (u32 *)p;
    p[0] = param_2;
    p[1] = 0;
    q[1] = param_1[1] - (u32)(p + 8);
    q[2] = 0;
    q[3] = 0;
    return p;
}
