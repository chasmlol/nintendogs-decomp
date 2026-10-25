#include "ctx.h"

extern void func_02025e18(u8 *);
extern u8 func_02025c5c(u8 *);

u8 func_0201dfb4(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0xc4;
    func_02025e18(param_1);
    uVar1 = func_02025c5c(param_1);
    return uVar1;
}
