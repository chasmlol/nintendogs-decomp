#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern u32 func_02025b30(u8 *p);
extern void func_020340f4(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_021703a0(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x12;
    SwapByte(5, (vu8 *)(p + 0x93));
    SwapByte(1, (vu8 *)(p + 0x98));
    func_0202675c(p);
    func_02025b30(p);
    func_020340f4(p);
}
