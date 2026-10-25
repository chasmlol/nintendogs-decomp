#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(u8 *);
extern void func_02025804(u8 *);
extern void func_02034198(u8 *);

void func_ov003_02165e4c(u8 *param_1)
{
    u8 *pp;
    u32 vv;
    u32 old;
    *(s16 *)(param_1 + 0x152) = 0xa0;
    pp = param_1 + 0x93;
    vv = 19;
    *(u8 *)(pp) = (u8)(vv);
    func_02026494(param_1);
    func_02025804(param_1);
    func_02034198(param_1);
}
