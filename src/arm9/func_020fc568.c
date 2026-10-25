#include "ctx.h"

extern u8 *data_0215be48;

void func_020fc568(void)
{
    u8 *q = data_0215be48 + 0x5000;
    *(vu32 *)(q + 0x34) = 0;
}
