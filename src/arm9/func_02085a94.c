#include "ctx.h"

u32 *func_02085a94(u32 *param_1)
{
    u32 *piVar2 = (u32 *)0;
    u32 *piVar1 = (u32 *)param_1[0];
    if (piVar1 != (u32 *)0) {
        piVar2 = piVar1;
        param_1[0] = piVar1[0];
        if (((vu32 *)param_1)[0] != 0) {
            u32 *nx = (u32 *)((vu32 *)piVar1)[0];
            nx[1] = 0;
        }
        param_1[1] = param_1[1] - 1;
    }
    return piVar2;
}
