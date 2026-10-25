#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef s64 fx64c;

typedef struct {
    fx32 _00, _01, _02, _03;
    fx32 _10, _11, _12, _13;
    fx32 _20, _21, _22, _23;
    fx32 _30, _31, _32, _33;
} MtxFx44;

#define FX32_SHIFT 12
#define FX32_ONE 4096
#define FX64C_SHIFT 32

#define reg_CP_DIV_NUMER (*(volatile u64 *)0x04000290)
#define reg_CP_DIV_DENOM (*(volatile u64 *)0x04000298)
#define reg_G3_MTX_MODE (*(vu32 *)0x04000440)
#define reg_G3_MTX_LOAD_4x4 (*(vu32 *)0x04000458)

extern fx32 func_02067898(fx32 numer, fx32 denom);
extern fx32 func_020677c8(void);
extern fx64c func_02067804(void);

static inline void FX_DivAsync(fx32 numer, fx32 denom)
{
    reg_CP_DIV_NUMER = (u64)numer << 32;
    reg_CP_DIV_DENOM = (u32)denom;
}

static inline fx32 FX_Mul(fx32 v1, fx32 v2)
{
    return (fx32)(((fx64)v1 * v2 + 0x800LL) >> FX32_SHIFT);
}

void func_0206a890(fx32 fovySin, fx32 fovyCos, fx32 aspect, fx32 n, fx32 f, fx32 scaleW, BOOL draw, MtxFx44 *mtx)
{
    fx32 one_tan, one_tan_aspect;
    fx64c tmp1;
    fx32 m22, m32;
    vu32 *load;

    one_tan = func_02067898(fovyCos, fovySin);
    if (scaleW != FX32_ONE) {
        one_tan = (one_tan * scaleW) / FX32_ONE;
    }
    FX_DivAsync(one_tan, aspect);

    if (draw) {
        reg_G3_MTX_MODE = 0;
        load = &reg_G3_MTX_LOAD_4x4;
    }

    if (mtx) {
        mtx->_01 = 0;
        mtx->_02 = 0;
        mtx->_03 = 0;
        mtx->_10 = 0;
        mtx->_12 = 0;
        mtx->_13 = 0;
        mtx->_20 = 0;
        mtx->_21 = 0;
        mtx->_23 = -scaleW;
        mtx->_30 = 0;
        mtx->_31 = 0;
        mtx->_33 = 0;
    }

    one_tan_aspect = func_020677c8();
    FX_DivAsync(FX32_ONE, n - f);

    if (draw) {
        *load = one_tan_aspect;
        *load = 0;
        *load = 0;
        *load = 0;
        *load = 0;
        *load = one_tan;
        *load = 0;
        *load = 0;
        *load = 0;
        *load = 0;
    }

    if (mtx) {
        mtx->_00 = one_tan_aspect;
        mtx->_11 = one_tan;
    }

    tmp1 = func_02067804();
    if (scaleW != FX32_ONE) {
        tmp1 = (tmp1 * scaleW) / FX32_ONE;
    }

    m22 = (fx32)((tmp1 * (f + n) + ((fx64)1 << (FX64C_SHIFT - 1))) >> FX64C_SHIFT);
    m32 = (fx32)((tmp1 * FX_Mul(n << 1, f) + ((fx64)1 << (FX64C_SHIFT - 1))) >> FX64C_SHIFT);

    if (draw) {
        *load = m22;
        *load = -scaleW;
        *load = 0;
        *load = 0;
        *load = m32;
        *load = 0;
    }

    if (mtx) {
        mtx->_22 = m22;
        mtx->_32 = m32;
    }
}
