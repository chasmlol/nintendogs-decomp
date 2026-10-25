#include "ctx.h"
#pragma opt_propagation off

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;

extern void func_01ff832c(fx32 a, const VecFx32 *v1, const VecFx32 *v2, VecFx32 *dst);

#define FX_MUL(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> 12))

void func_020bfc98(const VecFx32 *a, const VecFx32 *b, const VecFx32 *c, fx32 p4, fx32 p5,
                   fx32 p6, fx32 p7, fx32 p8, VecFx32 *out)
{
    fx32 t;
    out->x = 0;
    out->y = 0;
    out->z = 0;
    func_01ff832c(-FX_MUL(p6, p4), a, out, out);
    t = p5;
    func_01ff832c(FX_MUL(p7, t), b, out, out);
    if (t < 0) {
        t = -(t >> 1);
    }
    func_01ff832c(FX_MUL(p8, t), c, out, out);
}
