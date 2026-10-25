#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern u8 *data_ov005_02167f00;
extern s32 func_01ffdb08(s32 a);
extern void func_ov005_021636c8(s32 a, u32 b, u32 *c, u32 *d);
extern u32 func_02028130(s32 a);
extern void SwapByteAt(u32 v, u8 *p);

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov005_02162064(u8 *param_1)
{
    s32 iVar1;
    u8 *iVar4;
    s32 uVar3;
    u32 buf[4];
    s32 fx;
    u32 t;
    u32 uVar2;

    iVar1 = func_01ffdb08(*(s16 *)data_ov005_02167f00);
    iVar4 = data_ov005_02167f00;
    func_ov005_021636c8(iVar1, 7, &buf[1], &buf[0]);
    *(u32 *)(param_1 + 0x20) = buf[1] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 4);
    *(u32 *)(param_1 + 0x24) = buf[2] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 8);
    *(u32 *)(param_1 + 0x28) = buf[3] + *(u32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 12);
    uVar3 = *(u32 *)(iVar4 + 0x60);
    if (uVar3 == 0) {
        uVar3 = *(u32 *)(param_1 + 0x1c);
        *(u32 *)(param_1 + 0x1c) = uVar3 | 2;
    } else {
        fx = uVar3;
        uVar3 = *(u32 *)(param_1 + 0x1c);
        *(u32 *)(param_1 + 0x1c) = uVar3 & ~2;
        SwapByte((u32)((FX_Mul(fx, -368640) >> 12) + 100), param_1 + 92);
    }
    uVar2 = func_02028130(iVar1);
    *(u32 *)(param_1 + 0x54) = (u32)(s32)(s16)uVar2;
    iVar1 = (s32)func_02028130(iVar1);
    *(u32 *)(param_1 + 0x44) = (u32)(s32)(s16)FX_Mul(iVar1, 778);
}
