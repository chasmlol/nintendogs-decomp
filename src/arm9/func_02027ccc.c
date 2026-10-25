#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02027ccc(u8 *p, u32 p1)
{
    u8 *t;
    s32 i;
    u32 best;
    s32 mx;
    s32 val;
    s32 v;
    vu8 *q;
    u32 r;

    SwapByte(1, (vu8 *)(p + 210));
    best = 0;
    mx = best;
    SwapByte(p1, (vu8 *)(*(u8 **)(p + 0x9e8) + 114));
    i = best;
    t = *(u8 **)(p + 0x9e8);
    do {
        val = *(s16 *)(t + 80 + (s16)i * 2);
        if (mx <= val) {
            mx = val;
            best = i;
        }
        i = (s8)(i + 1);
    } while (i < 5);
    SwapByte(best, (vu8 *)(p + 142));
    v = *(s8 *)(p + 142);
    q = (vu8 *)(p + 141);
    SwapByte(v, q);
    switch (*(u8 *)(*(u8 **)(p + 0x9e8) + 0x72)) {
    case 0:
    case 1:
    case 2:
        v = *(s8 *)(p + 142);
        if (v == 3) goto L7;
        if (v != 4) { SwapByte(5, q); return; }
    L7:
        { SwapByte(7, (vu8 *)((u32)p + 141)); return; }
    case 3:
    case 4:
        v = *(s8 *)(p + 142);
        if (v == 3) goto L8;
        if (v != 4) { SwapByte(6, q); return; }
    L8:
        r = SwapByte(8, (vu8 *)((u32)p + 141));
        goto fin;
    default:
        r = (u32)p;
        goto fin;
    }
fin:
    return;
}
