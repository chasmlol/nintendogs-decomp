#include "ctx.h"
extern void func_02025e34(u8 *p);
extern u8 func_02025c5c(u8 *p);
u8 func_02059284(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = (s16)0x167;
    func_02025e34(param_1);
    uVar1 = func_02025c5c(param_1);
    return uVar1;
}
