#include "ctx.h"

extern void func_02026c24(u8 *);
extern u8 func_02025548(u8 *);

u8 func_020202f0(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0x23d;
    func_02026c24(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
