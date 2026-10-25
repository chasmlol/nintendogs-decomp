#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);
extern void func_02020768(u8 *p);

void func_ov003_02166d4c(u8 *param_1)
{
    u8 *t;
    u32 old;
    u32 v;
    *(u16 *)(param_1 + 256 + 82) = 105;
    t = param_1 + 147;
    v = 13;
    *(u8 *)(t) = (u8)(v);
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
