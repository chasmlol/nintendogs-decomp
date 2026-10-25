#pragma avoid_byte strb
#include "ctx.h"

static inline void SwapV(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

extern void func_02026494(s32 a);
extern u8 func_02025804(s32 a);
extern void func_02034198(s32 a);

void func_ov003_02165898(s32 param_1)
{
    s32 k = 0xa4;
    u8 *q = (u8 *)param_1 + 256;
    *(s16 *)(q + 82) = k;
    SwapV(0x13, (u8 *)(param_1 + 0x93));
    func_02026494(param_1);
    func_02025804(param_1);
    func_02034198(param_1);
}
