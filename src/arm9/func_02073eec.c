#include "ctx.h"

extern u32 func_02067898(u32 a, u32 b);

void func_02073eec(s32 param_1, u16 *param_2, s32 param_3, u32 *param_4)
{
    u32 uVar6;
    u32 slot[2];
    u16 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar5;
    s32 iVar4;
    u8 *pu;
    u8 *base;
    u16 off;

    uVar1 = param_2[0];
    slot[1] = param_1 + uVar1;
    if ((param_4[0] & 0x1c000000) != 0x14000000) {
        slot[0] = *(u32 *)(param_3 + 8) & 0xffff;
    } else {
        slot[0] = *(u32 *)(param_3 + 0x18) & 0xffff;
    }
    pu = (u8 *)slot[1];
    uVar6 = 0;
    if (uVar6 < *((u8 *)param_2 + 2)) {
    do {
        off = *(u16 *)((u8 *)param_1 + 10);
        base = (u8 *)param_1 + 4 + off;
        iVar4 = param_1 + *(s32 *)(base + (u32)*(u16 *)base * (u32)*(u8 *)(pu + uVar6) + 4);
        *(u32 *)((u8 *)iVar4 + 0x14) = *(u32 *)((u8 *)iVar4 + 0x14) | (param_4[0] + slot[0]);
        uVar3 = param_4[1] & 0x7ff;
        uVar5 = 0x7ff & (param_4[1] >> 11);
        if (uVar3 == *(u16 *)((u8 *)iVar4 + 0x20)) {
            uVar2 = 0x1000;
        } else {
            uVar2 = func_02067898(uVar3 << 12, (u32)*(u16 *)((u8 *)iVar4 + 0x20) << 12);
        }
        *(u32 *)((u8 *)iVar4 + 0x24) = uVar2;
        if (uVar5 == *(u16 *)((u8 *)iVar4 + 0x22)) {
            uVar2 = 0x1000;
        } else {
            uVar2 = func_02067898(uVar5 << 12, (u32)*(u16 *)((u8 *)iVar4 + 0x22) << 12);
        }
        *(u32 *)((u8 *)iVar4 + 0x28) = uVar2;
        uVar6 = uVar6 + 1;
    } while (uVar6 < *((u8 *)param_2 + 2));
    }
    *((u8 *)param_2 + 3) = *((u8 *)param_2 + 3) | 1;
}
