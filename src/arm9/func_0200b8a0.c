#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;

extern fx32 func_02067898(fx32 numer, fx32 denom);

#define FX_Mul(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> 12))

fx32 func_0200b8a0(const VecFx32 *p, const VecFx32 *a, const VecFx32 *b)
{
    fx32 px, py, pz;
    fx32 ax, ay, az, dx, dy, dz, vx, vy, vz, len, t;
    fx64 dx64, dy64, dz64;

    ax = a->x;
    dx = b->x - ax;
    vx = p->x - ax;
    ay = a->y;
    dy = b->y - ay;
    vy = p->y - ay;
    az = a->z;
    dz = b->z - az;
    vz = p->z - az;
    pz = FX_Mul(dz, vz);
    px = FX_Mul(dx, vx);
    py = FX_Mul(dy, vy);
    dz64 = dz;
    dx64 = dx;
    dy64 = dy;
    len = FX_Mul(dx, dx) + FX_Mul(dy, dy) + FX_Mul(dz, dz);
    if (len == 0) {
        t = px + py + pz;
    } else {
        t = func_02067898(px + py + pz, len);
    }
    vx = ax + (fx32)((dx64 * t + 0x800LL) >> 12) - p->x;
    vy = ay + (fx32)((dy64 * t + 0x800LL) >> 12) - p->y;
    vz = az + (fx32)((dz64 * t + 0x800LL) >> 12) - p->z;
    return FX_Mul(vx, vx) + FX_Mul(vy, vy) + FX_Mul(vz, vz);
}
