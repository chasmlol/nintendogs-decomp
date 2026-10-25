#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_ov005_02167f00;
extern s32 func_01ffdb08(s32 a);
extern void func_0202762c(s32 a, s32 *b);
extern s32 func_02028130(s32 a);

void func_ov005_02162318(u8 *param_1)
{
    s32 iVar1;
    s32 local[3];
    u8 *iVar4;
    s32 uVar3;
    s32 sh;
    u32 sv;

    iVar1 = func_01ffdb08(*(s16 *)data_ov005_02167f00);
    iVar4 = data_ov005_02167f00;
    func_0202762c(iVar1, local);
    *(s32 *)(param_1 + 0x20) = local[0] + *(s32 *)(*(u8 **)*(u32 *)(param_1 + 0x18) + 4);
    *(s32 *)(param_1 + 0x24) = local[1] + *(s32 *)(*(u8 **)*(u32 *)(param_1 + 0x18) + 8);
    *(s32 *)(param_1 + 0x28) = local[2] + *(s32 *)(*(u8 **)*(u32 *)(param_1 + 0x18) + 12);
    uVar3 = *(s32 *)(iVar4 + 0x58);
    if (uVar3 == 0) {
        *(vu32 *)(param_1 + 0x1c) = *(vu32 *)(param_1 + 0x1c) | 2;
    } else {
        sh = FX_Mul(uVar3, -389120);
        *(vu32 *)(param_1 + 0x1c) = *(vu32 *)(param_1 + 0x1c) & 0xfffffffd;
        sv = (u32)(sh >> 12) + 100;
        *(u8 *)(param_1 + 92) = sv;
    }
    *(s32 *)(param_1 + 0x54) = (s16)func_02028130(iVar1);
    iVar1 = func_02028130(iVar1);
    *(s32 *)(param_1 + 0x44) = (s16)FX_Mul(iVar1, 0xa66);
}
