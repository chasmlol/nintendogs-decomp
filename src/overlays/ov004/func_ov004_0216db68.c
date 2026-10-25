#include "ctx.h"

extern void func_02026bec(int);
extern void func_02025548(int);

void func_ov004_0216db68(int param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x13b;
    func_02026bec(param_1);
    func_02025548(param_1);
}
