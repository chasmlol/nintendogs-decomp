#include "ctx.h"

extern u32 data_0215942c;

void func_020a85c4(u8 *p, s32 v);

void func_020a839c(u16 param_1)
{
    s16 sVar1;
    u8 *puVar4;
    u8 *iVar7;
    u8 *iVar6;
    s32 iVar5;
    s32 iVar2;

    puVar4 = *(u8 **)&data_0215942c;
    func_020a85c4(puVar4, 10);
    *(u16 *)(puVar4 + 4) = 6;
    *(u16 *)(puVar4 + 14) = param_1;
    sVar1 = *(s16 *)(puVar4 + 14);
    {
        u8 *bq = puVar4 + 0x20;
        *(u16 *)(bq + sVar1 * 20) = *(u16 *)(bq + sVar1 * 20) | 1;
        *(s16 *)(bq + sVar1 * 20 + 2) = sVar1;
    }
    iVar2 = (s16)(((s16)*(u16 *)(puVar4 + 14) + 2) % 3) * 20;
    sVar1 = (s16)(((s16)*(u16 *)(puVar4 + 14) + 1) % 3);
    iVar6 = *(u8 **)&data_0215942c + 0x20;
    iVar5 = sVar1 * 20;
    *(u16 *)(iVar6 + iVar5) = *(u16 *)(iVar6 + iVar5) | 1;
    *(u16 *)(iVar6 + iVar5) = *(u16 *)(iVar6 + iVar5) | 2;
    iVar7 = *(u8 **)&data_0215942c + 0x20;
    *(u16 *)(iVar7 + iVar2) = *(u16 *)(iVar7 + iVar2) | 1;
    *(u16 *)(iVar7 + iVar2) = *(u16 *)(iVar7 + iVar2) | 2;
    *(s16 *)(puVar4 + 28) = sVar1;
}
