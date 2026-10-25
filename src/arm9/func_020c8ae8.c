#include "ctx.h"
extern u32 func_020bfe78(void);
extern void func_020c8974(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
void func_020c8ae8(u32 p0, u32 p1, u32 p2, u32 p3, u32 p4, u32 p5, u32 p6)
{
    u32 r = func_020bfe78();
    func_020c8974(p0, p1, p2, p3, p4, p5, p6, r);
}
