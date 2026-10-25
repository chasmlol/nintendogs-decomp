#pragma avoid_byte strb
#include "ctx.h"

void func_02026b88(u8 *p);
u8 func_020254ec(u8 *p);

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u8 func_ov004_0216cfe4(u8 *param_1)
{
    u32 k;
    u8 *q;
    k = 0x20b;
    q = param_1 + 256;
    *(u16 *)(q + 82) = k;
    SwapByte(5, param_1 + 147);
    SwapByte(1, param_1 + 152);
    func_02026b88(param_1);
    return func_020254ec(param_1);
}
