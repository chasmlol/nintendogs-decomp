#include "ctx.h"

extern u32 data_0215be48;

u32 func_02108c0c(void)
{
    u32 r = 0;
    u8 *p = (u8 *)data_0215be48;
    if (*(u32 *)(p + 0xa8) != 5) {
        return 0;
    }
    if (*(u32 *)(p + 0xb8) == 2) {
        r = *(u32 *)(p + 0xe0);
    }
    return r;
}
