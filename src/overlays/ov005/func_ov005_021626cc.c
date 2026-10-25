#include "ctx.h"
extern u8 data_ov005_02167f00[];
extern u8 *func_01ffdb08(s32 a);
extern void func_ov005_02163d4c(u8 *a, u32 b, u32 *c);
extern s32 func_02028130(u8 *p);
void func_ov005_021626cc(u8 *param_1)
{
    u8 *iVar2;
    s32 uVar3;
    s64 lVar1;
    u32 local_18[3];
    iVar2 = func_01ffdb08((s16)*(s16 *)(*(u8 **)data_ov005_02167f00));
    if (*(u32 *)(*(u8 **)data_ov005_02167f00 + 4) != 0) {
        func_ov005_02163d4c(iVar2, 4, local_18);
    } else {
        func_ov005_02163d4c(iVar2, 5, local_18);
    }
    uVar3 = func_02028130(iVar2);
    lVar1 = (s64)uVar3 * 1229 + 0x800;
    local_18[2] = local_18[2] + (u32)(lVar1 >> 12);
    *(u32 *)(param_1 + 0x20) = local_18[0] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 4);
    *(u32 *)(param_1 + 0x24) = local_18[1] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 8);
    *(u32 *)(param_1 + 0x28) = local_18[2] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 0xc);
    uVar3 = func_02028130(iVar2);
    lVar1 = (s64)uVar3 * 1434 + 0x800;
    *(u32 *)(param_1 + 0x44) = (u32)(lVar1 >> 12);
    *(s32 *)(param_1 + 0x54) = (s32)*(s16 *)(*(u8 **)data_ov005_02167f00 + 8);
}
