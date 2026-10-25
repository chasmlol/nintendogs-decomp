#pragma avoid_byte strb
#include "ctx.h"

void func_020264f4(u32 p);
u32 func_02025860(u32 p);

u32 func_ov003_0216cd48(u32 param_1)
{
    s16 v;
    u8 *p151;
    v = *(s16 *)((u8 *)param_1 + 256 + 82);
    p151 = (u8 *)param_1 + 151;
    if (v == 153) {
        v = 145;
    }
    *(s16 *)((u8 *)param_1 + 256 + 82) = v;
    ((u8 *)param_1)[147] = 9;
    *p151 = 4;
    func_020264f4(param_1);
    return func_02025860(param_1);
}
