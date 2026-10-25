#pragma avoid_byte strb
#include "ctx.h"

extern u16 func_020382d8(u8 *p);
extern void func_02026994(u8 *p);
extern u8 func_02025bb0(u8 *p);

u8 func_0205a790(u8 *param_1)
{
    u16 t;
    t = func_020382d8(param_1);
    *(u16 *)(param_1 + 256 + 82) = t;
    *(u8 *)(param_1 + 147) = 5;
    *(u8 *)(param_1 + 152) = 9;
    func_02026994(param_1);
    return func_02025bb0(param_1);
}
