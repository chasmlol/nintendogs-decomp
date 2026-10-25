#include "ctx.h"

extern void func_02026c24(u8 *);
extern u8 func_02025a84(u8 *);

u8 func_0201f8d4(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x44;
    func_02026c24(param_1);
    uVar1 = func_02025a84(param_1);
    return uVar1;
}
