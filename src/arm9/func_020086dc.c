#include "ctx.h"
extern u8 *func_01ffdb08(s32 a);
extern s32 func_02028130(u8 *p);
void func_020086dc(u8 *param_1)
{
    u8 *iVar1;
    u32 *q;
    s32 uVar2;
    s64 v;
    iVar1 = func_01ffdb08(2);
    if (iVar1 == NULL) {
        return;
    }
    q = (u32 *)(iVar1 + 0x378);
    if (param_1 != NULL) {
        *(u32 *)(param_1 + 0x20) = q[0] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 4);
        *(u32 *)(param_1 + 0x24) = q[1] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 8);
        *(u32 *)(param_1 + 0x28) = q[2] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 0xc);
        uVar2 = func_02028130(iVar1);
        *(s32 *)(param_1 + 0x54) = (s32)(s16)uVar2;
    }
    if (param_1 != NULL) {
        uVar2 = func_02028130(iVar1);
        v = (s64)uVar2 * 4096 + 2048;
        *(u32 *)(param_1 + 0x44) = (u32)(v >> 12);
    }
    if (param_1 != NULL) {
        uVar2 = func_02028130(iVar1);
        v = (s64)uVar2 * 123 + 2048;
        *(s32 *)(param_1 + 0x4c) = (s32)(s16)(u32)(v >> 12);
    }
}
