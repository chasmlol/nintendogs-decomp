#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_01ffdb08(u32 a);
extern s32 func_02028130(u8 *p);

void func_02008520(u8 *param_1, s32 param_2, u8 *param_3)
{
    u8 *iVar1;
    s32 uVar2;
    iVar1 = (u8 *)func_01ffdb08((u32)param_1);
    if (iVar1 == 0) {
        return;
    }
    if (param_3 == 0) {
        return;
    }
    switch (param_2) {
    case 0:
        if (param_3 != 0) {
            *(s32 *)(param_3 + 0x20) = *(s32 *)(iVar1 + 0x2dc) + *(s32 *)(*(u8 **)(*(u8 **)(param_3 + 0x18)) + 4);
            *(s32 *)(param_3 + 0x24) = *(s32 *)(iVar1 + 0x2e0) + *(s32 *)(*(u8 **)(*(u8 **)(param_3 + 0x18)) + 8);
            *(s32 *)(param_3 + 0x28) = *(s32 *)(iVar1 + 0x2e4) + *(s32 *)(*(u8 **)(*(u8 **)(param_3 + 0x18)) + 12);
            uVar2 = func_02028130(iVar1);
            *(s32 *)(param_3 + 0x54) = (s16)uVar2;
        }
        break;
    case 1:
        if (param_3 != 0) {
            *(s32 *)(param_3 + 0x20) = *(s32 *)(iVar1 + 0x2c4) + *(s32 *)(*(u8 **)(*(u8 **)(param_3 + 0x18)) + 4);
            *(s32 *)(param_3 + 0x24) = *(s32 *)(iVar1 + 0x2c8) + *(s32 *)(*(u8 **)(*(u8 **)(param_3 + 0x18)) + 8);
            *(s32 *)(param_3 + 0x28) = *(s32 *)(iVar1 + 0x2cc) + *(s32 *)(*(u8 **)(*(u8 **)(param_3 + 0x18)) + 12);
            uVar2 = func_02028130(iVar1);
            *(s32 *)(param_3 + 0x54) = (s16)uVar2;
        }
        break;
    case 2:
        if (param_3 != 0) {
            *(s32 *)(param_3 + 0x20) = *(s32 *)(iVar1 + 0x348) + *(s32 *)(*(u8 **)(*(u8 **)(param_3 + 0x18)) + 4);
            *(s32 *)(param_3 + 0x24) = *(s32 *)(iVar1 + 0x34c) + *(s32 *)(*(u8 **)(*(u8 **)(param_3 + 0x18)) + 8);
            *(s32 *)(param_3 + 0x28) = *(s32 *)(iVar1 + 0x350) + *(s32 *)(*(u8 **)(*(u8 **)(param_3 + 0x18)) + 12);
            uVar2 = func_02028130(iVar1);
            *(s32 *)(param_3 + 0x54) = (s16)uVar2;
        }
        break;
    }
    if (param_3 == 0) {
        return;
    }
    uVar2 = func_02028130(iVar1);
    *(s32 *)(param_3 + 0x44) = FX_Mul(uVar2, 0x11ec);
}
