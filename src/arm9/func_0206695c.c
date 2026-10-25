#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22; } MtxFx33;

#define FX32_ONE 0x1000

/* NitroSDK MTX_RotAxis33(pDst, vec, sinVal, cosVal) */
void func_0206695c(MtxFx33 *pDst, const VecFx32 *vec, fx32 sinVal, fx32 cosVal)
{
    fx64 t, ss, xx, yy, zz;
    fx32 t01, t02, t12, xs, ys, zs;

    t = (fx64)(FX32_ONE - cosVal);
    ss = sinVal;
    xx = vec->x;
    yy = vec->y;
    zz = vec->z;

    { fx64 p0 = xx * xx * t; pDst->_00 = (fx32)(p0 >> 24) + cosVal; }
    { fx64 p1 = yy * yy * t; pDst->_11 = (fx32)(p1 >> 24) + cosVal; }
    { fx64 p2 = zz * zz * t; pDst->_22 = (fx32)(p2 >> 24) + cosVal; }

    t01 = (fx32)((t * xx * yy) >> 24);
    t02 = (fx32)((t * xx * zz) >> 24);
    t12 = (fx32)((t * yy * zz) >> 24);
    zs = (fx32)((ss * zz) >> 12);
    xs = (fx32)((ss * xx) >> 12);
    pDst->_01 = t01 + zs;
    pDst->_10 = t01 - zs;
    ys = (fx32)((ss * yy) >> 12);
    pDst->_02 = t02 - ys;
    pDst->_20 = t02 + ys;
    pDst->_12 = t12 + xs;
    pDst->_21 = t12 - xs;
}
