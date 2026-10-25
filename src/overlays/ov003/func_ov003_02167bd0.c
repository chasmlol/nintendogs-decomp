#pragma avoid_byte strb
#include "ctx.h"
extern void func_020266f8(u8 *p);
extern u8 func_02025650(u8 *p);

static inline void SwapB(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u8 func_ov003_02167bd0(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 17;
    SwapB(7, (vu8 *)(param_1 + 147));
    SwapB(1, (vu8 *)(param_1 + 152));
    func_020266f8(param_1);
    return func_02025650(param_1);
}
