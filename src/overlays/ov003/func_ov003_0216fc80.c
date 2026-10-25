#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0216fc80(u8 *p)
{
    *(s16 *)(p + 0x152) = 0x187;
    *(u16 *)(p + 0x156) = 1;
    SwapByte(5, (vu8 *)(p + 0x93));
    func_02026c24(p);
    func_02025548(p);
    *(u32 *)(p + 0x464) = 0x1000;
}
