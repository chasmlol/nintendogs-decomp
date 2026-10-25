#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026478(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02034198(u8 *p);
extern void func_ov003_0216df24(u8 *p);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_021657a4(u8 *p)
{
    *(u16 *)(p + 0x152) = 0;
    *(u16 *)(p + 0x154) = 0x31;
    *(u16 *)(p + 0x156) = 0x12;
    SwapByte(7, p + 0x93);
    SwapByte(9, p + 0x98);
    func_02026478(p);
    func_02025548(p);
    func_02034198(p);
    func_ov003_0216df24(p);
}
