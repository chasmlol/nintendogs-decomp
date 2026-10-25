#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026b88(u8 *p);
extern u8 func_02025c5c(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov004_0216cf70(u8 *param_1)
{
    *(vu16 *)(param_1 + 256 + 82) = 18;
    SwapByte(7, (vu8 *)(param_1 + 147));
    func_02026b88(param_1);
    return func_02025c5c(param_1);
}
