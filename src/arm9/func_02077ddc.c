#include "ctx.h"

extern u32 func_02074564(u8 *p, s32 n);
extern void func_0207e1ac(u32 *p, u32 v);

void func_02077ddc(u32 *p1, u8 *p2, s32 p3)
{
    u32 v = func_02074564(p2, p3);
    func_0207e1ac(p1, v);
}
