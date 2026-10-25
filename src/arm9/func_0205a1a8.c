#include "ctx.h"

extern void func_020266f8(u8 *p);
extern u8 func_02025bb0(u8 *p);

u8 func_0205a1a8(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0x11;
    func_020266f8(param_1);
    uVar1 = func_02025bb0(param_1);
    return uVar1;
}
