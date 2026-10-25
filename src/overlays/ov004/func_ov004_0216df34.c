#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);

u8 func_ov004_0216df34(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x134;
    func_02026bac(param_1);
    return func_02025548(param_1);
}
