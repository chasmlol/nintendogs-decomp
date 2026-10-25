#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026478(u8 *p);
extern u8 func_020255a4(u8 *p);
extern void func_0202c0ec(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_021681a0(u8 *p)
{
    *(u16 *)(p + 0x152) = 0xf5;
    SwapByte(1, (vu8 *)(p + 0x97));
    func_02026478(p);
    func_020255a4(p);
    *(u32 *)(p + 0x484) = 1;
    func_0202c0ec(p);
}
