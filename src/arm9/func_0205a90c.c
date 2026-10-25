#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern u8 func_02025bb0(u8 *p);

u8 func_0205a90c(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 18;
    param_1[147] = 5;
    param_1[152] = 9;
    func_0202675c(param_1);
    return func_02025bb0(param_1);
}
