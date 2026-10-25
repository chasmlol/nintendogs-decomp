#include "ctx.h"

extern u32 data_0214f464;

s32 func_02044ce4(s32 n)
{
    u8 *q = *(u8 **)&data_0214f464;
    return *(s8 *)(q + n + 0x1c);
}
