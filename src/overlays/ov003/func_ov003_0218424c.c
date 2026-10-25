#include "ctx.h"

extern s32 func_0203567c(u32 p);
extern void func_ov003_02184b58(u32 a, u32 b, u32 c, s32 d, u32 e);

void func_ov003_0218424c(u32 param_1)
{
    s32 r = func_0203567c(param_1);
    func_ov003_02184b58(param_1, 8, 127, r, 0);
}
