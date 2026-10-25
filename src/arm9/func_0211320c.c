#include "ctx.h"

extern u32 data_02148b2c[];
extern void func_0207c910(u32 p0, u32 p1, u32 p2, u32 p3);

void func_0211320c(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    func_0207c910(data_02148b2c[param_1], param_3, param_2, param_4);
}
