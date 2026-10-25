#include "ctx.h"

extern void func_020db14c(u32 a, u32 b, u8 *c);

void func_020db60c(u8 *p, u8 *q)
{
    func_020db14c(*(u32 *)(p + 0x14), *(u32 *)(q + 0x14), q + 8);
}
