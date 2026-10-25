#include "ctx.h"

u32 func_02073e34(u8 *p, u32 v);
u32 func_02073cec(u8 *p, u32 v);

u32 func_02073c6c(u8 *param_1, u32 param_2)
{
    u32 uVar1;
    u32 uVar4;
    u32 uVar3;
    u8 *iVar5;
    u8 *e;
    u32 s;

    uVar3 = 1;
    uVar4 = 0;
    if (uVar4 < *(u8 *)(param_1 + 9)) {
        do {
            e = param_1 + 8 + *(u16 *)(param_1 + 0xe);
            s = *(u16 *)e;
            iVar5 = param_1 + *(s32 *)(e + s * uVar4 + 4);
            uVar1 = func_02073e34(iVar5, param_2);
            uVar3 = uVar3 & uVar1;
            uVar1 = func_02073cec(iVar5, param_2);
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 & uVar1;
        } while (uVar4 < *(u8 *)(param_1 + 9));
    }
    return uVar3;
}
