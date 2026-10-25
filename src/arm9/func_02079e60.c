#include "ctx.h"
#pragma opt_common_subs off

u32 func_02079e60(u8 *param_1, u32 param_2, u32 param_3)
{
    u32 s;
    u32 t;
    u8 *q;
    u8 *iv;
    u32 uv;
    u32 bound;
    u32 k;
    u32 ib;
    u32 ia;

    if ((param_2 & 0x20000000) != 0) {
        return (u16)param_2;
    }
    iv = param_1 + (param_2 & 0xffff);
    if ((param_2 & 0xc0000000) == 0) {
        return iv[param_3];
    }
    uv = param_2 & 0x1fff0000;
    bound = uv >> 16;
    if ((param_2 & 0x40000000) == 0) {
        goto q4;
    }
    if ((param_3 & 1) == 0) {
        goto p70;
    }
    if (param_3 > bound) {
        q = iv + (bound >> 1);
        return q[1];
    }
    k = param_3 >> 1;
    q = iv + k;
    s = *(vu8 *)&iv[k];
    t = *(vu8 *)&q[1];
    return ((s + t) * 0x8000u) >> 16;
p70:
    return iv[param_3 >> 1];
q4:
    if ((param_3 & 3) == 0) {
        goto e4;
    }
    if (param_3 > bound) {
        q = iv + (bound >> 2);
        return q[param_3 & 3];
    }
    if ((param_3 & 1) == 0) {
        goto c8;
    }
    if ((param_3 & 2) != 0) {
        ib = param_3 >> 2;
        param_3 = ib + 1;
    } else {
        param_3 >>= 2;
        ib = param_3 + 1;
    }
    param_3 = iv[param_3];
    ib = iv[ib];
    return ((param_3 * 3u + ib) * 0x4000u) >> 16;
c8:
    k = param_3 >> 2;
    q = iv + k;
    s = *(vu8 *)&iv[k];
    t = *(vu8 *)&q[1];
    return ((s + t) * 0x8000u) >> 16;
e4:
    return iv[param_3 >> 2];
}
