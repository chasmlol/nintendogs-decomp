#include "ctx.h"

extern u32 data_0213a8d4[];

s32 func_0203bc08(u32 param_1, s32 param_2)
{
    if (param_1 >= 79 && param_1 < 99) {
        return param_2 * 10 + *(s32 *)((u8 *)data_0213a8d4 + 0x13c);
    }
    return param_2 * 10 + (s32)data_0213a8d4[param_1];
}
