#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u8 *p);
extern void func_02025434(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov006_02165618(u8 *p)
{
    s32 k;
    *(u16 *)(p + 0x152) = 0x11;
    k = (__typeof__(k))(656);
    SwapByte(1, (vu8 *)(p + 0xab));
    *(s32 *)(p + 0x25c) = -k;
    func_020266f8(p);
    func_02025434(p);
    SwapByte(*(u8 *)(p + 0xb0) | 8, (vu8 *)(p + 0xb0));
    SwapByte(*(u8 *)(p + 0xb0) & ~1u, (vu8 *)(p + 0xb0)); return;
}
