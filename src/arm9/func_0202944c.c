#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02029534(u8 *p, s32 a, s32 b);

void func_0202944c(u8 *p, s32 a, s32 b, s32 c)
{
    s16 v;

    if (c < 0)
        return;
    if (func_02029534(p, a, b) == 0)
        a = (s8)(-a);
    v = *(s16 *)(p + 240);
    if (v > 0 && v < 111) {
        if (a <= 0)
            return;
        if (a == v)
            return;
    }
    p[0xa8] = 0;
    *(u16 *)(p + 0x112) = 0;
    *(s16 *)(p + 0xf0) = 111;
    p[0xa5] = 0;
    p[0xa3] = 0;
    p[0xa8] = 1;
    *(s16 *)(p + 0xf0) = a;
    p[0xa5] = b;
    *(u16 *)(p + 0x112) = c;
}
