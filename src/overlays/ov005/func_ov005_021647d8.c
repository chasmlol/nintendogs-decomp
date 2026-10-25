#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u32 data_ov005_02167f04;
extern s32 func_01ffdb08(s32 a);
extern u32 func_ov005_02164920(u32 a, u32 b);
extern void func_ov005_021636c8(s32 a, u32 b, s32 *c, s32 *d);
extern s32 func_0200b8a0(s32 *a, s32 *b, s32 *c);

u32 func_ov005_021647d8(s32 *param_1, s32 *param_2)
{
    s32 uVar6;
    s32 iVar2;
    u32 uVar5;
    s32 local_38;
    s32 aiStack_34[4];
    s32 iVar4;
    s32 fx;
    u32 uVar3;

    iVar2 = func_01ffdb08(*(s16 *)(*(u8 **)&data_ov005_02167f04 + 0x24));
    uVar5 = 0;
    uVar6 = 0;
    do {
        uVar3 = func_ov005_02164920(uVar6, *(u32 *)(*(u8 **)&data_ov005_02167f04 + 0x28));
        func_ov005_021636c8(iVar2, uVar3, aiStack_34, &local_38);
        fx = FX_Mul(local_38, local_38);
        iVar4 = func_0200b8a0(aiStack_34, param_1, param_2);
        if (iVar4 < fx) {
            uVar5 = (u16)(uVar5 | (1 << uVar6));
        }
        uVar6 = (s16)(uVar6 + 1);
    } while (uVar6 < 6);
    return uVar5;
}
