#include "ctx.h"

extern void func_020514c8(u8 *);

void func_0202bff0(u8 *param_1)
{
    func_020514c8(param_1);
    *(s16 *)(param_1 + 0xfa) = 0;
}
