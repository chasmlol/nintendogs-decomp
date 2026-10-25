#include "ctx.h"

u32 func_0207420c(u32 *param_1, u32 *param_2)
{
    u32 *iVar1;
    u32 *iVar2;
    iVar2 = (u32 *)param_1[0];
    if (iVar2 == 0) {
        return 0;
    }
    if (iVar2 == param_2) {
        param_1[0] = iVar2[4];
        param_2[4] = 0;
        return 1;
    }
    iVar1 = (u32 *)iVar2[4];
    while (iVar1 != 0) {
        if (iVar1 == param_2) {
            iVar2[4] = iVar1[4];
            iVar1[4] = 0;
            return 1;
        }
        iVar2 = iVar1;
        iVar1 = (u32 *)iVar1[4];
    }
    return 0;
}
