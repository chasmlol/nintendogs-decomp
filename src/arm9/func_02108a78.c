#include "ctx.h"

extern u8 *data_0215be48;

u32 func_02108a78(void)
{
    u32 r = 0;
    u8 *p = data_0215be48;
    if (*(s32 *)(p + 0xa8) != 7) {
        return 0;
    }
    if (*(s32 *)(p + 0xb8) == 2) {
        r = *(u32 *)(p + 0xe0);
    }
    return r;
}
