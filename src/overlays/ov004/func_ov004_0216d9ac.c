#include "ctx.h"

extern void func_02026800(int);
extern void func_02025548(int);

void func_ov004_0216d9ac(int param_1)
{
    *(u16 *)(param_1 + 0x152) = 24;
    *(u16 *)(param_1 + 0x154) = 45;
    func_02026800(param_1);
    func_02025548(param_1);
}
