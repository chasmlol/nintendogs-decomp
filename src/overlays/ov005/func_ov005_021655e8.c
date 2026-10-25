#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(s32 a);
extern u8 func_02025548(s32 a);

u8 func_ov005_021655e8(s32 param_1)
{
    s16 k;
    u32 v;
    u8 *q;
    vu8 *p;

    k = 59;
    q = (u8 *)param_1 + 256;
    *(s16 *)(q + 82) = k;
    p = (vu8 *)((u8 *)param_1 + 151);
    v = 1;
    *(u8 *)(p) = (u8)(v);
    func_02026bac(param_1);
    return func_02025548(param_1);
}
