#pragma avoid_byte strb
#include "ctx.h"
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_020eaeec(u8 *o)
{
    u8 *q;
    switch (*(s16 *)(o + 0x90)) {
    case 2:
        q = *(u8 **)(o + 0x214);
        *(u32 *)(q + 4) = 0xffffffff;
        SwapByte(0x14, q + 9); return;
    case 0:
    case 1:
    case 3:
    default:
        (u32)o; return;
    }
}
