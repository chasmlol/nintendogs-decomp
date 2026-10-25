#include "ctx.h"

extern u32 func_0203852c(int p);
extern void func_0203e908(int p, s16 v);

u32 func_ov003_0218e690(int param_1)
{
    u32 uVar1;

    uVar1 = func_0203852c(param_1);
    switch (uVar1) {
    case 0:
        func_0203e908(param_1, 0x30a);
        return 1;
    case 1:
        func_0203e908(param_1, 0x30c);
        return 1;
    case 2:
        func_0203e908(param_1, 0x30d);
        return 1;
    case 3:
        func_0203e908(param_1, 0x30e);
        return 1;
    default:
        return 0;
    }
}
