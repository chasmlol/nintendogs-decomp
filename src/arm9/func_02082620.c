#include "ctx.h"

#define SRC (*(u8 **)(param_1[6]))

void func_02082620(u32 *param_1, u32 param_2, s32 *param_3)
{
    u16 uVar1;
    u16 uVar2;
    u8 *b = (u8 *)param_1;
    u8 *S;
    param_1[6] = param_2;
    param_1[7] = 0;
    param_1[8] = param_3[0] + *(s32 *)(SRC + 4);
    param_1[9] = param_3[1] + *(s32 *)(SRC + 8);
    param_1[10] = param_3[2] + *(s32 *)(SRC + 0xc);
    param_1[13] = 0;
    param_1[12] = param_1[13];
    param_1[11] = param_1[12];
    *(u16 *)(b + 0x38) = 0;
    *(u16 *)(b + 0x3a) = 0;
    S = SRC;
    uVar1 = *(vu16 *)(S + 0x1c);
    uVar2 = *(vu16 *)(S + 0x1e);
    *(u16 *)(b + 0x3c) = uVar1;
    *(u16 *)(b + 0x3e) = uVar2;
    *(u16 *)(b + 0x40) = *(u16 *)(S + 0x20);
    *(u16 *)(b + 0x42) = 0;
    param_1[0x11] = *(u32 *)(SRC + 0x14);
    param_1[0x12] = *(u32 *)(SRC + 0x18);
    param_1[0x13] = *(u32 *)(SRC + 0x24);
    param_1[0x14] = *(u32 *)(SRC + 0x28);
    param_1[0x15] = *(u32 *)(SRC + 0x2c);
    *(u16 *)(b + 0x58) = *(u16 *)(SRC + 0x3a);
    *(u16 *)(b + 0x5a) = 0x7fff;
    *(u8 *)(b + 0x5c) = *(u8 *)(SRC + 0x40);
    *(u8 *)(b + 0x5d) = *(u8 *)(SRC + 0x41);
    *(u16 *)(b + 0x5e) = 0;
    param_1[1] = 0;
    param_1[0] = param_1[1];
    param_1[4] = 0;
    param_1[2] = param_1[4];
    param_1[5] = 0;
    param_1[3] = param_1[5];
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
}
