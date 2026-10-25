#include "ctx.h"
extern s32 func_02035584(u32 a, u32 b);
extern void func_02022b7c(u32 a);
extern void func_ov003_021894ec(u32 a, u32 b, u32 c, s32 d);
void func_ov003_021891c0(u32 p0)
{
    s32 r = func_02035584(p0, 1);
    func_02022b7c(p0);
    func_ov003_021894ec(p0, 8, 127, r);
}
