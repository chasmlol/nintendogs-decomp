#include "ctx.h"
extern s32 func_02087504(u32 a, u32 b, u32 c, u32 d);
extern void func_02087644(u32 a);
u32 func_0207df9c(u32 *p0, u32 p1, u32 p2, u32 p3)
{
    s32 r = func_02087504((u32)p0, p1, p2, p3);
    if (r != 0) {
        func_02087644((u32)p0);
        return 1;
    }
    return 0;
}
