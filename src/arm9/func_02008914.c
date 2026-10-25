#include "ctx.h"

extern u8 *func_01ffdb08(s32 a);
extern u32 func_02028130(u8 *p);

void func_02008914(s32 param_1)
{
    u8 *iVar1;
    u32 uVar2;
    u32 uVar3;
    s32 *q;

    iVar1 = func_01ffdb08(0);
    if (iVar1 == NULL) {
        return;
    }
    q = (s32 *)(iVar1 + 0x378);
    if (param_1 != 0) {
        *(s32 *)(param_1 + 0x20) = q[0] + *(s32 *)((u8 *)(*(s32 *)(*(u8 **)(param_1 + 0x18))) + 4);
        *(s32 *)(param_1 + 0x24) = q[1] + *(s32 *)((u8 *)(*(s32 *)(*(u8 **)(param_1 + 0x18))) + 8);
        *(s32 *)(param_1 + 0x28) = q[2] + *(s32 *)((u8 *)(*(s32 *)(*(u8 **)(param_1 + 0x18))) + 0xc);
        uVar2 = func_02028130(iVar1);
        *(s32 *)(param_1 + 0x54) = (s32)(s16)uVar2;
    }
    if (param_1 != 0) {
        uVar3 = func_02028130(iVar1);
        *(u32 *)(param_1 + 0x44) = (u32)((((s64)(s32)uVar3 << 12) + 0x800) >> 12);
    }
    if (param_1 != 0) {
        uVar2 = func_02028130(iVar1);
        *(s32 *)(param_1 + 0x4c) = (s32)(s16)(((s64)(s32)uVar2 * 123 + 0x800) >> 12);
    }
}
