#include "ctx.h"

void func_0207aa64(u32 *param_1, u8 *param_2)
{
    param_1[0] = *(u32 *)(param_2 + 0x18);
    param_1[5] = *(u32 *)(param_2 + 0x1c);
    param_1[1] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = (u32)*(u16 *)(param_2 + 0x2e) * (*(s32 *)(param_2 + 0x1c) * -2 + 0x2000) * 8;
    param_1[4] = 0;
}
