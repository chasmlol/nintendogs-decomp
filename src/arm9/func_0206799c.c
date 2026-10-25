#include "ctx.h"

typedef struct { s16 x, y, z; } VecFx16;

#define reg_CP_DIVCNT (*(vu16 *)0x04000280)
#define reg_CP_DIV_NUMER (*(volatile u64 *)0x04000290)
#define reg_CP_DIV_DENOM (*(volatile u64 *)0x04000298)
#define reg_CP_DIV_RESULT (*(volatile u64 *)0x040002a0)
#define reg_CP_SQRTCNT (*(vu16 *)0x040002b0)
#define reg_CP_SQRT_RESULT (*(vu32 *)0x040002b4)
#define reg_CP_SQRT_PARAM (*(volatile u64 *)0x040002b8)

void func_0206799c(const VecFx16 *pSrc, VecFx16 *pDst)
{
    s64 t;
    s32 sqrt;

    t = pSrc->x * pSrc->x;
    t += pSrc->y * pSrc->y;
    t += pSrc->z * pSrc->z;

    reg_CP_DIVCNT = 2;
    reg_CP_DIV_NUMER = 0x0100000000000000LL;
    reg_CP_DIV_DENOM = (u64)t;
    reg_CP_SQRTCNT = 1;
    reg_CP_SQRT_PARAM = (u64)(t * 4);
    while (reg_CP_SQRTCNT & 0x8000) {
    }
    sqrt = (s32)reg_CP_SQRT_RESULT;
    while (reg_CP_DIVCNT & 0x8000) {
    }
    t = (s64)(reg_CP_DIV_RESULT * sqrt);
    pDst->x = (s16)((t * pSrc->x + 0x100000000000LL) >> 45);
    pDst->y = (s16)((t * pSrc->y + 0x100000000000LL) >> 45);
    pDst->z = (s16)((t * pSrc->z + 0x100000000000LL) >> 45);
}
