#include "ctx.h"

extern u8 *data_0215be48;

u32 func_0210a530(void)
{
    u32 r = 0;
    u8 *p = data_0215be48;
    if (*(s32 *)(p + 0xb8) == 2) {
        r = *(u32 *)(p + 0x1000 + 0xd10);
    }
    return r;
}
