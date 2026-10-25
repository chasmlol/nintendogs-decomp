#include "ctx.h"

extern u8 *data_0215be48;

u32 func_02108880(void)
{
    u32 r = 0;
    u8 *s = data_0215be48;
    if (*(u32 *)(s + 0xa8) != 6) {
        return 0;
    }
    if (*(u32 *)(s + 0xb8) == 2) {
        r = *(u32 *)(s + 0xe0);
    }
    return r;
}
