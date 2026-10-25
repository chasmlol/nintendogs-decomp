#include "ctx.h"

extern void func_02026c24(s32 a);
extern u8 func_02025a84(s32 a);

u8 func_ov005_021656bc(s32 param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x40;
    func_02026c24(param_1);
    uVar1 = func_02025a84(param_1);
    return uVar1;
}
