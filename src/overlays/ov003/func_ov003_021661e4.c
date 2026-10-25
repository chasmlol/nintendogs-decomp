#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *a);
extern u8 func_020255a4(u8 *a);

u8 func_ov003_021661e4(u8 *param_1)
{
    u8 uVar1;
    u32 old;
    u32 v;
    u8 *t;
    *(u16 *)(param_1 + 0x152) = 0x116;
    t = param_1 + 151;
    v = 4;
    *(u8 *)(t) = (u8)(v);
    func_020264f4(param_1);
    uVar1 = func_020255a4(param_1);
    return uVar1;
}
