#include "ctx.h"

extern u16 func_02035164(int);
extern void func_02026bac(int);
extern void func_02025548(int);

void func_ov004_0216d108(int param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x112;
    *(u16 *)(param_1 + 0x158) = func_02035164(param_1);
    func_02026bac(param_1);
    func_02025548(param_1);
    *(u32 *)(param_1 + 0x484) = 0;
}
