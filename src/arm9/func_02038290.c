#include "ctx.h"
extern u32 *data_0214f464;
s32 func_02038290(void)
{
    u32 * p = data_0214f464;
    u32 x = *p;
    u32 nv = x * 0x10dcd + 1;
    u32 t;
    t = (nv << 16) >> 31;
    t = (int)t << 16;
    *p = nv;
    return (s16)(0x13f + (t >> 16));
}
