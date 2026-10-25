#include "ctx.h"
extern void func_0207d0ac(u32 a, u32 b);
extern s32 func_02071d94(u32 a);
u32 func_02071de4(u32 *p0, u32 p1)
{
    s32 r;
    func_0207d0ac((u32)(p0 + 1), 12);
    *p0 = p1;
    r = func_02071d94((u32)p0);
    return r != 0;
}
