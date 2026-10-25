#include "ctx.h"

extern void func_0209c83c(void *p, u32 b);

void func_020ea834(u8 *p)
{
    void (*fp)(void *, u32) = func_0209c83c;
    fp(p + 400, 0);
}
