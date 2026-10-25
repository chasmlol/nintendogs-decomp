#include "ctx.h"

extern void func_02026c0c(int);
extern void func_02025548(int);

void func_ov004_0216dcb4(int param_1)
{
    *(u16 *)(param_1 + 0x152) = 5;
    func_02026c0c(param_1);
    func_02025548(param_1);
}
