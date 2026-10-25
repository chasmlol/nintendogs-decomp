#include "ctx.h"

extern void func_02026bac(u32 p);
extern u8 func_02025548(u32 p);
extern void func_02020768(u32 p);

void func_ov003_02166b0c(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = (s16)0x24f;
    func_02026bac((u32)param_1);
    func_02025548((u32)param_1);
    func_02020768((u32)param_1);
}
