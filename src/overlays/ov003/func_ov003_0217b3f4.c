#include "ctx.h"

extern s32 func_0203567c(u32 p);
extern void func_ov003_0217b43c(u32 a, s32 b, s32 c, u32 d, u32 e, s32 f, u32 g, u32 h);

void func_ov003_0217b3f4(u32 param_1)
{
    s32 r = func_0203567c(param_1);
    func_ov003_0217b43c(param_1, -1, -1, 0, 1, r, 19, 19);
}
