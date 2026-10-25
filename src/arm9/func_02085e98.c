#include "ctx.h"

u16 *func_02085ef4(u32 a, u16 *b, s32 *c, u32 d);

s32 func_02085e98(u32 param_1, u16 *param_2, u32 param_3)
{
    s32 local_18;
    s32 iVar1;

    local_18 = 0;
    iVar1 = 0;
    while (param_2 != NULL) {
        param_2 = func_02085ef4(param_1, param_2, &local_18, param_3);
        if (iVar1 < local_18) {
            iVar1 = local_18;
        }
    }
    return iVar1;
}
