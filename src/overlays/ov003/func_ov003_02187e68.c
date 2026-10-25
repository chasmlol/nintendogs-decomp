#include "ctx.h"

extern s32 func_0203567c(u8 *p);
extern void func_02022b7c(u8 *p);
extern void func_ov003_021894ec(u32 a, u32 b, u32 c, s32 d);

void func_ov003_02187e68(u8 *p)
{
    s32 v = func_0203567c(p);
    func_02022b7c(p);
    func_ov003_021894ec((u32)p, 3, 31, v);
}
