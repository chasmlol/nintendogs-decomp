#pragma avoid_byte strb
#include "ctx.h"
extern void func_02025e34(u8 *p);
extern u8 func_02025c5c(u8 *p);
u8 func_0201e2f8(u8 *param_1)
{
    u8 uVar1;
    u32 old;
    u32 v;
    u8 *t;
    *(u16 *)(param_1 + 0x152) = 0x169;
    t = param_1 + 147;
    v = 5;
    *(u8 *)(t) = (u8)(v);
    func_02025e34(param_1);
    uVar1 = func_02025c5c(param_1);
    return uVar1;
}
