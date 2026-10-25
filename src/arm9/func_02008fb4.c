#include "ctx.h"
extern u8 *func_01ffdb08(u32 a);
extern u32 func_02028130(u8 *p);
void func_02008fb4(u8 *param_1)
{
    u8 *iVar1;
    u32 uVar2;
    s32 *pv;
    iVar1 = func_01ffdb08(1);
    if (iVar1 == NULL) {
        return;
    }
    pv = (s32 *)(iVar1 + 0x378);
    if (param_1 != NULL) {
        *(s32 *)(param_1 + 0x20) = pv[0] + *(s32 *)(**(u8 ***)(param_1 + 0x18) + 4);
        *(s32 *)(param_1 + 0x24) = pv[1] + *(s32 *)(**(u8 ***)(param_1 + 0x18) + 8);
        *(s32 *)(param_1 + 0x28) = pv[2] + *(s32 *)(**(u8 ***)(param_1 + 0x18) + 0xc);
        uVar2 = func_02028130(iVar1);
        *(s32 *)(param_1 + 0x54) = (s16)uVar2;
        return;
    }
    return;
}
