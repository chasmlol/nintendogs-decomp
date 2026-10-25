#include "ctx.h"

void func_020055dc(u8 *param_1, u32 param_2, u32 param_3, u32 param_4,
                   u32 param_5, u32 param_6, u32 param_7, u32 param_8)
{
    *(u16 *)(param_1 + 0x10) = param_2;
    *(u16 *)(param_1 + 0x14) = param_4;
    *(u16 *)(param_1 + 0x16) = param_5;
    *(u16 *)(param_1 + 0x12) = param_3;
    *(u16 *)(param_1 + 0x18) = param_6;
    *(u16 *)(param_1 + 0x1a) = param_7;
    *(u16 *)(param_1 + 0x1c) = param_8;
}
