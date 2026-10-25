#include "ctx.h"

extern void func_0202675c(u32 p);
extern u8 func_02025650(u32 p);

u8 func_ov003_0216e164(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0;
    func_0202675c((u32)param_1);
    return func_02025650((u32)param_1);
}
