#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026b08(u8 *p);
extern u8 func_02025bb0(u8 *p);
u8 func_ov003_0216f4a4(u8 *param_1)
{
    u8 uVar1;
    u32 old;
    u32 v;
    u8 *t;
    *(u16 *)(param_1 + 0x152) = 0x150;
    t = param_1 + 147;
    v = 10;
    *(u8 *)(t) = (u8)(v);
    func_02026b08(param_1);
    uVar1 = func_02025bb0(param_1);
    return uVar1;
}
