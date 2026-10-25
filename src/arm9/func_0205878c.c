#include "ctx.h"

extern void func_02026bac(u8 *);
extern u8 func_020254ec(u8 *);

u8 func_0205878c(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0;
    func_02026bac(param_1);
    uVar1 = func_020254ec(param_1);
    return uVar1;
}
