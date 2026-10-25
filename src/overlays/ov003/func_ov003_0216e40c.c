#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);

static inline void SwapB(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u8 func_ov003_0216e40c(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 0x176;
    SwapB(5, (vu8 *)(param_1 + 147));
    func_02026bac(param_1);
    return func_02025548(param_1);
}
