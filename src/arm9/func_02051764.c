#include "ctx.h"

u32 func_02051764(u8 *p)
{
    s32 v = *(s16 *)(p + 0xea);
    if (v >= 0x2a1) {
        if (v <= 0x2b8) {
            return 1;
        }
    }
    return 0;
}
