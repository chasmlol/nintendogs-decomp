#pragma avoid_byte strb
#include "ctx.h"
extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

static inline void SwapB(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u8 func_ov005_02165844(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 0x2f;
    SwapB(5, (vu8 *)(param_1 + 147));
    func_020264f4(param_1);
    return func_020255a4(param_1);
}
