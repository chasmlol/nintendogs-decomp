#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025dd4(u8 *p);
extern void func_02025490(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02164214(u8 *p)
{
    u32 one;
    u8 *q;
    one = 1;
    *(s16 *)(p + 0x152) = 0x15b;
    *(u16 *)(p + 0x156) = one;
    SwapByte(18, (vu8 *)(p + 0x93));
    q = (__typeof__(q))((u32)(p) + (151));
    SwapByte(one, (vu8 *)q);
    SwapByte(2, (vu8 *)(p + 0x9e));
    func_02025dd4(p);
    func_02025490(p);
    *(vu32 *)(p + 0x948) = *(vu32 *)(p + 0x948) | 4;
}
