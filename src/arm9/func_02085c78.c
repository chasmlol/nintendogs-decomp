#include "ctx.h"

s32 func_02085c78(u8 *param_1, s32 param_2)
{
    u8 *b = param_1 + 8;
    s32 n = *(u16 *)(param_1 + 6);
    if (param_2 < 0) goto ret0;
    if (param_2 < n) goto body;
ret0:
    return 0;
body:
    return (s32)(b + param_2 * 12);
}
