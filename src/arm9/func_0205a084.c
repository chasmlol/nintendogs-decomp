#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern void func_020257b4(u8 *p);
extern void func_02023654(u8 *p, s32 a, s32 b);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0205a084(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x12;
    SwapByte(5, (vu8 *)(p + 0x93));
    func_0202675c(p);
    func_020257b4(p);
    func_02023654(p, 0x3a, 1);
}
