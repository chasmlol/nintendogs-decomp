#include "ctx.h"

extern void func_020c7fe4(u32 a, u32 b, u32 c, u32 d, u32 *e);

void func_020e5564(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 local_14[3];
    vu32 *p;
    p = (vu32 *)local_14;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    func_020c7fe4(param_1, param_2, param_3, param_4, local_14);
}
