#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025a84(u8 *p);

u8 func_0201f07c(u8 *param_1)
{
    u8 r;
    *(u16 *)(param_1 + 256 + 82) = 0x21c;
    func_02026c24(param_1);
    r = func_02025a84(param_1);
    return r;
}
