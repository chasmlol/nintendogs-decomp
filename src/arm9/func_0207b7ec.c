#include "ctx.h"

void func_0207b7ec(u32 *param_1, u8 *param_2)
{
    param_1[0] = *(u32 *)(param_2 + 0x18);
    param_1[5] = *(u32 *)(param_2 + 0x1c);
    param_1[1] = 0;
    param_1[0xc] = (0x1000 - *(s32 *)(param_2 + 0x18)) * (u32)*(u16 *)(param_2 + 0x2c) * 8;
    param_1[0xd] = (0x1000 - *(s32 *)(param_2 + 0x1c)) * (u32)*(u16 *)(param_2 + 0x2e) * 8;
    param_1[4] = 0;
}
