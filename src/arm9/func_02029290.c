#pragma avoid_byte strb
#include "ctx.h"

void func_02029290(u8 *p, u32 a, u32 b)
{
    u32 z = 0;
    *(u8 *)(p + 168) = (u8)z;
    *(u16 *)(p + 256 + 18) = (u16)z;
    *(u16 *)(p + 240) = (u16)a;
    *(u8 *)(p + 165) = (u8)b;
}
