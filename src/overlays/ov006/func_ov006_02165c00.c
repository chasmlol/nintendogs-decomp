#pragma avoid_byte strb
#include "ctx.h"
extern void func_0202675c(u8 *p);
extern u8 func_02025bb0(u8 *p);
u8 func_ov006_02165c00(u8 *param_1)
{
    u8 uVar1;
    u32 old;
    u32 v;
    u8 *t;
    *(u16 *)(param_1 + 0x152) = 0x12;
    t = param_1 + 147;
    v = 5;
    *(u8 *)(t) = (u8)(v);
    func_0202675c(param_1);
    uVar1 = func_02025bb0(param_1);
    return uVar1;
}
