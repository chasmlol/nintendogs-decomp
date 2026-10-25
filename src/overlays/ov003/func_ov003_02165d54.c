#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(s32 a);
extern void func_02025804(s32 a);
extern void func_02034198(s32 a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02165d54(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 145;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 20;
    SwapByte(19, (vu8 *)(param_1 + 147));
    func_02026494(param_1);
    func_02025804(param_1);
    func_02034198(param_1);
}
