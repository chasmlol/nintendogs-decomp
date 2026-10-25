#include "ctx.h"
s32 func_02024114(u8 *param_1, s32 param_2)
{
    s32 base;
    if (param_2 < 0) goto ret0;
    if (param_2 < 20) goto body;
ret0:
    return 0;
body:
    base = *(s32 *)(param_1 + 0x9e8) + 0x90;
    return (s16)param_2 * 60 + base;
}
