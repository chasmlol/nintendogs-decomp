#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(u8 *p);
extern u8 func_02025548(u8 *p);

static inline void SwapKeep(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u8 func_0205a100(u8 *param_1)
{
    u8 uVar1;

    *(u16 *)((u32)(param_1 + 256) + 82) = 8;
    SwapKeep(5, (vu8 *)(param_1 + 147));
    func_02026494(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
