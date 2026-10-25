#include "ctx.h"

extern u32 data_0215be48;

u32 func_021082f8(void)
{
    u32 r = 0;
    u32 p = *(u32 *)&data_0215be48;
    if (*(u32 *)(p + 0xb8) == 2) {
        r = *(u32 *)(p + 0xe8);
    }
    return r;
}
