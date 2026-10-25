#include "ctx.h"

extern u32 *func_020978d0(u32 a, s32 b);
extern void func_02096a20(u32 *p, s32 v, s32 w);

void func_020959a0(u32 param_1, s32 param_2, s32 param_3)
{
    u32 *puVar1 = func_020978d0(param_1, param_2);
    if (puVar1[4] != 0) {
        func_02096a20(puVar1, param_3, 1);
    }
}
