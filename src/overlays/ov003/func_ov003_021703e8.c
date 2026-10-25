#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u8 *);
extern void func_02025b30(u8 *);
extern void func_020340f4(u8 *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_021703e8(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x11;
    SwapByte(5, param_1 + 147);
    SwapByte(1, param_1 + 152);
    func_020266f8(param_1);
    func_02025b30(param_1);
    func_020340f4(param_1);
}
