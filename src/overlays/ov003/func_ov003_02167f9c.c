#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_020255a4(u8 *p);

static inline void SwapOne(u8 *p)
{
    u32 v = 1;
    *(u8 *)(p) = (u8)(v);
}

u8 func_ov003_02167f9c(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0xff;
    SwapOne(param_1 + 151);
    func_02026bac(param_1);
    return func_020255a4(param_1);
}
