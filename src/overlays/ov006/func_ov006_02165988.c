#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern u8 func_02025bb0(u8 *p);

u8 func_ov006_02165988(u8 *param_1)
{
    s16 k;
    u32 v;
    u8 *q;
    vu8 *p;
    k = 18;
    q = param_1 + 256;
    *(s16 *)(q + 82) = k;
    p = (vu8 *)(param_1 + 171);
    v = 1;
    *(u8 *)(p) = (u8)(v);
    func_0202675c(param_1);
    return func_02025bb0(param_1);
}
