#include "ctx.h"

extern void func_02026bac(int);
extern void func_02025548(int);

void func_ov004_0216df88(int param_1)
{
    *(u16 *)(param_1 + 0x152) = 304;
    func_02026bac(param_1);
    func_02025548(param_1);
}
