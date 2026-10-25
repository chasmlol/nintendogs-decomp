#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u8 *p);
extern u8 func_02025c5c(u8 *p);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u8 func_0201e21c(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 0x16e;
    SwapByte(4, (vu8 *)(param_1 + 151));
    func_020266f8(param_1);
    return func_02025c5c(param_1);
}
