#include "ctx.h"

extern u32 data_0215be48;

u32 func_0210e260(void)
{
    u32 r = 0;
    u32 p = *(u32 *)&data_0215be48;
    if (*(u32 *)(p + 0xb8) == 0x26) {
        r = *(u32 *)(p + 0xc4);
    }
    return r;
}
