#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;
#define FX_MUL(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> 12))

BOOL func_0200b0cc(const VecFx32 *p, fx32 a, fx32 b, fx32 c, fx32 d, fx32 x1, fx32 z1, fx32 x2, fx32 z2)
{
    fx32 dx1 = x1 - p->x;
    fx32 dz1 = z1 - p->z;
    fx32 dx2 = x2 - p->x;
    fx32 dz2 = z2 - p->z;
    BOOL ret = FALSE;
    BOOL f2 = FALSE;
    BOOL f1 = FALSE;

    if (FX_MUL(a, dx1) + FX_MUL(b, dz1) >= 0) {
        if (FX_MUL(c, dx1) + FX_MUL(d, dz1) >= 0) {
            f1 = TRUE;
        }
    }
    if (f1) {
        if (FX_MUL(a, dx2) + FX_MUL(b, dz2) <= 0) {
            f2 = TRUE;
        }
    }
    if (f2) {
        if (FX_MUL(c, dx2) + FX_MUL(d, dz2) <= 0) {
            ret = TRUE;
        }
    }
    return ret;
}
