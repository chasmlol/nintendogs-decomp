
#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;

typedef struct {
    VecFx32 nx;
    VecFx32 ny;
    VecFx32 nz;
    VecFx32 org;
} Path;

#define FX_Mul(a, b) ((fx32)(((fx64)(a) * (b) + 0x800) >> 12))

static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z)
{
    a->x = x;
    a->y = y;
    a->z = z;
}

extern void func_02067e68(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void func_01ff832c(fx32 a, const VecFx32 *v1, const VecFx32 *v2, VecFx32 *out);
extern void func_02067e34(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern fx32 func_02067df0(const VecFx32 *a, const VecFx32 *b);

s32 func_02009f90(VecFx32 *pos, VecFx32 *prev, fx32 r, VecFx32 *out, Path *path, fx32 h, fx32 w, fx32 d, s32 f)
{
    VecFx32 p;
    VecFx32 org;
    VecFx32 nx;
    VecFx32 ny;
    VecFx32 nz;
    VecFx32 e1;
    VecFx32 e2;
    VecFx32 a;
    VecFx32 b;
    fx32 hw;
    fx32 hd;
    fx32 s1;
    fx32 s2;
    fx32 s3;
    fx32 s4;
    fx32 d1;
    fx32 d2;

    func_02067e68(pos, out, &p);
    hw = r + (w >> 1);
    hd = r + (d >> 1);
    VEC_Set(&org, path->org.x, path->org.y, path->org.z);
    VEC_Set(&nx, path->nx.x, path->nx.y, path->nx.z);
    VEC_Set(&ny, path->ny.x, path->ny.y, path->ny.z);
    VEC_Set(&nz, path->nz.x, path->nz.y, path->nz.z);
    func_01ff832c(hw, &nx, &org, &e1);
    func_01ff832c(hd, &nz, &e1, &e1);
    func_01ff832c(-hw, &nx, &org, &e2);
    func_01ff832c(-hd, &nz, &e2, &e2);

    s1 = FX_Mul(nx.x, e1.x - p.x) + FX_Mul(nx.z, e1.z - p.z);
    s2 = FX_Mul(nz.x, e1.x - p.x) + FX_Mul(nz.z, e1.z - p.z);
    s3 = FX_Mul(nx.x, e2.x - p.x) + FX_Mul(nx.z, e2.z - p.z);
    s4 = FX_Mul(nz.x, e2.x - p.x) + FX_Mul(nz.z, e2.z - p.z);
    if (s1 >= 0 && s2 >= 0 && s3 <= 0 && s4 <= 0) {
        fx32 t1;
        fx32 t2;
        fx32 rh;
        fx64 cx;
        fx64 cz;
        func_02067e34(&p, &org, &a);
        func_02067e34(prev, &org, &b);
        t1 = func_02067df0(&a, &ny);
        t2 = func_02067df0(&b, &ny);
        rh = r + h;
        cx = ny.x;
        d1 = FX_Mul(ny.y, rh - t1);
        d2 = FX_Mul(ny.y, rh - t2);
        cz = ny.z;
        if (d1 > 0) {
            if ((f != 0 && d1 < 0xc00) || d2 <= 0xc00) {
                out->y += d1;
                return 1;
            }
            if ((fx32)((cx * nz.x + 0x800) >> 12) + (fx32)((cz * nz.z + 0x800) >> 12) > 0 || d1 < h + r * 2) {
                fx32 ax = e1.x - prev->x;
                fx32 az = e1.z - prev->z;
                fx32 bx = e2.x - prev->x;
                fx32 bz = e2.z - prev->z;
                if (FX_Mul(nx.x, ax) + FX_Mul(nx.z, az) <= 0x1000) {
                    out->x += FX_Mul(nx.x, s1);
                    out->z += FX_Mul(nx.z, s1);
                }
                if (FX_Mul(nz.x, ax) + FX_Mul(nz.z, az) <= 0x1000) {
                    out->x += FX_Mul(nz.x, s2);
                    out->z += FX_Mul(nz.z, s2);
                }
                if (FX_Mul(nx.x, bx) + FX_Mul(nx.z, bz) >= -0x1000) {
                    out->x += FX_Mul(nx.x, s3);
                    out->z += FX_Mul(nx.z, s3);
                }
                if (FX_Mul(nz.x, bx) + FX_Mul(nz.z, bz) >= -0x1000) {
                    out->x += FX_Mul(nz.x, s4);
                    out->z += FX_Mul(nz.z, s4);
                }
                return 2;
            }
        }
    }
    return 0;
}
