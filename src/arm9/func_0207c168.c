#include "ctx.h"

extern void func_02067728(u32 a, u32 b);
extern s32 func_020677c8(void);

void func_0207c168(s32 *param_1, u8 *param_2)
{
    u32 r4v;
    u32 r7v;

    s32 iVar7;
    s32 uVar5;
    s64 lVar2;
    s64 lVar3;
    s64 lVar4;

    r4v = (u32)*(u16 *)(param_2 + 0x2c) << 12;
    r7v = (u32)*(u16 *)(param_2 + 0x2e) << 12;
    func_02067728(r7v, r4v);

    param_1[0] = *(s16 *)(param_2 + 0x22);
    param_1[5] = *(s16 *)(param_2 + 0x22);
    uVar5 = func_020677c8();
    param_1[1] = ((s32)*(s16 *)(param_2 + 0x20) * uVar5) >> 12;
    func_02067728(r4v, r7v);
    iVar7 = *(s16 *)(param_2 + 0x20);
    lVar2 = (s64)*(s32 *)(param_2 + 0x24) * (s64)*(s16 *)(param_2 + 0x22) + (s64)*(s32 *)(param_2 + 0x28) * (s64)iVar7;
    lVar3 = (s64)*(s32 *)(param_2 + 0x28) * (s64)*(s16 *)(param_2 + 0x22);
    lVar4 = (s64)*(s32 *)(param_2 + 0x24) * (s64)iVar7;
    param_1[0xc] = (s32)(*(u16 *)(param_2 + 0x2c) * (iVar7 - (s32)(lVar2 >> 12)) * 16);
    param_1[0xd] = (s32)(-(s32)*(u16 *)(param_2 + 0x2e) * ((s32)*(s16 *)(param_2 + 0x22) + (s32)((lVar4 - lVar3) >> 12) - 0x1000) * 16);
    uVar5 = func_020677c8();
    param_1[4] = ((-(s32)*(s16 *)(param_2 + 0x20)) * uVar5) >> 12;
}
