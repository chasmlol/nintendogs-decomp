#include "ctx.h"

extern u32 func_02073734(u8 *p);
extern u8 *func_02073708(u8 *p, u16 idx);

void func_02073678(u8 *param_1)
{
    u32 iVar1;
    u8 *iVar2;
    u16 uVar3;

    *(u32 *)(param_1 + 4) = *(u32 *)(param_1 + 4) + (u32)param_1;
    iVar1 = func_02073734(param_1);
    uVar3 = 0;
    while (uVar3 < *(u16 *)param_1) {
        iVar2 = func_02073708(param_1, uVar3);
        *(u32 *)(iVar2 + 4) = *(u32 *)(iVar2 + 4) + iVar1;
        uVar3 = uVar3 + 1;
    }
    if (*(u32 *)(param_1 + 12) != 0) {
        *(u32 *)(param_1 + 12) = *(u32 *)(param_1 + 12) + (u32)param_1;
        iVar1 = *(u32 *)(param_1 + 12);
        *(u32 *)((u8 *)iVar1 + 4) = *(u32 *)((u8 *)iVar1 + 4) + iVar1;
        *(u32 *)(param_1 + 12) = iVar1;
    }
}
