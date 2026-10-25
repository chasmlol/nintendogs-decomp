#pragma avoid_byte strb
#include "ctx.h"

extern u8 *volatile data_02159034;

s32 func_02093cbc(void)
{
    u8 *b;
    u8 *w;
    s32 res;
    s32 wb;
    s32 cnt;
    u32 off;
    u8 *e;

    res = 0;
    b = *(u8 **)(data_02159034 + 0x1000 + 0x41c);
    w = b + 96;
    wb = *(s8 *)(w + 37);
    cnt = 0;
    off = 0;
    e = b + 584;
    do {
        s32 c;
        s32 k;
        s32 t;
        k = *(s16 *)(e + off);
        t = *(s8 *)(e + off + 2);
        c = *(s8 *)(e + off + 3);
        if (c > 0 && t == 2 && k == wb) {
            res = c;
            break;
        }
        cnt = (s16)(cnt + 1);
        off = off + 4;
    } while (cnt < 200);
    if (res <= 0) {
        *(u8 *)(w + 37) = 0;
        *(u16 *)(b + 1536 + 174) = *(u16 *)(b + 1536 + 174) | 1;
    }
    return *(s8 *)(w + 37);
}
