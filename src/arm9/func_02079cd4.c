#include "ctx.h"

extern s32 func_02079f54(u8 *obj, u32 a, s32 b);
extern s32 func_02079e60(u8 *obj, u32 a, s32 b);

void func_02079cd4(u8 *param_1, u32 *param_2, u32 param_3)
{
    u8 *base;
    u16 off;
    u32 v;
    u8 *iVar7;
    u8 *iVar4;
    u8 *iVar6;
    u32 iVar5;
    s32 uVar3;
    u32 uVar1;
    u32 uVar2;

    iVar7 = (u8 *)param_2[2];
    uVar3 = (s32)param_2[0] >> 12;
    off = *(u16 *)(iVar7 + 14);
    base = iVar7 + 8;
    v = *(u16 *)(base + off);
    iVar5 = v * (u16)param_3;
    iVar4 = base + off + 4;
    iVar6 = iVar4 + iVar5;
    uVar1 = func_02079f54(iVar7, *(u32 *)(iVar4 + iVar5), uVar3);
    uVar2 = func_02079f54(iVar7, *(u32 *)(iVar6 + 4), uVar3);
    *(u32 *)(param_1 + 4) = (*(u32 *)(param_1 + 4) & 0x8000) | uVar1 | (uVar2 << 16);
    uVar1 = func_02079f54(iVar7, *(u32 *)(iVar6 + 0xc), uVar3);
    uVar2 = func_02079f54(iVar7, *(u32 *)(iVar6 + 8), uVar3);
    *(u32 *)(param_1 + 8) = (*(u32 *)(param_1 + 8) & 0x8000) | uVar2 | (uVar1 << 16);
    uVar3 = func_02079e60(iVar7, *(u32 *)(iVar6 + 0x10), uVar3);
    *(u32 *)(param_1 + 0xc) = (*(u32 *)(param_1 + 0xc) & 0xffe0ffff) | ((u32)uVar3 << 16);
}
