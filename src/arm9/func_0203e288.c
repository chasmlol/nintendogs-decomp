#pragma avoid_byte strb
#include "ctx.h"
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_0203e288(u8 *obj, s16 idx)
{
    u8 *q;
    if (idx < 0) {
        return;
    }
    if (idx >= 20) {
        return;
    }
    SwapByte(1, obj + 163);
    *(s16 *)(obj + 248) = idx;
    q = obj + 256;
    *(u16 *)(q + 24) = 180;
    *(u16 *)(q + 30) = 0;
}
