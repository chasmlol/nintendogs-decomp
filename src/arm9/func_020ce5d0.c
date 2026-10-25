#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;

extern fx32 func_02067898(fx32 numer, fx32 denom);

static inline fx32 FX_Mul(fx32 a, fx32 b)
{
    fx64 r = (fx64)a * (fx64)b + 0x800;
    return (fx32)(r >> 12);
}

#define FX_MUL(a, b) ((fx32)((((fx64)(a) * (fx64)(b)) + 0x800) >> 12))

/* Hermite segment between key 1 and key 2, tangents from the neighbouring keys */
fx32 func_020ce5d0(fx32 v0, fx32 v1, fx32 v2, fx32 v3, s32 k0, s32 k1, s32 k2, s32 k3, s32 frame)
{
    fx32 t, m1, m2;

    t = ((frame - k1) * 0x1000) / (k2 - k1);
    if (k1 == k0) {
        m1 = 0;
    } else {
        m1 = func_02067898(v2 - v0, (k2 - k0) * 0x1000);
    }
    if (k2 == k3) {
        m2 = 0;
    } else {
        m2 = func_02067898(v3 - v1, (k3 - k1) * 0x1000);
    }
    return FX_Mul(v2, FX_Mul(FX_Mul(t, t), 0x3000 - 2 * t))
         + (FX_Mul(FX_Mul(m2, (k2 - k1) * 0x1000), -FX_Mul(FX_Mul(t, t), 0x1000 - t))
         + (FX_Mul(v1, FX_Mul(0x1000 + 2 * t, FX_MUL(0x1000 - t, 0x1000 - t)))
         + FX_Mul(FX_Mul(m1, (k2 - k1) * 0x1000), FX_MUL(t, FX_MUL(0x1000 - t, 0x1000 - t)))));
}
