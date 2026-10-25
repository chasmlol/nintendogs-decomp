#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov005_021652f8(u8 *param_1)
{
    u8 *r;
    u32 v;

    *(u16 *)(param_1 + 256 + 82) = 9;
    r = param_1 + 147;
    v = 3;
    *(u8 *)(r) = (u8)(v);
    func_020264f4(param_1);
    return func_020255a4(param_1);
}
