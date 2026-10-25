#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026bac(u8 *p);
extern u8 func_02025d14(u8 *p);
u8 func_0201d400(u8 *param_1)
{
    u8 uVar1;
    u32 old;
    u32 v;
    u8 *t;
    *(u16 *)(param_1 + 0x152) = 0xa6;
    t = param_1 + 152;
    v = 1;
    *(u8 *)(t) = (u8)(v);
    func_02026bac(param_1);
    uVar1 = func_02025d14(param_1);
    return uVar1;
}
