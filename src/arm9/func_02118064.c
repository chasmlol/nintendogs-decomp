#include "ctx.h"

extern void func_02117d8c(u8 *p);

void func_02118064(u8 *param_1)
{
    func_02117d8c(param_1 + 0x40);
    func_02117d8c(param_1 + 0x60);
    *(u32 *)(param_1 + 4) = 0;
}
