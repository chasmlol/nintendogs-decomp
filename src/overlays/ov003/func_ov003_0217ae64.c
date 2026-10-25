#include "ctx.h"

extern s32 func_02035584(u8 *p, s32 v);
extern void func_ov003_0217b43c(u32 a, s32 b, s32 c, u32 d, u32 e, s32 f, u32 g, u32 h);

void func_ov003_0217ae64(u8 *p)
{
    s32 v = func_02035584(p, 2);
    func_ov003_0217b43c((u32)p, -1, -1, 0, 1, v, 19, 19);
}
