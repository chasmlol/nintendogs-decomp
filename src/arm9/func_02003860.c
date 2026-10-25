#include "ctx.h"

extern u32 func_0207d51c(int a, int b, int c);
extern u32 func_0207dd14(int a, int b, int c);

u32 func_02003860(int *param_1, int param_2, int param_3)
{
    u32 uVar1;

    uVar1 = 0;
    switch (*param_1) {
    case 0x45585048:
        uVar1 = func_0207d51c((int)param_1, param_2, param_3);
        break;
    case 0x46524d48:
        uVar1 = func_0207dd14((int)param_1, param_2, param_3);
        break;
    }
    return uVar1;
}
