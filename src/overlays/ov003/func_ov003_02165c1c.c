#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(u8 *p);
extern void func_02025804(u8 *p);
extern void func_02034198(u8 *p);

void func_ov003_02165c1c(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 145;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 11;
    *(u8 *)(param_1 + 147) = 19;
    func_02026494(param_1);
    func_02025804(param_1);
    func_02034198(param_1);
}
