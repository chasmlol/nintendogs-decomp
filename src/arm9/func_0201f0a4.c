#include "ctx.h"
extern void func_02026c24(u8 *p);
extern u8 func_02025a84(u8 *p);
u8 func_0201f0a4(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = (s16)0x21b;
    func_02026c24(param_1);
    uVar1 = func_02025a84(param_1);
    return uVar1;
}
