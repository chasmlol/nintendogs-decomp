#include "ctx.h"

extern void func_02065780(u32 a, u32 b);

void func_0206551c(u32 a)
{
    void (*fp)(u32, u32) = func_02065780;
    fp(a, 2);
}
