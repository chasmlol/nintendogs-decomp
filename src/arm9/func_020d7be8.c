#include "ctx.h"

extern u32 data_0215ad40;

u32 func_020d7be8(void)
{
    u8 *p = (u8 *)data_0215ad40;
    if (*(s32 *)(p + 0x10c) == 1 && *(s32 *)(p + 0x110) == 1) {
        return 1;
    }
    return 0;
}
