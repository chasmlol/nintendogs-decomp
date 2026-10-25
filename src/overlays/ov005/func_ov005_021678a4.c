#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

extern u8 *data_ov005_02167f0c;
extern s32 func_01ffdb08(s32 a);
extern void func_0202762c(s32 a, s32 *b);
extern void func_020275dc(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern void func_02081aec(u8 *p, s32 *a, s32 *b);
extern s32 func_02027f78(s32 a, s32 b);

void func_ov005_021678a4(u8 *param_1)
{
    s32 iVar1;
    s32 uVar2;
    s32 aiStack_38[3];
    s32 aiStack_2c[3];

    iVar1 = func_01ffdb08(*(s16 *)(*(u8 **)(data_ov005_02167f0c + 0x214)));
    if (iVar1 == 0) {
        goto zero;
    }
    func_0202762c(iVar1, aiStack_38);
    func_020275dc(iVar1, aiStack_2c);
    uVar2 = func_02028130(iVar1);
    aiStack_38[2] = aiStack_38[2] + FX_Mul(uVar2, 0x99a);
    uVar2 = func_02028130(iVar1);
    aiStack_2c[2] = aiStack_2c[2] + FX_Mul(uVar2, 0x99a);
    func_02081aec(param_1, aiStack_38, aiStack_2c);
    uVar2 = func_02028130(iVar1);
    *(s32 *)(param_1 + 0x44) = FX_Mul(uVar2, 2048);
    *(s32 *)(param_1 + 0x54) = (s16)func_02028130(iVar1);
    iVar1 = func_02027f78(iVar1, 7);
    if (iVar1 >= 0x2329) {
        *(u32 *)(param_1 + 0x1c) = *(u32 *)(param_1 + 0x1c) & ~2;
    } else {
        *(u32 *)(param_1 + 0x1c) = *(u32 *)(param_1 + 0x1c) | 2;
    }
    return;
zero:
    *(u32 *)(param_1 + 0x1c) = *(u32 *)(param_1 + 0x1c) | 2;
}
