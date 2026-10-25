#pragma avoid_byte all
#pragma opt_common_subs off
#include "ctx.h"

extern u32 func_0205eea0(u8 *pb, u16 c);
extern void func_02062470(u8 *d, u8 *s, u32 n);

u32 func_0205ede4(u8 *param_1, u16 *param_2, u32 param_3)
{
    u32 buf;
    s32 uv;
    u32 iv;
    u8 *pb;
    u16 c;

    uv = 0;
    if (param_1 == 0) goto ret0;
    if (param_2 != 0) goto body;
ret0:
    return 0;
body:
    pb = (u8 *)&buf;
    for (;;) {
        c = *param_2;
        if (c == 0) {
            *(param_1 + uv) = 0;
            goto fin;
        }
        param_2 = param_2 + 1;
        iv = func_0205eea0(pb, c);
        if (uv + iv > param_3) goto fin;
        func_02062470(param_1 + uv, pb, iv);
        uv = uv + iv;
        if (uv > param_3) goto fin;
    }
fin:
    return uv;
}
