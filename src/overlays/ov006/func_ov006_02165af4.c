#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);

u8 func_ov006_02165af4(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0x8d;
    func_02026c24(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
