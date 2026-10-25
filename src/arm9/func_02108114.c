#include "ctx.h"

extern u8 *data_0215be48;

void func_02108114(u16 param_1, u16 param_2)
{
    u8 *q = data_0215be48 + 0x4800;
    *(vu16 *)(q + 0xb4) = param_1;
    q = data_0215be48 + 0x4800;
    *(vu16 *)(q + 0xb6) = param_2;
}
