#include "ctx.h"

extern void func_02026bac(s32 a);
extern u8 func_02025548(s32 a);

u8 func_ov004_0216deb0(s32 param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0x137;
    func_02026bac(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
