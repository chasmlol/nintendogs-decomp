#include "ctx.h"

extern u32 data_0215be48;

void func_0211305c(s32 param_1, s32 param_2)
{
    u8 *e = (u8 *)(param_1 * 660 + (data_0215be48 + 0x1dec));
    if (param_2 == 0) {
        *(s32 *)(e + 0x18) = 0;
    } else {
        *(s32 *)(e + 0x18) = param_2;
    }
}
