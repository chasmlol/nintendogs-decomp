#include "ctx.h"

extern void func_02067728(u32 a, u32 b);
extern u32 func_020677c8(void);

void func_0207baf4(s32 *param_1, u8 *param_2)
{
    s32 iVar4;
    s32 iVar5;
    u32 uVar3;
    s64 lVar1;
    s64 lVar2;
    s32 t22;
    s32 t20;
    u32 t2e;

    iVar4 = (s32)*(u16 *)(param_2 + 0x2c) << 12;
    iVar5 = (s32)*(u16 *)(param_2 + 0x2e) << 12;
    func_02067728(iVar5, iVar4);
    param_1[0] = (s32)*(s16 *)(param_2 + 0x22);
    param_1[5] = (s32)*(s16 *)(param_2 + 0x22);
    uVar3 = func_020677c8();
    param_1[1] = ((s32)*(s16 *)(param_2 + 0x20) * (s32)uVar3) >> 12;
    func_02067728(iVar4, iVar5);
    uVar3 = (u32)*(u16 *)(param_2 + 0x2c);
    iVar5 = *(s32 *)(param_2 + 0x28) * (s32)*(u16 *)(param_2 + 0x2e) + ((-(s32)*(u16 *)(param_2 + 0x2e)) << 11);
    iVar4 = ((-(s32)uVar3) << 11) - *(s32 *)(param_2 + 0x24) * (s32)uVar3;
    lVar1 = (s64)*(s16 *)(param_2 + 0x20) * (s64)iVar5;
    lVar2 = (s64)*(s16 *)(param_2 + 0x22) * (s64)iVar4;
    param_1[12] = (s32)((lVar2 - lVar1) >> 8) + (s32)uVar3 * 0x8000;
    t22 = (s32)*(s16 *)(param_2 + 0x22);
    t20 = (s32)*(s16 *)(param_2 + 0x20);
    t2e = (u32)*(vu16 *)(param_2 + 0x2e);
    lVar1 = (s64)t20 * (s64)iVar4 + (s64)t22 * (s64)iVar5;
    param_1[13] = (s32)(lVar1 >> 8) + t2e * 0x8000;
    uVar3 = func_020677c8();
    param_1[4] = (s32)(-(s32)*(s16 *)(param_2 + 0x20) * (s32)uVar3) >> 12;
}
