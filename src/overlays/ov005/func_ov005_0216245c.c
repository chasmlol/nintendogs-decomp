#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov005_02167f00;
extern s32 func_01ffdb08(s32 a);
extern void func_020275f0(s32 a, s32 *b);
extern s32 func_02028130(s32 a);

void func_ov005_0216245c(u8 *param_1)
{
    s32 loc[3];
    s32 iVar1;
    u8 *iVar4;
    u32 uVar3;
    s32 fx;
    s64 p;
    u32 fl;
    u32 uVar2;
    s64 p2;

    iVar1 = func_01ffdb08(*(s16 *)data_ov005_02167f00);
    iVar4 = data_ov005_02167f00;
    func_020275f0(iVar1, loc);
    *(s32 *)(param_1 + 0x20) = loc[0] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 4);
    *(s32 *)(param_1 + 0x24) = loc[1] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 8);
    *(s32 *)(param_1 + 0x28) = loc[2] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 0xc);
    uVar3 = *(u32 *)(iVar4 + 0x54);
    if (uVar3 == 0) {
        *(u32 *)(param_1 + 0x1c) |= 2;
    } else {
        p = (s64)(s32)uVar3 * -401408;
        fx = (s32)((p + 0x800) >> 12);
        fl = *(u32 *)(param_1 + 0x1c);
        fl &= ~2u;
        *(u32 *)(param_1 + 0x1c) = fl;
        *(u8 *)(param_1 + 0x5c) = (u8)((fx >> 12) + 100);
    }
    uVar2 = func_02028130(iVar1);
    *(s32 *)(param_1 + 0x54) = (s16)uVar2;
    iVar1 = func_02028130(iVar1);
    p2 = (s64)iVar1 * 0xb85;
    *(s32 *)(param_1 + 0x44) = (s16)((s32)((p2 + 0x800) >> 12));
}
