#include "ctx.h"

extern u8 *data_0215be48;

s32 func_02107fd0(void)
{
    s32 r = -1;
    u8 *p = data_0215be48;
    if (*(s32 *)(p + 0xb8) == 0xd) {
        u8 *q = p + 0x1d00;
        r = *(s16 *)(q + 0x4c);
    }
    return r;
}
