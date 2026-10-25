#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020382d8(u8 *p);
extern void func_02026994(u8 *p);
extern s32 func_02025bb0(u8 *p);

s32 func_ov006_02165b94(u8 *param_1)
{
    u32 r;
    r = func_020382d8(param_1);
    *(u16 *)((u8 *)param_1 + 256 + 82) = (u16)r;
    *(u8 *)(param_1 + 147) = 5;
    func_02026994(param_1);
    return func_02025bb0(param_1);
}
