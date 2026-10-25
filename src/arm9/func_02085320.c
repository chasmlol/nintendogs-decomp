#include "ctx.h"

extern u32 data_02156024;
extern u32 func_0205e270(s32 a, u32 b);

void func_02085320(u8 *param_1, u8 *param_2, s32 param_3)
{
    u32 uVar4;
    u16 *puVar3;
    u32 uVar1;
    u16 b5;
    u32 uVar2;
    u32 uVar5;

    puVar3 = *(u16 **)(param_2 + 0xc);
    b5 = *((u8 *)puVar3 + 5);
    if (param_3 < *((u8 *)puVar3 + 4)) {
        uVar2 = *puVar3;
        uVar5 = (u32)uVar2 << 27;
        uVar4 = func_0205e270(param_3 * ((((uVar2 << 22) >> 27)) - ((u32)uVar5 >> 27)), *((u8 *)puVar3 + 4));
        uVar2 = uVar4 + (uVar5 >> 27);
    } else if (param_3 < b5) {
        uVar2 = ((u32)*puVar3 << 22) >> 27;
    } else {
        uVar2 = *puVar3 << 17;
        uVar4 = func_0205e270((param_3 - 255) * ((uVar2 >> 27) - (((u32)*puVar3 << 22) >> 27)), 255 - b5);
        uVar2 = uVar4 + (uVar2 >> 27);
    }
    uVar1 = 0x5eedf715 * data_02156024 + 0x1b0cb173;
    data_02156024 = uVar1;
    *(u16 *)(param_1 + 0x40) = *(u16 *)(0x40 + param_1) & ~0x3e0 |
        ((uVar2 * (0xff - (((s32)(*((u8 *)puVar3 + 2) * (uVar1 >> 24))) >> 8)) * 0x100 >> 16 & 0x1f) << 5);
}
