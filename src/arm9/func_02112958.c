#include "ctx.h"

extern u32 data_0215be48;

void func_02112958(s32 i, s32 j, u16 v)
{
    u8 *q = *(u8 **)&data_0215be48;
    q = q + (i << 11);
    q = q + (j << 4);
    q = q + 0x2800;
    *(u16 *)(q + 64) = v;
}
