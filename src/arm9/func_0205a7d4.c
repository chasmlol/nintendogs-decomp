#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026aac(u8 *p);
extern u32 func_02025bb0(u8 *p);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u32 func_0205a7d4(u8 *param_1)
{
    *(vu16 *)(param_1 + 0x152) = 19;
    SwapByte(5, (vu8 *)(param_1 + 147));
    SwapByte(9, (vu8 *)(param_1 + 152));
    func_02026aac(param_1);
    return func_02025bb0(param_1);
}
