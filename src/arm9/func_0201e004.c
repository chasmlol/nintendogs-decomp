#include "ctx.h"

extern void func_02025e18(u32 p);
extern u8 func_02025c5c(u32 p);

u8 func_0201e004(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0xb1;
    func_02025e18((u32)param_1);
    return func_02025c5c((u32)param_1);
}
