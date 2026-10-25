#include "ctx.h"

extern void func_02026bac(u8 *);
extern u8 func_02025548(u8 *);

u8 func_ov003_02170734(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0;
    func_02026bac(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
