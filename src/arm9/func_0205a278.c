#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(s32 a);
extern void func_02025bb0(s32 a);

void func_0205a278(s32 param_1)
{
    u32 v;
    u8 *r;
    *(u16 *)((u8 *)param_1 + 256 + 82) = 18;
    r = (u8 *)param_1 + 147;
    v = 5;
    *(u8 *)(r) = (u8)(v);
    r = (u8 *)param_1 + 151;
    v = 2;
    *(u8 *)(r) = (u8)(v);
    func_0202675c(param_1);
    func_02025bb0(param_1);
}
