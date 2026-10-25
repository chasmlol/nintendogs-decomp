#include "ctx.h"

s32 func_021210c8(s32 *param_1, s32 param_2)
{
    s32 iVar2 = -1;
    s32 iVar1;
    if ((param_1[0x38 / 4] == 0 || param_1[0x38 / 4] == 4)) {
        iVar1 = param_1[0x48 / 4] + param_2;
        if (iVar1 < param_1[0x44 / 4]) {
            iVar2 = iVar1;
        }
    }
    return iVar2;
}
