#include "ctx.h"

extern u32 func_0206f6a4(u16 *, s32);

u16 func_0206f284(u16 *param_1, s32 param_2)
{
    u16 uVar1;
    uVar1 = 0;
    if (param_2 > 0 && param_1 != NULL) {
        uVar1 = (u16)func_0206f6a4(param_1, param_2);
    }
    return uVar1;
}
