#include "ctx.h"

extern s32 func_01ffdb08(s32 a);
extern s32 func_02028130(s32 a);

static inline s32 FX(s32 a, s32 b)
{
    s64 v = (s64)a * (s64)b + 0x800;
    return (s32)(v >> 12);
}

void func_020087f8(u8 *param_1)
{
    s32 iVar1;
    u32 *base;
    s32 uVar3;
    s32 r;

    iVar1 = func_01ffdb08(1);
    if (iVar1 == 0) {
        return;
    }
    base = (u32 *)((u8 *)iVar1 + 0x378);
    if (param_1 != 0) {
        *(u32 *)(param_1 + 0x20) = base[0] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 4);
        *(u32 *)(param_1 + 0x24) = base[1] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 8);
        *(u32 *)(param_1 + 0x28) = base[2] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 12);
        *(s32 *)(param_1 + 0x54) = (s16)func_02028130(iVar1);
    }
    if (param_1 != 0) {
        uVar3 = func_02028130(iVar1);
        *(s32 *)(param_1 + 0x44) = FX(uVar3, 4096);
    }
    if (param_1 == 0) {
        return;
    }
    r = func_02028130(iVar1);
    *(s32 *)(param_1 + 0x4c) = (s16)FX(r, 123);
}
