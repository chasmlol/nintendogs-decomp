#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026478(u8 *);
extern u8 func_020255a4(u8 *);
extern void func_0202c0ec(u8 *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_021681e4(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0xf6;
    SwapByte(1, param_1 + 151);
    func_02026478(param_1);
    func_020255a4(param_1);
    *(u32 *)(param_1 + 0x484) = 0;
    func_0202c0ec(param_1);
}
