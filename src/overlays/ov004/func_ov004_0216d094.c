#pragma avoid_byte strb
#include "ctx.h"

void func_02026b88(u32 p);
u32 func_02025bb0(u32 p);

static inline void SwapB(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u32 func_ov004_0216d094(u32 param_1)
{
    u16 k;
    u16 m;

    k = 0x11e;
    *(u16 *)((u8 *)param_1 + 256 + 82) = k;
    m = 58;
    *(u16 *)((u8 *)param_1 + 256 + 84) = m;
    SwapB(9, (vu8 *)(param_1 + 152));
    func_02026b88(param_1);
    return func_02025bb0(param_1);
}
