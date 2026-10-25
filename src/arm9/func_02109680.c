#include "ctx.h"

extern void func_02003d90(u32 a);

void func_02109680(u32 *p)
{
    void (*fp)(u32) = func_02003d90;
    *p = 0;
    fp(0x10);
}
