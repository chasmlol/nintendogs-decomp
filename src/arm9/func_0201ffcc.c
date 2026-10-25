#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02023654(u8 *p, s32 a, s32 b);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0201ffcc(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x113;
    SwapByte(4, (vu8 *)(p + 0x97));
    func_02026c24(p);
    func_02025548(p);
    func_02023654(p, 0x34, 1);
}
