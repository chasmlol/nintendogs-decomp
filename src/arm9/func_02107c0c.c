#include "ctx.h"

extern u32 data_0215be48;

void func_02107c0c(u32 param_1)
{
    u8 *q = (u8 *)(*(u32 *)&data_0215be48 + 0x1000);
    *(u32 *)(q + 0xcf0) = param_1;
}
