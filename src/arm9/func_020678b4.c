#include "ctx.h"

typedef struct { s32 x, y, z; } VecFx32;

#define reg_CP_SQRTCNT (*(vu16 *)0x040002b0)
#define reg_CP_SQRT_RESULT (*(vu32 *)0x040002b4)
#define reg_CP_SQRT_PARAM (*(volatile u64 *)0x040002b8)

s32 func_020678b4(const VecFx32 *pSrc1, const VecFx32 *pSrc2)
{
    s64 t;
    s32 tmp;

    tmp = pSrc1->x - pSrc2->x;
    t = (s64)tmp * tmp;
    tmp = pSrc1->y - pSrc2->y;
    t += (s64)tmp * tmp;
    tmp = pSrc1->z - pSrc2->z;
    t += (s64)tmp * tmp;

    reg_CP_SQRTCNT = 1;
    reg_CP_SQRT_PARAM = (u64)(t * 4);
    while (reg_CP_SQRTCNT & 0x8000) {
    }
    return ((s32)reg_CP_SQRT_RESULT + 1) >> 1;
}
