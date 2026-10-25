#include "ctx.h"

extern void func_ov003_021894ec(u8 *a, u32 b, u32 c, u32 d);

void func_ov003_0218944c(u8 *param_1)
{
    u32 flag = *(vu16 *)(param_1 + 0xfc) > 60;
    func_ov003_021894ec(param_1, 4, 31, flag);
}
