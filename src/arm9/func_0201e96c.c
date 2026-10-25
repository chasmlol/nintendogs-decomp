#include "ctx.h"

extern void func_02026c24(u32 p);
extern u8 func_02025548(u32 p);

u8 func_0201e96c(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = (s16)0x24a;
    func_02026c24((u32)param_1);
    return func_02025548((u32)param_1);
}
