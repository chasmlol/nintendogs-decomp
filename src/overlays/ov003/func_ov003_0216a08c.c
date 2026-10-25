#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264d4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, s32 x);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216a08c(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x1b8;
    SwapByte(13, p + 0x93);
    SwapByte(3, p + 0x91);
    func_020264d4(p);
    func_020255a4(p);
    func_0202db24(p, 3);
}
