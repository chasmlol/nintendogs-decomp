#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;

extern void func_02067e68(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern s16 data_02126868[];

#define FX_Mul(a, b) ((fx32)(((fx64)(a) * (b) + 0x800) >> 12))
#define FX_Mul64(a, b) ((fx32)(((a) * (b) + 0x800) >> 12))

BOOL func_0200aa74(VecFx32 *pos, VecFx32 *prev, fx32 r, VecFx32 *out, VecFx32 *c, u16 ang, fx32 h, fx32 w, fx32 d)
{
    VecFx32 p;
    fx32 cs;
    fx32 sn;
    fx32 nc;
    fx32 hw;
    fx32 hd;
    fx32 x7;
    fx32 t;
    fx32 u;
    fx32 x8;
    fx32 z9;
    fx32 z10;
    fx32 s1;
    fx32 s2;
    fx32 s3;
    fx32 s4;
    fx64 C;
    fx64 N;
    fx64 S;

    func_02067e68(pos, out, &p);
    if (p.y - r - c->y > h) {
        return 0;
    }
    cs = data_02126868[(ang >> 4) * 2];
    sn = data_02126868[(ang >> 4) * 2 + 1];
    hw = r + (w >> 1);
    hd = r + (d >> 1);
    nc = -cs;
    u = FX_Mul(sn, hw);
    x7 = c->x;
    C = cs;
    x7 += u;
    x7 += FX_Mul(cs, hd);
    z9 = c->z + FX_Mul(nc, hw);
    z9 += FX_Mul(sn, hd);
    x8 = c->x;
    x8 -= u;
    x8 -= FX_Mul(cs, hd);
    z10 = c->z;
    z10 -= FX_Mul(nc, hw);
    z10 -= FX_Mul(sn, hd);
    N = nc;
    S = sn;
    s1 = FX_Mul(sn, x7 - p.x) + FX_Mul(nc, z9 - p.z);
    s2 = FX_Mul(cs, x7 - p.x) + FX_Mul(sn, z9 - p.z);
    s3 = FX_Mul(sn, x8 - p.x) + FX_Mul(nc, z10 - p.z);
    s4 = FX_Mul(cs, x8 - p.x) + FX_Mul(sn, z10 - p.z);
    if (s1 >= 0 && s2 >= 0 && s3 <= 0 && s4 <= 0) {
        fx32 bx = x8 - prev->x;
        fx32 bz = z10 - prev->z;
        fx32 az = z9 - prev->z;
        fx32 ax = x7 - prev->x;
        if (FX_Mul64(S, ax) + FX_Mul64(N, az) <= 0x1000) {
            out->x += FX_Mul64(S, s1);
            out->z += FX_Mul64(N, s1);
        }
        if (FX_Mul64(C, ax) + FX_Mul64(S, az) <= 0x1000) {
            out->x += FX_Mul64(C, s2);
            out->z += FX_Mul64(S, s2);
        }
        if (FX_Mul64(S, bx) + FX_Mul64(N, bz) >= -0x1000) {
            out->x += FX_Mul64(S, s3);
            out->z += FX_Mul64(N, s3);
        }
        if (FX_Mul64(C, bx) + FX_Mul64(S, bz) >= -0x1000) {
            out->x += FX_Mul64(C, s4);
            out->z += FX_Mul64(S, s4);
        }
        return 1;
    }
    return 0;
}
