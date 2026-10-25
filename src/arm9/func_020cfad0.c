#include "ctx.h"

u32 func_020cfad0(u8 *p)
{
    if (*(s32 *)(p + 0x34) == 0x11 && *(s32 *)(p + 4) < 0xa000) {
        return 1;
    }
    return 0;
}
