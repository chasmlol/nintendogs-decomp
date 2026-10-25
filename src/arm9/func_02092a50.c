#include "ctx.h"

extern u32 data_02159034;

s32 func_02092a50(s16 param_1, s32 param_2)
{
    s32 r = 0;
    if (param_2 >= 2 && param_2 <= 5) {
        s16 k = (s16)(param_2 - 2);
        u8 *obj = (u8 *)data_02159034;
        s32 t = *(s32 *)(obj + 0x141c) + 0xf8;
        r = (param_1 * 112 + t) + k * 28;
    }
    return r;
}
