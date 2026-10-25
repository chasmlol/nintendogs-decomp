#pragma avoid_byte strb
#include "ctx.h"

void func_020266f8(u8 *p);
u8 func_02025bb0(u8 *a);

u8 func_0201e138(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 17;
    *(u16 *)(param_1 + 256 + 86) = 4;
    param_1[147] = 2;
    param_1[151] = 5;
    func_020266f8(param_1);
    return func_02025bb0(param_1);
}
