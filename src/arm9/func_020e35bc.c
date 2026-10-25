#include "ctx.h"

extern void func_020c7434(void *p, u32 b, u32 c, u32 d);

void func_020e35bc(u8 *p, u32 b)
{
    void (*fp)(void *, u32, u32, u32) = func_020c7434;
    fp(p, b, *(u32 *)(**(u8 ***)(p + 0x214) + 8), 0);
}
