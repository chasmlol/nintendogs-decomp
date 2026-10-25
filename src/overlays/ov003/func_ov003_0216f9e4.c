#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_020266f8(u8 *p);
extern void func_02025974(u8 *p);

void func_ov003_0216f9e4(u8 *p)
{
    *(u16 *)((u32)(p + 256) + 82) = 0x13d;
    SwapByte(7, (vu8 *)(p + 0x93));
    SwapByte(5, (vu8 *)(p + 0x98));
    SwapByte(1, (vu8 *)(p + 0xab));
    func_020266f8(p);
    func_02025974(p);
    SwapByte(2, (vu8 *)(p + 0xb2)); return;
}
