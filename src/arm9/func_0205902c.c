#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_020256a0(u8 *p);
extern void func_0202c0ec(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0205902c(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x79;
    SwapByte(1, (vu8 *)(p + 0x97));
    func_02026bac(p);
    func_020256a0(p);
    func_0202c0ec(p);
}
