#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02034198(u8 *p);

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_02166044(u8 *param_1)
{
    *(u16 *)((u32)(param_1 + 256) + 82) = 0;
    SwapByte(5, param_1 + 147);
    SwapByte(2, param_1 + 151);
    func_02026494(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    *(s32 *)(param_1 + 0x464) = 1;
}
