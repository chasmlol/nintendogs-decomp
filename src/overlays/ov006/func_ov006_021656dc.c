#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u8 *p);
extern u32 func_02025bb0(u8 *p);

static inline void SwapSix(u8 *p)
{
    u32 v = 6;
    *(u8 *)(p) = (u8)(v);
}

static inline u8 SwapRet(u32 v, u8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov006_021656dc(u8 *p)
{
    u8 r;
    u32 one;
    *(u16 *)(p + 0x152) = 17;
    SwapSix(p + 152);
    func_020266f8(p);
    func_02025bb0(p);
    one = 1;
    r = SwapRet(*(u8 *)(p + 0xb0) & ~1, p + 0xb0);
    *(u32 *)(p + 0x464) = one;
    return;
}
