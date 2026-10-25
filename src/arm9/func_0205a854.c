#pragma avoid_byte strb
#include "ctx.h"

void func_020266f8(u8 *p);
u8 func_02025bb0(u8 *p);

u8 func_0205a854(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 17;
    param_1[147] = 5;
    param_1[152] = 9;
    func_020266f8(param_1);
    return func_02025bb0(param_1);
}
