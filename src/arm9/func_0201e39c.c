#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025e34(s32 a);
extern void func_02025c5c(s32 a);

void func_0201e39c(s32 param_1)
{
    u32 v;
    u8 *r;
    *(s16 *)((u8 *)param_1 + 256 + 82) = 0x165;
    r = (u8 *)param_1 + 147;
    v = 5;
    *(u8 *)(r) = (u8)(v);
    func_02025e34(param_1);
    func_02025c5c(param_1);
}
