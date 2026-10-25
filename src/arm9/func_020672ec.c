#include "ctx.h"

typedef struct { s32 _00, _01, _02, _10, _11, _12, _20, _21, _22, _30, _31, _32; } MtxFx43;
extern void func_0206c8b8(const void *src, void *dst);

void func_020672ec(const MtxFx43 *pSrc, MtxFx43 *pDst, s32 x, s32 y, s32 z)
{
    if (pSrc != pDst) {
        func_0206c8b8(pSrc, pDst);
    }
    pDst->_30 = pSrc->_30 + (s32)((x * (s64)pSrc->_00 + y * (s64)pSrc->_10 + z * (s64)pSrc->_20) >> 12);
    pDst->_31 = pSrc->_31 + (s32)((x * (s64)pSrc->_01 + y * (s64)pSrc->_11 + z * (s64)pSrc->_21) >> 12);
    pDst->_32 = pSrc->_32 + (s32)((x * (s64)pSrc->_02 + y * (s64)pSrc->_12 + z * (s64)pSrc->_22) >> 12);
}
