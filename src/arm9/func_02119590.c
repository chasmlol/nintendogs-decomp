#include "ctx.h"

extern u8 *data_0215be48;

void func_02119590(s32 *param_1)
{
    param_1[0xa] = param_1[0xa] + 1;
    if (param_1[0xa] > 0) {
        u8 *q = data_0215be48 + 0x4000;
        *(u32 *)(q + 0x868) = 1;
    }
}
