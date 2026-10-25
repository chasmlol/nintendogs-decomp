#include "ctx.h"
extern void func_020959a0(u32 a, u32 b, u32 c);
void func_0209579c(u32 p0)
{
    u16 v = (u16)p0;
    u16 i;
    func_020959a0(4, v, 0);
    i = 0;
    do {
        func_020959a0(5, v, i);
        i = i + 1;
    } while (i < 20);
}
