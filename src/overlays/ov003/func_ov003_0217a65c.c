#include "ctx.h"

extern s32 func_0203567c(u8 *p);
extern void func_ov003_0217b43c(u32 a, u32 b, u32 c, u32 d, u32 e, s32 f, u32 g, u32 h);

void func_ov003_0217a65c(u8 *p)
{
    s32 v = func_0203567c(p);
    func_ov003_0217b43c((u32)p, 5, 25, 1, 1, v, 23, 23);
}
