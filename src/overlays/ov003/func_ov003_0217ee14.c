#include "ctx.h"

extern u32 func_0203852c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_0217ee14(u8 *param_1)
{
    u32 uVar1;

    uVar1 = func_0203852c(param_1);
    switch (uVar1) {
    case 0:
        func_0203e908(param_1, 0x30a);
        return;
    case 1:
        func_0203e908(param_1, 0x30c);
        return;
    case 2:
        func_0203e908(param_1, 0x30d);
        return;
    case 3:
        func_0203e908(param_1, 0x30e);
        return;
    }
    return;
}
