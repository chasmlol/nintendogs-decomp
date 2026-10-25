#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026bd0(u8 *p);
extern void func_02025bb0(u8 *p);
extern s32 func_02028130(u8 *p);
extern s32 func_01ff8930(s32 x);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov003_0216e328(u8 *p)
{
    s32 x;
    *(u16 *)(p + 256 + 82) = 0x178;
    p[151] = 4;
    func_02026bd0(p);
    func_02025bb0(p);
    x = func_01ff8930(func_02028130(p));
    *(s32 *)(p + 0x25c) = FX_Mul(x, -192);
}
