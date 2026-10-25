#include "ctx.h"

BOOL func_02022dec(u8 *p, s32 a, u32 b)
{
    if (*(s16 *)(p + 0xf0) == a + 12 && p[0xa5] == b) {
        return 1;
    }
    return 0;
}
