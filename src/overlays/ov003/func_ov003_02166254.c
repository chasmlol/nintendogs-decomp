#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov003_02166254(u8 *param_1)
{
    s16 k;
    u32 v;
    u8 *q;
    vu8 *p;
    k = 276;
    q = param_1 + 256;
    *(s16 *)(q + 82) = k;
    p = (vu8 *)(param_1 + 151);
    v = 4;
    *(u8 *)(p) = (u8)(v);
    func_020264f4(param_1);
    return func_020255a4(param_1);
}
