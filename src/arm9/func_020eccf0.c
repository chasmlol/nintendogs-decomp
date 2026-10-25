#include "ctx.h"

extern void func_0209c83c(void);

void func_020eccf0(u8 *p)
{
    void (*fp)(void *, u32) = (void (*)(void *, u32))func_0209c83c;
    fp(p + 400, 0);
}
