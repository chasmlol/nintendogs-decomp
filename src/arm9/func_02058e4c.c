#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_020256a0(u8 *p);

u8 func_02058e4c(u8 *param_1)
{
    s16 k;
    u32 v;
    u8 *q;
    vu8 *p;
    k = 251;
    q = param_1 + 256;
    *(s16 *)(q + 82) = k;
    p = (vu8 *)(param_1 + 147);
    v = 10;
    *(u8 *)(p) = (u8)(v);
    p = (vu8 *)(param_1 + 151);
    v = 1;
    *(u8 *)(p) = (u8)(v);
    func_02026bac(param_1);
    return func_020256a0(param_1);
}
