#include "ctx.h"

extern void func_02025e18(u8 *p);
extern u8 func_02025c5c(u8 *p);

u8 func_0201e080(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x165;
    func_02025e18(param_1);
    return func_02025c5c(param_1);
}
