#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026bac(u8 *p);
extern u8 func_02025cb8(u8 *p);

static inline void SwapB(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u8 func_0205a650(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 0;
    SwapB(4, (vu8 *)(param_1 + 147));
    SwapB(2, (vu8 *)(param_1 + 151));
    func_02026bac(param_1);
    return func_02025cb8(param_1);
}
