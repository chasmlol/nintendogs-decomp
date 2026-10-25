#pragma avoid_byte strb
#include "ctx.h"
extern void func_02025e34(u8 *p);
extern u8 func_02025bb0(u8 *p);

static inline void SwapB(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u8 func_0205a6d0(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x167;
    SwapB(2, (vu8 *)(p + 0x93));
    func_02025e34(p);
    return func_02025bb0(p);
}
