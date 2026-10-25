#include "ctx.h"
extern u32 func_02002ab0(u32 a, u32 b, u32 c);
u32 func_020028d8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 uVar1;
    switch (param_1) {
    case 1:
        uVar1 = 1;
        break;
    case 3:
        uVar1 = 2;
        break;
    case 2:
        uVar1 = 3;
        break;
    default:
        uVar1 = 0;
        break;
    }
    if (uVar1 != 0) {
        return func_02002ab0(uVar1, param_2, param_3);
    }
    return 0xffff;
}
