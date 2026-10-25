#include "ctx.h"

extern u8 *data_ov007_02160d9c;

void func_ov007_0215e8c0(void)
{
    u8 *q = data_ov007_02160d9c + 0x100;
    *(u16 *)(q + 44) = 0x3c;
}
