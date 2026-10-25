#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);

u8 func_0201fe20(u8 *param_1)
{
    u8 r;
    *(u16 *)(param_1 + 256 + 82) = 0xe;
    func_02026c24(param_1);
    r = func_02025548(param_1);
    return r;
}
