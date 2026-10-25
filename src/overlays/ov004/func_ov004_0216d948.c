#include "ctx.h"

extern void func_02026c24(int);
extern void func_02025548(int);

void func_ov004_0216d948(int param_1)
{
    *(u16 *)(param_1 + 0x152) = 0;
    func_02026c24(param_1);
    func_02025548(param_1);
    *(u32 *)(param_1 + 0x2a0) = 0xa000;
    *(u32 *)(param_1 + 0x2a4) = 0;
    *(u32 *)(param_1 + 0x2a8) = 0xa000;
}
