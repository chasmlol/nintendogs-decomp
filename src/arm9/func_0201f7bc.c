#include "ctx.h"

extern void func_02026c24(s32 a);
extern u8 func_02025a84(s32 a);

u8 func_0201f7bc(s32 param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x4b;
    func_02026c24(param_1);
    uVar1 = func_02025a84(param_1);
    return uVar1;
}
