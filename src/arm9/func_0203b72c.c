#include "ctx.h"

void func_0203b72c(u8 *param_1)
{
    s32 a = *(s32 *)(param_1 + 0x2dc);
    s32 b = *(s32 *)(param_1 + 0x2e8);
    *(s32 *)(param_1 + 0x3b4) = a + ((b - a) << 4);
    a = *(s32 *)(param_1 + 0x2e0);
    b = *(s32 *)(param_1 + 0x2ec);
    *(s32 *)(param_1 + 0x3b8) = a + ((b - a) << 4);
    a = *(s32 *)(param_1 + 0x2e4);
    b = *(s32 *)(param_1 + 0x2f0);
    *(s32 *)(param_1 + 0x3bc) = a + ((b - a) << 4);
    *(u16 *)(param_1 + 0x12e) = 0;
}
