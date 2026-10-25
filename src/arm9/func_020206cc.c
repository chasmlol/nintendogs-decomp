#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026c24(u8 *p);
extern u8 func_02025a84(u8 *p);

static inline void SwapB(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u8 func_020206cc(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x28;
    SwapB(10, (vu8 *)(param_1 + 147));
    func_02026c24(param_1);
    return func_02025a84(param_1);
}
