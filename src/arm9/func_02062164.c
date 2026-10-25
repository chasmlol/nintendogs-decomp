#include "ctx.h"
extern u32 data_0213e400;
u32 func_02062164(void)
{
    u32 s = data_0213e400 * 0x41c64e6d + 0x3039;
    data_0213e400 = s;
    return (s >> 16) & 0x7fff;
}
