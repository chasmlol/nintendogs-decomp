#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, s32 x);

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216d5f4(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x21e;
    SwapByte(9, p + 152);
    SwapByte(4, p + 151);
    func_020264f4(p);
    func_020255a4(p);
    func_0202db24(p, 4);
}
