#include "ctx.h"

u32 func_ov003_0217fe80(u8 *p, u32 a, u32 b);
u32 func_0203579c(u8 *p, u32 a);
void func_0203e908(u8 *p, s16 v);

void func_ov003_0217f844(u8 *param_1)
{
    u32 r;
    r = func_ov003_0217fe80(param_1, 8, 0);
    if (r != 0) {
        return;
    }
    r = func_0203579c(param_1, 46);
    if (r != 0) {
        func_0203e908(param_1, 526);
    }
}
