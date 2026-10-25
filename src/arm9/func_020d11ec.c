#include "ctx.h"

void func_020d11ec(s32 *param_1)
{
    s32 *q = (s32 *)param_1[0];
    if (q != 0) {
        param_1[2] = *q - 1;
    } else {
        param_1[2] = 0;
    }
    param_1[1] = 0;
}
