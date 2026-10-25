#include "ctx.h"

u32 func_02026fe0(u8 *p)
{
    s16 v = *(s16 *)(p + 0xf0);
    if (v >= 10 && v < 0x6f) {
        return 1;
    }
    return 0;
}
