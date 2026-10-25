#include "ctx.h"
extern s32 func_0207f004(u32 a, u32 b, u32 c, u32 d);
extern void func_0207eee8(void);
void func_0207f134(u32 p0, u32 p1, u32 p2, u32 p3)
{
    s32 r = func_0207f004(p0, p1, p2, p3);
    if (r > 0) {
        do {
            func_0207eee8();
            r = func_0207f004(p0, p1, p2, p3);
        } while (r > 0);
    }
}
