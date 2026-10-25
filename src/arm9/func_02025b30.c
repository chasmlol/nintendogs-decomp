#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02025b30(u8 *p)
{
    s32 v = *(s32 *)(*(u8 **)(p + 0x9e8) + 8);
    *(s32 *)(p + 0x920) = (s32)(((s64)v * 0x233c + 0x800) >> 12);
    if (*(s16 *)(p + 0xee) >= 960 && *(s16 *)(p + 0xee) <= 966) {
        (u32)p; return;
    }
    SwapByte(1, (vu8 *)(p + 0xaf)); return;
}
