#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020382d8(u8 *p);
extern void func_02026994(u8 *p);
extern u8 func_02025bb0(u8 *p);

u8 func_ov003_0216ffd4(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = (u16)func_020382d8(param_1);
    *(param_1 + 147) = 5;
    *(param_1 + 152) = 6;
    *(param_1 + 151) = 2;
    func_02026994(param_1);
    return func_02025bb0(param_1);
}
