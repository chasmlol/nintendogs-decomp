#include "ctx.h"

extern void func_02050288(u32 p);

void func_0202bfb8(u32 param_1)
{
    func_02050288(param_1);
    *(u16 *)(param_1 + 0xfa) = 0;
}
