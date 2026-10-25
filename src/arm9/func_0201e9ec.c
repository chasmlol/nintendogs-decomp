#include "ctx.h"

extern void func_02026c24(s32 a);
extern u8 func_02025548(s32 a);

u8 func_0201e9ec(s32 param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0x247;
    func_02026c24(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
