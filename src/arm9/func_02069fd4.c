#include "ctx.h"

typedef struct { s32 _00, _01, _10, _11; } MtxFx22;

void func_02069fd4(u32 *addr, const MtxFx22 *mtx, s32 centerX, s32 centerY, s32 x1, s32 y1)
{
    s32 dx;
    s32 dy;

    addr[0] = (u32)((u16)(s16)(mtx->_00 >> 4) | (u16)(s16)(mtx->_01 >> 4) << 16);
    addr[1] = (u32)((u16)(s16)(mtx->_10 >> 4) | (u16)(s16)(mtx->_11 >> 4) << 16);
    dx = mtx->_00 * (x1 - centerX) + mtx->_01 * (y1 - centerY) + (centerX << 12);
    dy = mtx->_10 * (x1 - centerX) + mtx->_11 * (y1 - centerY) + (centerY << 12);
    addr[2] = (u32)(dx >> 4);
    addr[3] = (u32)(dy >> 4);
}
