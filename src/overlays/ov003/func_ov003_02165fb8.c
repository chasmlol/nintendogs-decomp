#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02026494(u8 *p);
void func_02025860(u8 *p);
void func_02034198(u8 *p);

void func_ov003_02165fb8(u8 *param_1)
{
    u16 k = 151;
    u8 *q = param_1 + 256;
    *(u16 *)(q + 82) = k;
    SwapByte(19, param_1 + 147);
    func_02026494(param_1);
    func_02025860(param_1);
    func_02034198(param_1);
}
