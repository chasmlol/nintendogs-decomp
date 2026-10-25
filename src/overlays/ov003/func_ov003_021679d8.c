#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_02159428;
extern void func_020266f8(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02028894(u8 *p, u32 *a, u32 b);
extern s32 func_0206782c(s32 v);
extern s32 func_01ff8958(s32 a, s32 b);
extern void func_020340f4(u8 *p);

void func_ov003_021679d8(u8 *p)
{
    s32 g;
    s32 x;
    s32 y;
    s32 s;
    s32 t;

    *(u16 *)(p + 256 + 82) = 17;
    p[147] = 5;
    p[152] = 1;
    func_020266f8(p);
    func_02025548(p);
    func_02028894(p, (u32 *)(p + 0x26c), 0);
    y = *(s32 *)(p + 0x274);
    x = *(s32 *)(p + 0x26c);
    g = *(s32 *)(data_02159428 + 0xc);
    s = func_0206782c(FX_Mul(x, x) + FX_Mul(y, y));
    t = func_01ff8958(g - 0x18000, s);
    *(s32 *)(p + 0x26c) = FX_Mul(t, *(s32 *)(p + 0x26c));
    *(s32 *)(p + 0x274) = FX_Mul(t, *(s32 *)(p + 0x274));
    func_020340f4(p);
}
