#include "ctx.h"

void func_02085ad8(s32 *param_1, s32 *param_2)
{
    if (param_1[0] == 0) {
        param_1[0] = (s32)param_2;
        param_2[0] = 0;
        param_2[1] = param_2[0];
    } else {
        param_2[0] = param_1[0];
        param_2[1] = 0;
        ((s32 *)param_1[0])[1] = (s32)param_2;
        param_1[0] = (s32)param_2;
    }
    param_1[1] = param_1[1] + 1;
}
