#include "ctx.h"

extern void func_020267dc(int);
extern void func_02025548(int);

void func_ov004_0216d984(int param_1)
{
    *(u16 *)(param_1 + 0x152) = 147;
    func_020267dc(param_1);
    func_02025548(param_1);
}
