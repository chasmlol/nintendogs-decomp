#include "ctx.h"

void func_0207ba24(u32 *param_1, u8 *param_2)
{
    param_1[0] = 0x1000;
    param_1[5] = 0x1000;
    param_1[1] = 0;
    param_1[0xc] = -*(s32 *)(param_2 + 0x24) * *(u16 *)(param_2 + 0x2c) * 0x10;
    param_1[0xd] = *(s32 *)(param_2 + 0x28) * *(u16 *)(param_2 + 0x2e) * 0x10;
    param_1[4] = 0;
}
