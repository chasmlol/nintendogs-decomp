#include "ctx.h"

extern void func_020942c0(u16 *p, s32 v);

void func_020af820(u16 p0, s32 p1)
{
    u16 buf[2];
    buf[0] = 0;
    buf[1] = p0;
    func_020942c0(buf, p1);
}
