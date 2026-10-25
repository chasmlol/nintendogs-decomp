#include "ctx.h"

u32 func_01ffdb08(u32 a);
u32 func_0202817c(u32 a);
u32 func_020953bc(u32 a);

u32 func_02116aa0(u32 param_1)
{
    u32 uVar2;
    u32 iVar1;

    uVar2 = 0;
    iVar1 = func_01ffdb08((s16)param_1);
    if (iVar1 != 0) {
        iVar1 = func_0202817c(iVar1);
        if (((*(u32 *)(iVar1 + 0x640) == 0xffff) && (*(u32 *)(iVar1 + 0x644) == 0xffff)) ||
            (iVar1 = func_020953bc(iVar1), iVar1 == 0)) {
            uVar2 = 1;
        }
    }
    return uVar2;
}
