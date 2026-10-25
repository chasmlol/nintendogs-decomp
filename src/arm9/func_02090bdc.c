#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_propagation off

extern u32 func_02090b38(u8 *a, u32 b, u32 c);

void func_02090bdc(u8 *param_1, u32 param_2, u32 param_3, u16 *param_4, u32 param_5, s32 param_6)
{
    u32 i;
    u16 *psVar5;
    u32 iVar4;
    u32 iVar3;
    u32 idx;
    u16 sVar1;
    u32 uVar2;

    uVar2 = func_02090b38(param_1, param_2, param_3);
    iVar4 = *(u32 *)(param_1 + 8);
    iVar3 = *(u32 *)(*(u32 *)(param_1 + 4) + (uVar2 & 0xffff) * 4);
    i = 0;
    *(u16 *)((u8 *)param_4 + param_5 * 2 - 2) = i;
    psVar5 = (u16 *)(iVar4 + iVar3);
    goto cond;
body:
    sVar1 = *psVar5;
    while (sVar1 == 0x1a) {
        psVar5 = psVar5 + ((u16)psVar5[1] & 0xff);
        sVar1 = *psVar5;
    }
    idx = i * 2;
    *(u16 *)((u32)param_4 + idx) = sVar1;
    if (*(u16 *)((u32)param_4 + idx) == 0) {
        return;
    }
    psVar5 = psVar5 + 1;
    if (param_6 >= 0 && (s32)(i + 1) >= param_6) {
        *(u16 *)((u32)param_4 + idx + 2) = 0;
        return;
    }
    i = i + 1;
cond:
    if (i < param_5 - 1) {
        goto body;
    }
}
