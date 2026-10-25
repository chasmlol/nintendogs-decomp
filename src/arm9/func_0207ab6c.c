#include "ctx.h"

#define FXM(a, b) ((u32)((((s64)(a)) * ((s64)(b))) >> 12))

extern void func_02067728(u32 a, u32 b);
extern u32 func_020677c8(void);

void func_0207ab6c(u32 *param_1, u8 *param_2)
{
    u32 iVar1;
    u32 iVar2;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;
    u32 uVar9;
    iVar1 = (u32)*(u16 *)(param_2 + 0x2c) << 12;
    iVar2 = (u32)*(u16 *)(param_2 + 0x2e) << 12;
    func_02067728(iVar2, iVar1);
    uVar9 = FXM(*(s32 *)(param_2 + 0x18), *(s16 *)(param_2 + 0x20));
    uVar8 = FXM(*(s32 *)(param_2 + 0x18), *(s16 *)(param_2 + 0x22));
    uVar6 = FXM(*(s32 *)(param_2 + 0x1c), *(s16 *)(param_2 + 0x20));
    uVar7 = FXM(*(s32 *)(param_2 + 0x1c), *(s16 *)(param_2 + 0x22));
    param_1[0] = uVar8;
    param_1[5] = uVar7;
    uVar5 = func_020677c8();
    param_1[1] = (s32)(-uVar6 * uVar5) >> 12;
    func_02067728(iVar1, iVar2);
    param_1[0xc] = (u32)*(u16 *)(param_2 + 0x2c) * (*(s32 *)(param_2 + 0x18) - (uVar9 + uVar8)) * 8;
    param_1[0xd] = (u32)*(u16 *)(param_2 + 0x2e) * (((uVar6 - uVar7) - *(s32 *)(param_2 + 0x1c)) + 0x2000) * 8;
    uVar5 = func_020677c8();
    param_1[4] = (s32)(uVar9 * uVar5) >> 12;
}
