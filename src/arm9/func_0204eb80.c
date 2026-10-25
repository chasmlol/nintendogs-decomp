#include "ctx.h"

s32 func_020385e4(u8 *p);
void func_0203e908(u8 *p, s32 v);

u32 func_0204eb80(u8 *param_1)
{
    s32 iVar1;

    iVar1 = func_020385e4(param_1);
    switch (iVar1) {
    case 0:
        func_0203e908(param_1, 620);
        return 1;
    case 1:
        func_0203e908(param_1, 0x26d);
        return 1;
    case 2:
        func_0203e908(param_1, 0x26e);
        return 1;
    case 3:
        func_0203e908(param_1, 0x26f);
        return 1;
    default:
        return 0;
    }
}
