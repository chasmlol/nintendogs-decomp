#pragma avoid_byte strb
#include "ctx.h"
extern u8 *data_02159034;

static inline void SwapB(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_02093c7c(s32 v)
{
    u8 *s;
    u8 *q;
    s = *(u8 **)(data_02159034 + 0x1000 + 0x41c);
    q = s + 96;
    if (*(s8 *)(q + 37) == v) {
        return;
    }
    SwapB(v, (vu8 *)(q + 37));
    *(u16 *)(s + 1536 + 174) = *(u16 *)(s + 1536 + 174) | 1;
}
