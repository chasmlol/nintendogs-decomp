#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);

u8 func_ov003_0216f0d0(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 16;
    *(param_1 + 147) = 5;
    *(param_1 + 151) = 1;
    func_02026bac(param_1);
    return func_02025548(param_1);
}
