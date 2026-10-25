#include "ctx.h"

extern u32 data_021517e8;
extern void func_020897d8(u32 p0, u32 p1);

void func_0206fff4(u32 param_1)
{
    if (param_1 != 0) {
        func_020897d8(param_1, 0);
        data_021517e8 = data_021517e8 & ~param_1;
    }
}
