#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026494(u8 *p);
extern void func_02025804(u8 *p);
extern void func_02034198(u8 *p);
void func_ov003_02165d18(u8 *param_1)
{
    u32 old;
    u32 v;
    u8 *t = param_1 + 147;
    v = 20;
    *(u16 *)(param_1 + 0x152) = 0x91;
    *(u8 *)(t) = (u8)(v);
    func_02026494(param_1);
    func_02025804(param_1);
    func_02034198(param_1);
}
