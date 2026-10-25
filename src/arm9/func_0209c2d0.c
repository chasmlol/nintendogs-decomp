#include "ctx.h"

extern u8 *data_0214f130;
extern u8 data_0212fd50[];

u8 func_0209c2d0(s32 p)
{
    u8 *g = data_0214f130;
    u8 *q = g + 0x2c;
    u32 sum = *(u32 *)(g + 0x2c) + *(u32 *)(q + 4) + *(u32 *)(q + 8);
    u32 x = sum * 0x10dcd + 1;
    s16 idx = (s16)(u16)((x << 16) >> 30);
    u8 *e = data_0212fd50 + p * 4;
    return e[idx];
}
