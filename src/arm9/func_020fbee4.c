#include "ctx.h"

extern void func_02069fb8(u32 addr, u32 a, u32 b, u32 c, u32 d);

void func_020fbee4(u32 p)
{
    func_02069fb8(0x04001050, 16, 47, p, 16 - p);
}
