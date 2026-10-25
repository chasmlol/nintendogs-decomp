#include "ctx.h"

u32 func_020bd7d4(u8 *p)
{
    if (*(s16 *)(p + 0x90) == 0 && *(s16 *)(p + 0x8a) == 0) {
        return 1;
    }
    return 0;
}
