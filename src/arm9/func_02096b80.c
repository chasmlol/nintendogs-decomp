#include "ctx.h"
extern void func_02096c20(u32 a, u32 b, u32 c);
void func_02096b80(u32 p0)
{
    u16 v = (u16)p0;
    u16 i;
    func_02096c20(4, v, 0);
    i = 0;
    do {
        func_02096c20(5, v, i);
        i = i + 1;
    } while (i < 20);
}
