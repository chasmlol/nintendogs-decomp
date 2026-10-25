#include "ctx.h"

extern u16 func_020382d8(void);
extern void func_02026994(int);
extern void func_02025bb0(int);

void func_ov004_0216d0d4(int param_1)
{
    *(u16 *)(param_1 + 0x152) = func_020382d8();
    func_02026994(param_1);
    func_02025bb0(param_1);
    *(u32 *)(param_1 + 0x484) = 0;
}
