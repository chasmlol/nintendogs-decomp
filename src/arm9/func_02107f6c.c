#include "ctx.h"

extern u8 *data_0215be48;

u32 func_02107f6c(void)
{
    u32 r = 1;
    u8 *p = data_0215be48;
    if (*(s32 *)(p + 0xb8) == 2) {
        r = *(u32 *)(p + 0xdc);
    }
    return r;
}
