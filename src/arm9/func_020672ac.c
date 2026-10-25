#include "ctx.h"

extern void func_02066abc(s32 *a, u32 *b, s32 c, s32 d, s32 e);

void func_020672ac(s32 *param_1, u32 *param_2, s32 param_3, s32 param_4, s32 param_5)
{
    func_02066abc(param_1, param_2, param_3, param_4, param_5);
    param_2[9] = param_1[9];
    param_2[10] = param_1[10];
    param_2[11] = param_1[11];
}
