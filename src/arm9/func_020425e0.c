#include "ctx.h"

extern u8 *data_0214f464;

s32 func_020425e0(s32 i)
{
    u8 *q = *(u8 **)&data_0214f464;
    return *(s8 *)(q + i + 0x16);
}
