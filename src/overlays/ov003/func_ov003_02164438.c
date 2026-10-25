#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026aac(u8 *a);
extern void func_02025bb0(u8 *a);
extern void func_ov003_02164558(u8 *a);

void func_ov003_02164438(u8 *param_1)
{
    u8 *t;
    u32 old;
    u32 v;
    *(u16 *)(param_1 + 256 + 82) = 19;
    t = param_1 + 147;
    v = 5;
    *(u8 *)(t) = (u8)(v);
    t = param_1 + 152;
    v = 9;
    *(u8 *)(t) = (u8)(v);
    func_02026aac(param_1);
    func_02025bb0(param_1);
    func_ov003_02164558(param_1);
}
