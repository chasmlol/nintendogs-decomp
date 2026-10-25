#include "ctx.h"

extern u32 data_02152260;

void func_0207175c(u32 i, u32 v)
{
    u8 *q = *(u8 **)(*(u8 **)&data_02152260 + 0x80);
    *(u32 *)(q + (i << 4) + 0x14) = v;
}
