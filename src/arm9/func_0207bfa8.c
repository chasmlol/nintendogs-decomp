#include "ctx.h"

extern void func_02067728(u32 a, u32 b);
extern u32 func_020677c8(void);

void func_0207bfa8(u32 *param_1, u8 *param_2)
{
    u32 uVar10;
    u32 uVar8;
    u32 uVar7;
    u32 iVar1;
    u32 iVar2;
    s32 sVar3;
    s32 sVar4;
    s32 iVar6;
    s32 iVar9;
    s32 pr;

    iVar1 = (u32)*(u16 *)(param_2 + 0x2c) << 12;
    iVar2 = (u32)*(u16 *)(param_2 + 0x2e) << 12;
    func_02067728(iVar2, iVar1);
    sVar3 = *(s16 *)(param_2 + 0x22);
    iVar6 = *(s32 *)(param_2 + 0x18);
    sVar4 = *(s16 *)(param_2 + 0x20);
    uVar10 = (u32)(((s64)iVar6 * sVar4) >> 12);
    iVar9 = *(s32 *)(param_2 + 0x1c);
    param_1[0] = (u32)(((s64)iVar6 * sVar3) >> 12);
    uVar8 = (u32)(((s64)iVar9 * sVar3) >> 12);
    param_1[5] = uVar8;
    uVar7 = func_020677c8();
    pr = (s32)(((s64)iVar9 * sVar4) >> 12);
    param_1[1] = (u32)((pr * (s32)uVar7) >> 12);
    func_02067728(iVar1, iVar2);
    param_1[0xc] = (u32)*(u16 *)(param_2 + 0x2c) * uVar10 * 16;
    param_1[0xd] = (u32)(-(s32)*(u16 *)(param_2 + 0x2e)) * (uVar8 - 0x1000) * 16;
    uVar7 = func_020677c8();
    param_1[4] = (u32)(((s32)(-uVar10) * (s32)uVar7) >> 12);
}
