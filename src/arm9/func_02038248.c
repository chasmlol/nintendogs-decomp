#include "ctx.h"

extern u32 *data_0214f464;

s16 func_02038248(void)
{
    u32 *p = data_0214f464;
    u32 s;
    u16 bit;
    s32 r;
    s = *p * 0x10dcd + 1;
    bit = (u16)((s << 16) >> 31);
    r = 0x141 + bit;
    *p = s;
    return (s16)r;
}
