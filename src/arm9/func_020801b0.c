#include "ctx.h"

void func_020801b0(s32 param_1, u32 param_2)
{
    u8 *a = (u8 *)(param_1 * 4 + 0x2700000);
    u8 *b = a + 0xFF000;
    *(vu32 *)(b + 0xda0) = param_2;
}
