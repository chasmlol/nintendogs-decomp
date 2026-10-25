#include "ctx.h"

extern void func_02026c0c(int);
extern void func_02025bb0(int);
extern void func_0209f59c(int);

void func_ov004_0216d1b8(int param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x11b;
    func_02026c0c(param_1);
    func_02025bb0(param_1);
    func_0209f59c(5);
}
