#include "ctx.h"

s32 func_02086348(s32 *param_1, s32 param_2, u32 param_3)
{
    s32 t = (s32)((u32)*(u16 *)((u8 *)param_1 + 4) * 0x10) / 8;
    s32 r = *param_1 + (t * ((s32)param_3 >> 3) + (param_2 >> 3) * 0x10) * 2;
    return r + (param_3 & 7) * 4;
}
