#include "ctx.h"

extern s32 func_0203567c(u32 p);
extern void func_ov003_021894ec(u32 p0, s32 p1, s32 p2, s32 p3);

void func_ov003_021880ec(u32 param_1)
{
    s32 r = func_0203567c(param_1);
    func_ov003_021894ec(param_1, 4, 0x1f, r);
}
