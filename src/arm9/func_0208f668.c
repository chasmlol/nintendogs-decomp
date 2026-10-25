#include "ctx.h"

extern void func_0207ce4c(u8 *p, u32 v);

void func_0208f668(u8 *p, u32 v)
{
    void (*fp)(u8 *, u32) = func_0207ce4c;
    fp(p + 60, (u16)v);
}
