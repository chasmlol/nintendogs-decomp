#include "ctx.h"

extern s32 func_01ffdb08(s32 idx);
extern u8 func_02028100(s32 v);

u8 func_02109368(s32 param_1)
{
    u8 r = 0;
    s32 v = func_01ffdb08(param_1);
    if (v != 0) {
        r = func_02028100(v);
    }
    return r;
}
