#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bd0(u8 *p);
extern u8 func_02025548(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov003_0216e2bc(u8 *param_1)
{
    *(vu16 *)(param_1 + 338) = 176;
    SwapByte(4, (vu8 *)(param_1 + 151));
    func_02026bd0(param_1);
    return func_02025548(param_1);
}
