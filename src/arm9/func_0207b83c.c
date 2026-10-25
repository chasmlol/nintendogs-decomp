#include "ctx.h"

void func_02067728(u32 a, u32 b);
u32 func_020677c8(void);

void func_0207b83c(s32 *param_1, u8 *param_2)
{
    u32 iVar1;
    u32 iVar2;
    s64 lVar3;
    s64 lVar4;
    u32 uVar5;

    iVar1 = (u32)*(u16 *)(param_2 + 0x2c) << 12;
    iVar2 = (u32)*(u16 *)(param_2 + 0x2e) << 12;
    func_02067728(iVar2, iVar1);
    param_1[0] = *(s16 *)(param_2 + 0x22);
    param_1[5] = *(s16 *)(param_2 + 0x22);
    uVar5 = func_020677c8();
    param_1[1] = ((s32)*(s16 *)(param_2 + 0x20) * (s32)uVar5) >> 12;
    func_02067728(iVar1, iVar2);
    iVar1 = (-(s32)*(u16 *)(param_2 + 0x2c)) << 11;
    iVar2 = (-(s32)*(vu16 *)(param_2 + 0x2e)) << 11;
    lVar3 = (s64)*(s16 *)(param_2 + 0x22) * (s64)(s32)iVar1;
    lVar4 = (s64)*(s16 *)(param_2 + 0x20) * (s64)(s32)iVar2;
    param_1[0xc] = (s32)((lVar3 - lVar4) >> 8) + ((u32)*(u16 *)(param_2 + 0x2c) << 15);
    {
        s32 x22 = *(s16 *)(param_2 + 0x22);
        s32 x20 = *(s16 *)(param_2 + 0x20);
        lVar3 = (s64)x20 * (s32)iVar1 + (s64)x22 * (s32)iVar2;
        param_1[0xd] = ((u32)*(u16 *)(param_2 + 0x2e) << 15) + (s32)(lVar3 >> 8);
    }
    uVar5 = func_020677c8();
    param_1[4] = ((-(s32)*(s16 *)(param_2 + 0x20)) * (s32)uVar5) >> 12;
}
