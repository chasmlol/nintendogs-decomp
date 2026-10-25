#include "ctx.h"

extern u8 *func_01ffdb08(int idx);
extern u32 func_02028130(u8 *p);

void func_02008d84(u8 *param_1)
{
    u8 *iVar1;
    u8 *tab;
    u32 uVar2;

    iVar1 = func_01ffdb08(2);
    if (iVar1 == NULL) {
        return;
    }
    tab = iVar1 + 0x324;
    if (param_1 != NULL) {
        *(s32 *)(param_1 + 0x20) = *(s32 *)tab + *(s32 *)(**(u8 ***)(param_1 + 0x18) + 4);
        *(s32 *)(param_1 + 0x24) = *(s32 *)(tab + 4) + *(s32 *)(**(u8 ***)(param_1 + 0x18) + 8);
        *(s32 *)(param_1 + 0x28) = *(s32 *)(tab + 8) + *(s32 *)(**(u8 ***)(param_1 + 0x18) + 0xc);
        uVar2 = func_02028130(iVar1);
        *(s32 *)(param_1 + 0x54) = (s16)uVar2;
        return;
    }
    return;
}
