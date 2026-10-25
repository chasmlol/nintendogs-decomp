#pragma avoid_byte strb
#include "ctx.h"
void func_020293d8(u8 *p, u16 a, u8 b)
{
    p[168] = 1;
    *(u16 *)(p + 256 + 18) = 0;
    *(u16 *)(p + 240) = a;
    p[165] = b;
}
