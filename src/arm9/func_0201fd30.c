#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);

u8 func_0201fd30(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0x5c;
    func_02026c24(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
