#include "ctx.h"
#pragma opt_propagation off

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;

fx32 func_01ff8958(fx32 numer, fx32 denom);   /* FX_Div */
fx32 func_0206782c(fx32 x);                   /* FX_Sqrt */

#define FX_Mul(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> 12))

/* Two-bone joint position: a and b are the end points, lenA/lenB the bone lengths,
   (nx, ny, nz) the bend direction hint. */
void func_0200babc(VecFx32 *out, fx32 ax, fx32 ay, fx32 az, fx32 bx, fx32 by, fx32 bz,
                   fx32 lenA, fx32 lenB, fx32 nx, fx32 ny, fx32 nz)
{
    fx32 dx;
    fx32 dy;
    fx32 dz;
    fx32 lenASq;
    fx32 lenBSq;
    fx32 distSq;
    fx32 inv;
    fx32 t;
    fx32 cx;
    fx32 cy;
    fx32 cz;
    fx32 ex;
    fx32 ey;
    fx32 ez;
    fx32 h;
    fx32 vx;
    fx32 vy;
    fx32 vz;
    fx32 lenSq;
    fx32 ratio;
    fx32 s;
    fx64 dx64;
    fx64 dy64;
    fx64 dz64;

    dx = bx - ax;
    dy = by - ay;
    dz = bz - az;
    lenASq = FX_Mul(lenA, lenA);
    lenBSq = FX_Mul(lenB, lenB);
    distSq = FX_Mul(dx, dx) + FX_Mul(dy, dy) + FX_Mul(dz, dz);
    if (distSq >= 1) {
        inv = func_01ff8958(0x800, distSq);
        t = FX_Mul(inv, distSq + (lenASq - lenBSq));
        dy64 = dy;
        dz64 = dz;
        dx64 = dx;
        cx = ax + FX_Mul(t, dx64);
        cy = ay + FX_Mul(t, dy64);
        cz = az + FX_Mul(t, dz64);
        ex = cx - ax;
        ey = cy - ay;
        ez = cz - az;
        h = lenASq - FX_Mul(ex, ex) - FX_Mul(ey, ey) - FX_Mul(ez, ez);
        if (h > 0) {
            vx = FX_Mul(ny, dz) - FX_Mul(nz, dy);
            vy = FX_Mul(nz, dx) - FX_Mul(nx, dz);
            vz = FX_Mul(nx, dy) - FX_Mul(ny, dx);
            nx = FX_Mul(dy, vz) - FX_Mul(dz, vy);
            ny = FX_Mul(dz, vx) - FX_Mul(dx, vz);
            nz = FX_Mul(dx, vy) - FX_Mul(dy, vx);
            lenSq = FX_Mul(nx, nx) + FX_Mul(ny, ny) + FX_Mul(nz, nz);
            if (lenSq != 0) {
                ratio = func_01ff8958(h, lenSq);
                s = func_0206782c(ratio);
                out->x = cx + FX_Mul(s, nx);
                out->y = cy + FX_Mul(s, ny);
                out->z = cz + FX_Mul(s, nz);
                return;
            }
        }
    }
    lenA = func_01ff8958(lenA, lenA + lenB);
    out->x = ax + FX_Mul(lenA, dx);
    out->y = ay + FX_Mul(lenA, dy);
    out->z = az + FX_Mul(lenA, dz);
}
