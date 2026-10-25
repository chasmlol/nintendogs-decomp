#include "ctx.h"

extern u32 data_ov028_0215df14;

u32 func_ov028_0215cac8(void)
{
    u8 *p = (u8 *)data_ov028_0215df14;
    if (*(s32 *)(p + 0x108) == 1 && *(s32 *)(p + 0x10c) == 1) {
        return 1;
    }
    return 0;
}
