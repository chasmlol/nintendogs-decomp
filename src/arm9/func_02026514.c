#include "ctx.h"
void func_02026514(u8 *param_1)
{
    s32 x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    *(s32 *)(param_1 + 0x240) = (s32)(((s64)x * -76 + 0x800) >> 12);
    *(u32 *)(param_1 + 0x244) = 0x111;
    *(u32 *)(param_1 + 0x24c) = 0xb36;
}
