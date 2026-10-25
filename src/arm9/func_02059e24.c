#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_020256fc(u8 *p);

u8 func_02059e24(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0xc1;
    func_02026c24(param_1);
    uVar1 = func_020256fc(param_1);
    return uVar1;
}
