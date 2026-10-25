#include "ctx.h"

extern u8 *data_0215ad40;

void func_020d7fa4(u32 param_1, u32 param_2)
{
    *(vu32 *)(data_0215ad40 + 0x118) = param_1;
    *(vu32 *)(data_0215ad40 + 0x11c) = param_2;
}
