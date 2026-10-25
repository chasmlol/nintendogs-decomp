#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025a84(u8 *p);

u8 func_0201f85c(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x47;
    func_02026c24(param_1);
    return func_02025a84(param_1);
}
