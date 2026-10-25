#include "ctx.h"
extern void func_02026bac(u8 *p);
extern u8 func_02025758(u8 *p);
u8 func_02059f3c(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0xbd;
    func_02026bac(param_1);
    uVar1 = func_02025758(param_1);
    return uVar1;
}
