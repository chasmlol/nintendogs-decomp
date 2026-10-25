#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, int n);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_02169bd4(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x218;
    SwapByte(9, p + 0x98);
    SwapByte(4, p + 0x97);
    func_020264f4(p);
    func_020255a4(p);
    func_0202db24(p, 0);
}
