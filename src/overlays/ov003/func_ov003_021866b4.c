#include "ctx.h"

extern void func_ov003_021894ec(u8 *a, u32 b, u32 c, u32 d);

void func_ov003_021866b4(u8 *param_1)
{
    u32 flag = *(vu16 *)(param_1 + 0xfc) > 40;
    func_ov003_021894ec(param_1, 3, 31, flag);
}
