#include "ctx.h"

extern u8 *data_0215be48;

u32 func_0210a554(void)
{
    u32 r = 0;
    u8 *p = data_0215be48;
    if (*(vu32 *)(p + 0xb8) == 2) {
        r = *(vu32 *)(p + 0x1d0c);
    }
    return r;
}
