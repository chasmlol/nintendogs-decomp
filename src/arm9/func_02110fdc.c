#include "ctx.h"

extern void func_02117d8c(u32 *p);

void func_02110fdc(u32 *param_1)
{
    *param_1 = 0;
    func_02117d8c(param_1 + 0x2e);
    func_02117d8c(param_1 + 0x36);
    func_02117d8c(param_1 + 0x3e);
}
