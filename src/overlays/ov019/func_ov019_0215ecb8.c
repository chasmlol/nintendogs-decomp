#pragma avoid_byte strb
#include "ctx.h"

extern u8 *func_ov019_0215ccd8(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov019_0215ecb8(u8 *p)
{
    u8 *q;
    vu8 *a;
    u8 cur;
    q = func_ov019_0215ccd8(p);
    if (q == 0) {
        (u32)q; return;
    }
    *(u16 *)(q + 0x20) = *(u16 *)(q + 0x20) | 1;
    a = (vu8 *)(q + 1);
    cur = *(u8 *)(q + 1);
    SwapByte(cur | 1, a); return;
}
