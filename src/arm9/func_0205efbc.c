#pragma avoid_byte all
#include "ctx.h"

void *func_0205efbc(void *dst, const void *src, u32 n)
{
    u8 *d = dst;
    const u8 *s = src;
    while (n != 0) {
        *d++ = *s++;
        n--;
    }
    return dst;
}
