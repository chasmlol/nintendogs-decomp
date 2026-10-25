#pragma avoid_byte strb
#include "ctx.h"

void func_02005d78(u8 *p, u16 w)
{
    u16 z = 0;
    s32 i;
    u8 v;
    u8 *t;
    *(u16 *)(p + 0) = z;
    *(u16 *)(p + 2) = z;
    *(u16 *)(p + 4) = z;
    *(u16 *)(p + 6) = 1;
    *(u16 *)(p + 8) = z;
    *(u16 *)(p + 10) = z;
    *(u16 *)(p + 12) = w;
    *(u16 *)(p + 14) = z;
    *(u32 *)(p + 16) = z;
    *(u32 *)(p + 20) = z;
    *(vu16 *)(p + 24) = 16;
    i = z;
    v = (u8)i;
    do {
        t = p + i + 26;
        *t = v;
        i = i + 1;
    } while (i < 192);
}
