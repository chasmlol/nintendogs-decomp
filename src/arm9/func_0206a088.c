#include "ctx.h"

extern void func_0206c8b8(void *p);

void func_0206a088(void *obj)
{
    vu32 *reg = (vu32 *)0x04000400;
    void (*fp)(void *) = func_0206c8b8;
    *reg = 0x1a;
    fp(obj);
}
