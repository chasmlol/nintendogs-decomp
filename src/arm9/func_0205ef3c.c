#pragma avoid_byte all
#include "ctx.h"

s32 func_0205ef3c(const void *src1, const void *src2, u32 n)
{
    const u8 *p1 = (const u8 *)src1;
    const u8 *p2 = (const u8 *)src2;

    for (; n > 0; n--)
        if (*p1++ != *p2++)
            return (*--p1 < *--p2) ? -1 : +1;
    return 0;
}
