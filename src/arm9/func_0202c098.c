#include "ctx.h"

extern void func_02054028(u32 p);

void func_0202c098(u32 param_1)
{
    func_02054028(param_1);
    *(u16 *)(param_1 + 0xfa) = 0;
}
