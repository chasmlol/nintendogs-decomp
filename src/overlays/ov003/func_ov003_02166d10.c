#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(s32 a);
extern void func_02025548(s32 a);
extern void func_02020768(s32 a);

void func_ov003_02166d10(s32 param_1)
{
    u32 v;
    u8 *r;
    *(u16 *)((u8 *)param_1 + 256 + 82) = 105;
    r = (u8 *)param_1 + 147;
    v = 13;
    *(u8 *)(r) = (u8)(v);
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
