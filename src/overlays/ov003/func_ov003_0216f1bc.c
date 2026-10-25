#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025e34(s32 a);
extern u8 func_02025bb0(s32 a);

u8 func_ov003_0216f1bc(u8 *param_1)
{
    s16 k;
    u32 v;
    u8 *q;
    vu8 *p;
    k = 0x166;
    q = param_1 + 256;
    *(s16 *)(q + 82) = k;
    p = (vu8 *)(param_1 + 147);
    v = 2;
    *(u8 *)(p) = (u8)(v);
    func_02025e34((s32)param_1);
    return func_02025bb0((s32)param_1);
}
