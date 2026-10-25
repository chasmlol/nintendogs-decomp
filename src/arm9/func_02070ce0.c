#include "ctx.h"

extern u8 data_02151c5c;

void func_02070ce0(u32 i, u32 v)
{
    *(u32 *)((u8 *)&data_02151c5c + i * 36) = (u16)v;
}
