#include "ctx.h"

extern u32 data_0214f464;

void func_02044cb0(u32 i)
{
    *(u32 *)(*(u8 **)&data_0214f464 + i * 4 + 0x54) = 0;
}
