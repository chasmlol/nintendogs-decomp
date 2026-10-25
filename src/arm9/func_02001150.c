#include "ctx.h"

extern u8 data_0214e684[];

u32 func_02001150(u32 a)
{
    return *(u16 *)(data_0214e684 + 0x34) & a;
}
