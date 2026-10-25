#include "ctx.h"

extern u16 data_0213b5bc[];

BOOL func_02035a3c(u8 *param_1)
{
    s32 idx = (s8)param_1[0x8d];
    s32 t = *(u16 *)((u8 *)data_0213b5bc + idx * 2) + 360;
    s16 f = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 36);
    return f > t;
}
