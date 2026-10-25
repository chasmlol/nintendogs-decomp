#include "ctx.h"
extern u32 func_0206fd10(void);
extern void func_0206dfc4(u32 a, u32 b, u32 c, s32 d);
void func_0206f66c(u32 p0, u16 *p1, s32 p2)
{
    if (p2 > 0) {
        u32 r = func_0206fd10();
        func_0206dfc4(r, p0, (u32)p1, p2);
    }
}
