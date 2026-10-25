#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov003_02167fd0(u8 *param_1)
{
    u8 *t;
    u32 old;
    u32 v;
    *(u16 *)((u8 *)param_1 + 256 + 82) = 254;
    t = param_1 + 151;
    v = 1;
    *(u8 *)(t) = (u8)(v);
    func_02026bac(param_1);
    return func_020255a4(param_1);
}
