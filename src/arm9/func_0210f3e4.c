#include "ctx.h"

extern s16 *func_0210f100(s32, s32);

u32 func_0210f3e4(s32 param_1, s32 param_2)
{
    u32 uVar2 = 0;
    s16 *psVar1 = func_0210f100(param_1, param_2);
    if (psVar1 != NULL) {
        uVar2 = *(u32 *)(psVar1 + 4);
    }
    return uVar2;
}
