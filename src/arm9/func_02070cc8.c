#include "ctx.h"

extern u8 data_02151c60[];

void func_02070cc8(u32 i, u32 v)
{
    *(u32 *)(data_02151c60 + i * 0x24) = v;
}
