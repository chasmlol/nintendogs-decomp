#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202687c(s32 a);
extern u8 func_02025bb0(s32 a);

u8 func_ov003_02170108(s32 param_1)
{
    u32 v;
    vu8 *r;
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x16;
    r = (vu8 *)((u8 *)param_1 + 147);
    v = 5;
    *(u8 *)(r) = (u8)(v);
    func_0202687c(param_1);
    return func_02025bb0(param_1);
}
