#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *);
extern u8 func_02025bb0(u8 *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov003_021701d8(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x12;
    SwapByte(5, param_1 + 147);
    func_0202675c(param_1);
    uVar1 = func_02025bb0(param_1);
    return uVar1;
}
