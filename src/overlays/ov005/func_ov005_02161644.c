#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef u16 GXRgb;

#define FX_Mul(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> 12))
#define FX_Whole(a) ((s32)((a) >> 12))
#define GX_RGB(r, g, b) ((GXRgb)(((r) << 0) | ((g) << 5) | ((b) << 10)))

extern fx32 func_02067898(fx32 a, fx32 b);

GXRgb func_ov005_02161644(fx32 v)
{
    fx32 t;
    u8 r;
    u8 g;
    u8 b;

    if (v < 205) {
        return 0x3e32;
    }
    if (v < 0x99a) {
        t = func_02067898(v - 205, 0x8cd);
        r = FX_Whole(FX_Mul(t, 0xd000)) + 18;
        g = FX_Whole(FX_Mul(t, 0xe000)) + 17;
        b = FX_Whole(FX_Mul(t, 0x10000)) + 15;
        return GX_RGB(r, g, b);
    }
    return 0x7fff;
}
