#include "ctx.h"

extern s32 func_020735ec(u32 *p);

void func_02073628(u32 *param_1, s32 param_2, s32 param_3)
{
    s32 r = func_020735ec(param_1);
    param_1[0] = (u32)r;
    param_1[1] = (u32)param_2;
    param_1[3] = (u32)param_3;
    param_1[2] = 0;
}
