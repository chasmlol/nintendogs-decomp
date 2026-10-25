#include "ctx.h"

extern s32 func_0203567c(u32 p);
extern void func_ov003_02184b58(u32 a, s32 b, s32 c, s32 d, s32 e);

void func_ov003_02184a8c(u32 param_1)
{
    s32 r = func_0203567c(param_1);
    func_ov003_02184b58(param_1, 0, 0x1ff, r, 0);
}
