#include "ctx.h"
extern void func_02025e18(u8 *p);
extern u8 func_02025a28(u8 *p);
u8 func_0201df64(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0xce;
    func_02025e18(param_1);
    uVar1 = func_02025a28(param_1);
    return uVar1;
}
