#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(u8 *p);
extern void func_02025804(u8 *p);
extern void func_02034198(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02165d98(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 150;
    SwapByte(19, (vu8 *)(param_1 + 147));
    func_02026494(param_1);
    func_02025804(param_1);
    func_02034198(param_1);
}
