#include "ctx.h"

extern s16 data_0213b588[];

s32 func_02044660(s32 param_1, s32 param_2, s32 param_3)
{
    s32 r;
    if (param_3 >= 0) {
        if (param_3 < 8) {
            return data_0213b588[param_3];
        }
    }
    if (param_3 >= 8) {
        if (param_3 < 14) {
            return 0;
        }
    }
    if (param_3 < 14) {
        r = 0;
    } else {
        r = 0;
        return r;
    }
    return r;
}
