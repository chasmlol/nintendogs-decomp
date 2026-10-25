#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_02159034;

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

void func_020937f4(s32 param_1)
{
    u32 b = data_02159034;
    u32 r3;
    u8 *g;
    b += 0x1000;
    r3 = *(u32 *)(b + 0x41c);
    g = (u8 *)(r3 + 96);
    if (param_1 <= (s8)g[39]) {
        return;
    }
    SwapByte(param_1, (vu8 *)(g + 39));
    *(u16 *)(r3 + 1536 + 174) = *(u16 *)(r3 + 1536 + 174) | 1;
}
