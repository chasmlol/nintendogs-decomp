#include "ctx.h"

extern void func_0209c83c(u8 *p, u32 b);

void func_020ee9b8(u8 *p)
{
    void (*fp)(u8 *, u32) = func_0209c83c;
    fp(p + 400, 0);
}
