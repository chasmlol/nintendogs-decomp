#include "ctx.h"

void *func_01ffdb08(int a);
s32 func_02028130(void *a);

void func_02007f0c(int param_1)
{
    u8 *iVar1;
    s32 *p;
    s32 uVar2;

    iVar1 = (u8 *)func_01ffdb08(0);
    if (iVar1 == 0) {
        return;
    }
    p = (s32 *)(iVar1 + 0x33c);
    if (param_1 != 0) {
        *(s32 *)(param_1 + 0x20) = p[0] + *(s32 *)(**(s32 **)(param_1 + 0x18) + 4);
        *(s32 *)(param_1 + 0x24) = p[1] + *(s32 *)(**(s32 **)(param_1 + 0x18) + 8);
        *(s32 *)(param_1 + 0x28) = p[2] + *(s32 *)(**(s32 **)(param_1 + 0x18) + 0xc);
        uVar2 = func_02028130(iVar1);
        *(s32 *)(param_1 + 0x54) = (s32)(s16)uVar2;
        return;
    }
    return;
}
