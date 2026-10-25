#include "ctx.h"

extern void func_02108e24(u32 p);

void func_02125514(u32 param_1)
{
    func_02108e24(1);
    *(u32 *)(param_1 + 0x90) = 0;
}
