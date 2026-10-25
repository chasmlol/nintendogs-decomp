#include "ctx.h"

extern s32 func_0206fd4c(void);
extern s32 func_0206fb74(s32 a);
extern void func_0206c924(u32 *p, u32 v, u32 w);

void func_0206e90c(s32 *param_1, s32 param_2, u32 *param_3, s32 param_4)
{
    s32 d;

    d = func_0206fd4c();
    param_1[0] = param_2;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = param_2 / d + (param_2 % d != 0);
    param_1[5] = (s32)param_3;
    param_1[6] = param_4;
    func_0206c924(param_3, 0, func_0206fb74(param_2));
}
