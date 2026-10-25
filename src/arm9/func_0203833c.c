#include "ctx.h"

extern u32 data_0214f464;

s16 func_0203833c(void)
{
    u32 *p = (u32 *)data_0214f464;
    u32 n = *p * 0x10dcd + 1;
    u32 t;
    *p = n;
    t = (n << 16) >> 31;
    return (s16)((u16)(t << 16 >> 16) + 340);
}
