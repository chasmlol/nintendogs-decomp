#include "ctx.h"

s32 func_02028124(void *p);
void func_ov003_02183a9c(void *p, u32 a, u32 b, u32 c, u32 d, u32 e);

void func_ov003_02182f54(u8 *param_1)
{
    s32 r;
    s64 v;
    s32 k;

    r = func_02028124(param_1);
    k = 0x102;
    v = (s64)r * (s64)k + 0x800;
    func_ov003_02183a9c(param_1, 2, 0xf1, 0x1e, 0x31, (u32)(v >> 12));
}
