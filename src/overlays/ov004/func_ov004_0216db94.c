#include "ctx.h"

extern void func_02026bec(int);
extern void func_02025bb0(int);

void func_ov004_0216db94(int param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x13a;
    func_02026bec(param_1);
    func_02025bb0(param_1);
}
