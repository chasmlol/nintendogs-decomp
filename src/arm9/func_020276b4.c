#pragma avoid_byte strb
#include "ctx.h"

extern s8 data_0213c42d[];

void func_020276b4(u8 *p, u32 b)
{
    s8 c;
    p[179] = b;
    if (b != 0) {
        return;
    }
    c = data_0213c42d[(u32)*(u16 *)(*(u8 **)(p + 0x9e8)) * 100];
    if (c == 1) {
        goto body;
    }
    if (c == 2) {
        goto body;
    }
    if (c != 3) {
        return;
    }
body:
    *(u16 *)(p + 0x158) = 16;
}
