#include "ctx.h"

extern s32 func_020bd824(u32, u32, u32, u32);

BOOL func_020c5fbc(u32 param_1)
{
    s32 r;
    r = func_020bd824(param_1, 1, 0xffffffffu, 0xffffffffu);
    return r != 0;
}
