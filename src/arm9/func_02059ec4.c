#include "ctx.h"

extern void func_02026bac(u8 *);
extern u8 func_02025758(u8 *);

u8 func_02059ec4(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0xbc;
    func_02026bac(param_1);
    uVar1 = func_02025758(param_1);
    return uVar1;
}
