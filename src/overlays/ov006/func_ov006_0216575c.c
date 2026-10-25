#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(s32 a);
extern void func_02025bb0(s32 a);

void func_ov006_0216575c(s32 param_1)
{
    u32 v;
    u8 *r;
    *(s16 *)((u8 *)param_1 + 256 + 82) = 0;
    r = (u8 *)param_1 + 151;
    v = 2;
    *(u8 *)(r) = (u8)(v);
    func_02026bac(param_1);
    func_02025bb0(param_1);
}
