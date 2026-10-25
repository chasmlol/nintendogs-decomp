#include "ctx.h"

extern s32 func_0203567c(u32 p);
extern void func_ov003_02190c64(u32 p0, s32 p1, s32 p2, s32 p3, s32 p4);

void func_ov003_02190c04(u32 param_1)
{
    s32 r = func_0203567c(param_1);
    func_ov003_02190c64(param_1, 1, 0, 1, r);
}
