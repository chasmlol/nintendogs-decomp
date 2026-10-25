#include "ctx.h"

extern void func_020264b0(s32 a);
extern u8 func_02025bb0(s32 a);

u8 func_ov006_02165b1c(s32 param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x8b;
    func_020264b0(param_1);
    uVar1 = func_02025bb0(param_1);
    return uVar1;
}
