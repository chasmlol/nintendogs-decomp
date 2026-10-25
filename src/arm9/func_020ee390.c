#include "ctx.h"

extern void func_020bdd1c(u32 a, u32 b);
extern void func_020ee3f8(u32 a, u32 *b, u32 c);

void func_020ee390(u32 p0, u32 *p1)
{
    func_020bdd1c(p0, 81);
    func_020ee3f8(p0, p1, 0);
}
