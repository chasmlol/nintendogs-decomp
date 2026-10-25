#include "ctx.h"

extern u8 data_0212fcc4;

u32 func_020932f8(u8 *p)
{
    s8 i = *(s8 *)(p + 0xf);
    u32 r = 0;
    if (i >= 0) {
        r = (u32)&data_0212fcc4 + i * 4;
    }
    return r;
}
