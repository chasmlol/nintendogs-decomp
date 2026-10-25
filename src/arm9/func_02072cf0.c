#include "ctx.h"

extern s32 func_02072b04(u32 a, u32 b, s32 *c, u32 d, u32 *e);

BOOL func_02072cf0(u32 param_1, s32 *param_2)
{
    s32 iVar1 = func_02072b04(param_1, 0xff, param_2, 1, NULL);
    return iVar1 == 0;
}
