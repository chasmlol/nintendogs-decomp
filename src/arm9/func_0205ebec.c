#include "ctx.h"

typedef s32 (*CbFn)(u32 a, u32 b, u32 *c, u32 d);

extern void func_0205ecbc(u32 a, u32 *b);
extern void func_0205ec88(u32 *p);

s32 func_0205ebec(u32 *param_1, u32 *param_2)
{
    s32 iVar1;

    if (param_1[9] - param_1[7] != 0) {
        param_1[10] = param_1[9] - param_1[7];
        if (((param_1[1] << 19) >> 31) == 0) {
            func_0205ecbc(param_1[7], &param_1[10]);
        }
        iVar1 = ((CbFn)param_1[0x10])(param_1[0], param_1[7], &param_1[10], param_1[0x12]);
        if (param_2 != NULL) {
            *param_2 = param_1[10];
        }
        if (iVar1 != 0) {
            return iVar1;
        }
        param_1[6] = param_1[6] + param_1[10];
    }
    func_0205ec88(param_1);
    return 0;
}
