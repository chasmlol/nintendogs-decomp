#include "ctx.h"

extern u8 *data_02159074;
extern u8 data_0215907c[];
extern u32 func_02071f20(u8 *a);

u32 func_0209ae94(s32 param_1)
{
    s32 idx = param_1;
    s32 base = (s32)data_0215907c;
    u32 r = func_02071f20(data_02159074);
    *(s16 *)(base + idx * 2) = (s16)r;
    *(s16 *)(base + 10) = (s16)idx;
    return 1;
}
