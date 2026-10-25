#pragma avoid_byte strb
#include "ctx.h"

void func_020266f8(u8 *p);
u8 func_02025bb0(u8 *p);

u8 func_ov003_021700bc(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 17;
    param_1[147] = 5;
    param_1[152] = 6;
    param_1[151] = 2;
    func_020266f8(param_1);
    return func_02025bb0(param_1);
}
