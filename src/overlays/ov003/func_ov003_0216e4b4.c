#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern void func_02025ed4(u8 *p);
extern void func_020259d0(u8 *p);
extern void func_02034198(u8 *p);
extern s32 func_02028124(u8 *p);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216e4b4(u8 *param_1)
{
    s32 v;

    *(u16 *)(param_1 + 0x152) = 372;
    SwapByte(5, param_1 + 147);
    func_02025ed4(param_1);
    func_020259d0(param_1);
    func_02034198(param_1);
    v = func_02028124(param_1);
    *(s32 *)(param_1 + 0x25c) = FX_Mul(v, -84);
    *(s32 *)(param_1 + 0x264) = *(volatile s32 *)(param_1 + 0x25c) * -12;
}
