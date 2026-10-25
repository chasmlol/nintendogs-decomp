#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025a84(u8 *p);

u8 func_ov005_0216566c(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0x47;
    func_02026c24(param_1);
    uVar1 = func_02025a84(param_1);
    return uVar1;
}
