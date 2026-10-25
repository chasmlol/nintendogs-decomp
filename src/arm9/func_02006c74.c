#include "ctx.h"

void func_02006c74(u16 *param_1, u32 *param_2)
{
    u32 uVar2;
    u8 *iVar1;
    uVar2 = param_1[1];
    if (uVar2 < param_1[0]) {
        iVar1 = *(u8 **)(param_1 + 2);
        *(u32 *)(iVar1 + uVar2 * 8) = param_2[0];
        *(u16 *)(iVar1 + uVar2 * 8 + 4) = *(u16 *)(param_2 + 1);
        param_1[1] = param_1[1] + 1;
        return;
    }
}
