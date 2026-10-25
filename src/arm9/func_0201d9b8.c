#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u8 *p);
extern u8 func_02025bb0(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_0201d9b8(u8 *param_1)
{
    *(vu16 *)(param_1 + 256 + 82) = 17;
    SwapByte(5, (vu8 *)(param_1 + 147));
    func_020266f8(param_1);
    return func_02025bb0(param_1);
}
