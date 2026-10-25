#include "ctx.h"
extern void func_02044ca0(u32 a, u32 b);
extern void func_020bdee8(u32 a);
void func_020cedd0(u32 p0, u32 p1)
{
    func_02044ca0(0, p1);
    func_020bdee8((p1 + 6) & 0xff);
}
