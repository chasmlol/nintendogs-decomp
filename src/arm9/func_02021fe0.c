#include "ctx.h"

extern u32 data_0214f464;

s32 func_02021fe0(s32 x)
{
    u8 *p = *(u8 **)&data_0214f464;
    s32 r;
    if (x == *(s8 *)(p + 10)) {
        r = *(s16 *)(p + 0x20);
    } else {
        r = -1;
    }
    return r;
}
