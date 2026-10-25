#include "ctx.h"

extern u32 func_02078384(u8 *a, u32 b);
extern u32 func_02067898(u32 a, u32 b);

void func_0207a5f8(u8 *param_1, u32 param_2, u8 *param_3)
{
    u32 *puVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    puVar1 = (u32 *)func_02078384(param_1 + 0x3c, param_2);
    if ((*puVar1 & 0x1c000000) != 0x14000000) {
        uVar3 = *(u32 *)(param_1 + 8) & 0xffff;
    } else {
        uVar3 = *(u32 *)(param_1 + 0x18) & 0xffff;
    }
    *(u32 *)(param_3 + 0x10) = *(u32 *)(param_3 + 0x10) & 0xc00f0000;
    *(u32 *)(param_3 + 0x10) = *(u32 *)(param_3 + 0x10) | (*puVar1 + uVar3);
    *(u16 *)(param_3 + 0x2c) = (u16)(puVar1[1] & 0x7ff);
    *(s16 *)(param_3 + 0x2e) = (s16)((puVar1[1] & 0x3ff800) >> 11);
    uVar3 = puVar1[1] & 0x7ff;
    uVar4 = (puVar1[1] >> 11) & 0x7ff;
    if (uVar3 == *(u16 *)(param_3 + 0x2c)) {
        uVar2 = 0x1000;
    } else {
        uVar2 = func_02067898(uVar3 << 12, (u32)*(u16 *)(param_3 + 0x2c) << 12);
    }
    *(u32 *)(param_3 + 0x30) = uVar2;
    if (uVar4 == *(u16 *)(param_3 + 0x2e)) {
        uVar2 = 0x1000;
    } else {
        uVar2 = func_02067898(uVar4 << 12, (u32)*(u16 *)(param_3 + 0x2e) << 12);
    }
    *(u32 *)(param_3 + 0x34) = uVar2;
}
