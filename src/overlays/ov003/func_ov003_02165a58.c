#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025d70(u8 *p);
extern void func_02025860(u8 *p);
extern void func_02034198(u8 *p);

void func_ov003_02165a58(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 145;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 4;
    *(param_1 + 147) = 20;
    *(param_1 + 151) = 5;
    func_02025d70(param_1);
    func_02025860(param_1);
    func_02034198(param_1);
}
