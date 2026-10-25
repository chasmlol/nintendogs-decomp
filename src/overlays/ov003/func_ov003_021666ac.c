#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_02035164(u8 *p);
extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);

u8 func_ov003_021666ac(u8 *param_1)
{
    u32 r;
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x163;
    r = func_02035164(param_1);
    *(u16 *)((u8 *)param_1 + 256 + 88) = (u16)r;
    *(param_1 + 147) = 3;
    *(param_1 + 151) = 2;
    func_02026bac(param_1);
    return func_02025548(param_1);
}
