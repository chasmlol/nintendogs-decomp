#include "ctx.h"

extern s32 func_020bd824(s32 p0, s32 p1, s32 p2, s32 p3);

BOOL func_020c5fec(s32 param_1)
{
    return func_020bd824(param_1, 3, -1, -1) != 0;
}
