#include "ctx.h"

extern void func_02026bac(s32 a);
extern u8 func_02025758(s32 a);

u8 func_02059f64(s32 param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0xbc;
    func_02026bac(param_1);
    uVar1 = func_02025758(param_1);
    return uVar1;
}
