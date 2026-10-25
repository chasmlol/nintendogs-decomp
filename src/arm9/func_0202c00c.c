#include "ctx.h"

extern void func_020523b0(u8 *p);

void func_0202c00c(u8 *param_1)
{
    func_020523b0(param_1);
    *(u16 *)(param_1 + 0xfa) = 0;
}
