#include "ctx.h"

void *func_01ffdb08(u32 a);
u32 func_02028130(void *p);

void func_02007e80(u8 *param_1)
{
    u8 *iVar1;
    u32 *tab;

    iVar1 = (u8 *)func_01ffdb08(1);
    if (iVar1 == 0) {
        return;
    }
    tab = (u32 *)(iVar1 + 0x33c);
    if (param_1 == 0) {
        return;
    }
    *(u32 *)(param_1 + 0x20) = tab[0] + ((u32 *)*(*(u32 **)(param_1 + 0x18)))[1];
    *(u32 *)(param_1 + 0x24) = tab[1] + ((u32 *)*(*(u32 **)(param_1 + 0x18)))[2];
    *(u32 *)(param_1 + 0x28) = tab[2] + ((u32 *)*(*(u32 **)(param_1 + 0x18)))[3];
    *(s32 *)(param_1 + 0x54) = (s16)func_02028130(iVar1);
}
