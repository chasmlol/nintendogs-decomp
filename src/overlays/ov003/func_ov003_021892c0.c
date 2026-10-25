#include "ctx.h"

extern s32 func_02035584(u8 *p, s32 v);
extern void func_02022b7c(u8 *p);
extern void func_ov003_021894ec(u32 a, u32 b, u32 c, s32 d);

void func_ov003_021892c0(u8 *p)
{
    s32 v = func_02035584(p, 1);
    func_02022b7c(p);
    func_ov003_021894ec((u32)p, 4, 31, v);
}
