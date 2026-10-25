#include "ctx.h"

extern s8 data_0213cde7[];
extern u32 data_0213b7d0[];

s32 func_0202dddc(u8 *param_1)
{
    u8 *p = param_1 + 256;
    s32 idx = *(s16 *)(p + 82);
    s32 k = data_0213cde7[idx * 8];
    return (s16)data_0213b7d0[k];
}
