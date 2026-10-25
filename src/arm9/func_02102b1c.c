#include "ctx.h"
extern void func_02102a34(int *p);

void func_02102b1c(int *param_1)
{
    param_1[5] = ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15) == 0;
    if (param_1[5] != param_1[6]) {
        param_1[6] = param_1[5];
        param_1[7] = 1;
    } else {
        param_1[7] = 0;
    }
    if (*param_1 != 0) {
        func_02102a34(param_1);
        return;
    }
}
