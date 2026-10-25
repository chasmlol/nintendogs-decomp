#include "ctx.h"
extern void func_02026c0c(u8 *p);
extern u8 func_02025548(u8 *p);
u8 func_ov004_0216dcdc(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 4;
    func_02026c0c(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
